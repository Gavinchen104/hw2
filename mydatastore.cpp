#include "mydatastore.h"
#include <iostream>
#include <fstream>
#include <set>
#include <sstream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <cstdlib>

using namespace std;

MyDataStore::MyDataStore() {
	// std::map<std::string,std::set<Product*> > map_Product;
  // std::set<User*> set_user;
	// std::set<Product*> set_product;
  // std::map<User*,std::vector<Product*> > map_cart;

}

MyDataStore:: ~MyDataStore(){
	set<User*>::iterator it1;
	for (it1 = set_user.begin(); it1 != set_user.end(); it1++) {
		delete *it1; //derefence for User*
	}

	set<Product*>::iterator it2;
	for (it2 = set_product.begin(); it2 != set_product.end(); it2++) {
		delete *it2; //derefence for Product*
	}

}

void MyDataStore::addProduct(Product* p){
	//insert the product to the set
	set_product.insert(p);
	//find the keywords for the product
	std::set<std::string> set1 = p->keywords();
	std::set<std::string>::iterator it;
	//creat a new set with the new prodct
	std::set<Product*> set_temp;
	set_temp.insert(p);
	
	std::map<std::string, set<Product*> >:: iterator it_map;
	
	for(it = set1.begin(); it != set1.end();++it){
		it_map = map_Product.find(convToLower(*it));
		//if it does not exist 
		if(it_map == map_Product.end()){
			map_Product.insert(std::make_pair(convToLower(*it), set_temp ));
		}
		//if it does exist
		else{
			it_map->second.insert(p);
		}
	}
}

void MyDataStore::addUser(User* name){
	set_user.insert(name);
	std::vector< Product*> vec_Prod;
	map_cart[name] = vec_Prod;
}

std::vector<Product*> MyDataStore::search(std::vector<std::string>& terms, int type){
	
	std:: set<Product*> temp_set;
	std:: vector<Product*> temp_vec;
	if(type == 1) // union
	{	//setting the first set to be temp_set
		temp_set = map_Product[terms[0]]; 
		//find the union 
		for(unsigned int i = 1; i < terms.size() ; i++){
			temp_set = setUnion(temp_set, map_Product[terms[i]]);
		}
		//push the data in the set to the vector 
		std:: set<Product*>::iterator it;
		for(it =temp_set.begin(); it!= temp_set.end(); ++it){
			temp_vec.push_back(*it);
		}
		return temp_vec;
	}
	
	else if(type == 0) //intersection
	{	//setting the first set to be temp_set
		temp_set = map_Product[terms[0]]; 
		//find the intersection
		for(unsigned int i = 1; i < terms.size() ; i++){
			temp_set = setIntersection(temp_set, map_Product[terms[i]]);
		}
		//push the data in the set to the vector 
		std:: set<Product*>::iterator it;
		for(it =temp_set.begin(); it!= temp_set.end(); ++it){
			temp_vec.push_back(*it);
		}
		return temp_vec;
	}
	else{
		//invalid when it is not 1 or 0
		cout << "Invalid input for type" << endl;
		return temp_vec;
	}
}

void MyDataStore::dump(std::ostream& ofile){
	//dump products
	ofile << "<products>" << endl;
	std:: set<Product*> :: iterator it;
	for(it = set_product.begin(); it!= set_product.end(); ++it){
		(*it)->dump(ofile);
	}
	ofile << "</products>" << endl;
	//dump user
	ofile << "<users>" << endl;
	std:: set<User*> :: iterator it1;
	for(it1 = set_user.begin(); it1!= set_user.end(); ++it1){
		(*it1)->dump(ofile);
	}
	ofile << "</users>" << endl;


}
void MyDataStore:: addtoCart(User* name,Product* p ){
		//check to see if the user exists
		if(set_user.find(name) == set_user.end()){
      cout << "Invalid request" << endl;
			return;
    }
		//the user exists
		else{ 
			std::map<User*, vector<Product*> >::iterator it;
			for(it = map_cart.begin(); it!= map_cart.end(); ++it){
				//find the the cart that belongs to the user
				if(it->first == name){
					it->second.push_back(p);		
				}
			}
		}
}
void MyDataStore:: viewCart(User* name){
	//check to see if the user exists
	if(set_user.find(name) == set_user.end()){
    cout << "Invalid username" << endl;
		return;
  } 
	else{
		int i=1;
		std::map<User*, vector<Product*> >::iterator it;
		// cout << "Item" << i << ":" << endl;
		// cout << " " << endl;
		for(it = map_cart.begin(); it!=map_cart.end(); ++it){
			//find the cart that belongs to the user
			if(it->first == name){
				std::vector<Product*> :: iterator it2;
				for(it2 = it->second.begin(); it2 != it->second.end(); ++it2){
					//print all the products in the cart
					cout << "Item " << i << endl;
					cout << (*it2)->displayString() << endl;
					cout << " " << endl;
					i++;
					cout << endl;
				}
			}
		}
		return;
	}
}


void MyDataStore:: buyCart(User* name){
  //check if the given user exist
	if(set_user.find(name) == set_user.end()){
    cout << "Invalid username" << endl;
		return;
  } 
	else{
		//know that it exists
		//std::map<User*, vector<Product*> >::iterator it = map_cart.find(name);

		std::vector<Product*> ::iterator it1;
		std::vector<Product*> new_cart;
		std::vector<Product*> user_cart = map_cart.find(name)->second;
		
		for(it1 = user_cart.begin(); it1!=user_cart.end(); ++it1){
			//checking if the user has enough money AND there are enough products in stock
			if(name->getBalance() >= (*it1)->getPrice() && (*it1)->getQty() >=1){
				//product in stock minus by 1
				(*it1)->subtractQty(1);
				//user money reduces
				name->deductAmount((*it1)->getPrice()); 
			}	
			//user cannot buy the product. save it 	
			else {
				new_cart.push_back(*it1);
			}

		}	
		//update the new cart of the user
		user_cart = new_cart;
		map_cart.find(name)->second = user_cart;

	}
	return;
}

User* MyDataStore::findUser(std::string name){
	map<User*,vector<Product*> >::iterator it;
	User* Name;
  for(it = map_cart.begin(); it!= map_cart.end(); ++it ){
  	if (it->first->getName() == name){
        Name = it->first;
		}
	}
	return Name;
}