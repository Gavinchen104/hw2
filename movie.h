#ifndef MOVIE_H
#define MOVIE_H

#include "product.h"

using namespace std;

class Movie : public Product{

	public:
		Movie(const std::string category, const std::string name, double price, int qty, string genre, string rating);
		~Movie();
		set<std::string> keywords() const;
		string displayString() const;
		void dump(std::ostream& os) const ;
	
	private:
		string genre_;
		string rating_;

};

#endif