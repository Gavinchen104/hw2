#include "movie.h"
#include "util.h"
#include <sstream>
#include <iomanip>

using namespace std;

//initializing
Movie::Movie(const std::string category, const std::string name, double price, int qty, std::string genre, std::string rating):
Product(category, name, price, qty), genre_(genre),rating_(rating){}

std::set<std::string> Movie:: keywords() const{
	//convert the string to lowercase AND into a set 
	std::set<string> set1 = parseStringToWords(convToLower(name_));
	std::set<string> set2 = parseStringToWords(convToLower(genre_));
	std::set<string> set3 = parseStringToWords(convToLower(rating_));
	set1 = setUnion(set1,set2);
	set1 = setUnion(set1,set3);
	return set1;
}

std::string Movie::displayString() const{
	stringstream s1;
	stringstream s2;
	//input data to the stream
	s1 << qty_;
	s2 << price_;
	string qty_string = s1.str();
	string price_string = s2.str();
	string temp = name_ + "\n" + "Genre: " + genre_ + " Rating: " + rating_ + "\n" +
	price_string + " " + qty_string +" left.";
	return temp;

}
void Movie::dump(std::ostream& os) const{
	os << category_ << "\n" << name_ << "\n" << fixed << setprecision(2)<< price_ << "\n";
  os << qty_ << "\n" << genre_ << "\n" << rating_ << "\n";
}