#include "movie.h"
#include "util.h"
#include <sstream>

using namespace std;

Movie::Movie(const std::string category, const std::string name, double price, int qty, string genre, string rating):
Product(category, name, price, qty), genre_(genre),rating_(rating){}
std::set<std::string> Movie:: keywords() const{
	std::set<string> set1 = parseStringToWords(name_);
	std::set<string> set2 = parseStringToWords(genre_);
	std::set<string> set3 = parseStringToWords(rating_);
	set1 = setUnion(set1,set2);
	set1 = setUnion(set1,set3);
	return set1;
}

std::string Movie::displayString() const{
	stringstream s1;
	stringstream s2;
	s1 << qty_;
	s2 << price_;
	string qty_string = s1.str();
	string price_string = s2.str();
	string temp = name_ + "\n" + "Genre: " + genre_ + " Rating: " + rating_ + "\n" +
	price_string + " " + qty_string +" left.";
	return temp;

}
void Movie::dump(std::ostream& os) const{
	os << category_ << "\n" << name_ << "\n" << price_ << "\n";
  os << qty_ << "\n" << genre_ << "\n" << rating_ << "\n";
}