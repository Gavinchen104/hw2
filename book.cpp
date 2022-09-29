#include "book.h"
#include "util.h"
#include <sstream>

using namespace std;


Book::Book(const std::string category, const std::string name, double price, int qty, string author, string isbn):
Product(category, name, price, qty),isbn_(isbn),author_(author){}

std::set<std::string> Book:: keywords() const{
	std::set<string> set1 = parseStringToWords(name_);
	std::set<string> set2 = parseStringToWords(author_);
	std::set<string> set3 = parseStringToWords(isbn_);
	set1 = setUnion(set1,set2);
	set1 = setUnion(set1,set3);
	return set1;
}

std::string Book::displayString() const{
	stringstream s1;
	stringstream s2;
	s1 << qty_;
	s2 << price_;
	string qty_string = s1.str();
	string price_string = s2.str();
	string temp = name_ + "\n" + "Author: " + author_ + " ISBN: " + isbn_ + "\n" +
	price_string + " " + qty_string +" left.";
	return temp;

}
void Book::dump(std::ostream& os) const{
	os << category_ << "\n" << name_ << "\n" << price_ << "\n";
  os << qty_ << "\n" << isbn_ << "\n" << author_ << "\n";
}