#ifndef CLOTHING_H
#define CLOTHING_H

#include "product.h"

using namespace std;

class Clothing : public Product{

	public:
		Clothing(const std::string category, const std::string name, double price, int qty, string size, string brand);
		~Clothing();
		set<std::string> keywords() const;
		string displayString() const;
		void dump(std::ostream& os) const ;
	
	private:
		string brand_;
		string size_;

};

#endif