#include "book.h"
#include "util.h"
#include <sstream>
#include <iomanip>

using namespace std;

//initializing 
Book::Book(const std::string category, const std::string name, double price, int qty, std::string author, std::string isbn):
Product(category, name, price, qty),isbn_(isbn),author_(author){}

std::set<std::string> Book:: keywords() const{
	// convert the string to lowercase AND into a set 
	std::set<string> set1 = parseStringToWords(convToLower(name_));
	std::set<string> set2 = parseStringToWords(convToLower(author_));
	std::set<string> set3 = setUnion(set1,set2);
	std::set<string> set4;
	for(std::set<std::string>::iterator it = set3.begin(); it!=set3.end(); ++it){
  	set4.insert(convToLower(*it));
	}
	set4.insert(isbn_);
 	return set4;
}

std::string Book::displayString() const{
	stringstream s1;
	stringstream s2;
	//input data to the stream
	s1 << qty_;
	s2 << price_;
	string qty_string = s1.str();
	string price_string = s2.str();
	string temp = name_ + "\n" + "Author: " + author_ + " ISBN: " + isbn_ + "\n" +
	price_string + " " + qty_string +" left.";
	return temp;

}
void Book::dump(std::ostream& os) const{
	os << category_ << "\n" << name_ << "\n" << fixed << setprecision(2)<< price_ << "\n";
  os << qty_ << "\n" << isbn_ << "\n" << author_ << "\n";
}