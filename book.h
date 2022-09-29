#ifndef BOOK_H
#define BOOK_H

#include "product.h"

using namespace std;

class Book : public Product{

	public:
		Book(const std::string category, const std::string name, double price, int qty, string author, string isbn);
		~Book();
		set<std::string> keywords() const;
		string displayString() const;
		void dump(std::ostream& os) const ;
	
	private:
		string isbn_;
		string author_;

};

#endif