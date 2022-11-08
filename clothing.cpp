#include "clothing.h"
#include "util.h"
#include <sstream>
#include <iomanip>

using namespace std;

//initializing
Clothing::Clothing(const std::string category, const std::string name, double price, int qty, std::string size, std::string brand):
Product(category, name, price, qty),brand_(brand),size_(size){}

std::set<std::string> Clothing:: keywords() const{
	//convert the string to lowercase AND into a set 
	std::set<string> set1 = parseStringToWords(convToLower(name_));
	std::set<string> set2 = parseStringToWords(convToLower(size_));
	std::set<string> set3 = parseStringToWords(convToLower(brand_));
	set1 = setUnion(set1,set2);
	set1 = setUnion(set1,set3);
	return set1;
}

std::string Clothing::displayString() const{
	stringstream s1;
	stringstream s2;
	//input data to the stream
	s1 << qty_;
	s2 << price_;
	string qty_string = s1.str();
	string price_string = s2.str();
	string temp = name_ + "\n" + "Size: " + size_ + " Brand: " + brand_ + "\n" +
	price_string + " " + qty_string +" left.";
	return temp;

}
void Clothing::dump(std::ostream& os) const{
	os << category_ << "\n" << name_ << "\n" << fixed << setprecision(2)<<price_ << "\n";
  os << qty_ << "\n" << size_ << "\n" << brand_ << "\n";
}