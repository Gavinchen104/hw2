#ifndef MYDATASTORE_H
#define MYDATASTORE_H

#include "datastore.h"
#include "product.h"
#include "user.h"
#include "book.h"
#include "movie.h"
#include "clothing.h"
#include "util.h"
#include <map>
#include <vector>
#include <set>



class MyDataStore : public DataStore{
public:
    MyDataStore();
    ~MyDataStore();
		//add a product 
    void addProduct(Product* p); 
		//add a user 
    void addUser(User* name);
		//search for the products by using their keywords(with 1 being OR and 2 being ADD)
    std::vector<Product*> search(std::vector<std::string>& terms, int type);
		//display all the products and users information
    void dump(std::ostream& ofile);
		//add the produc to the user's cart
    void addtoCart(User* name, Product* p );
		//display the cart of the user
    void viewCart(User* name);
		//buy the cart of the user if there is enough money and products in stock
    void buyCart(User* name);
		//change the string(user) tp User*(user)
		User* findUser(std::string name);

private:
    std::map<std::string,std::set<Product*> > map_Product;//a map that links the keywords and the products
    std::set<User*> set_user;// a set of all the users
		std::set<Product*> set_product;// a set of all the products
    std::map<User*,std::vector<Product*> > map_cart;//a map that links the user and their carts

};

#endif





    