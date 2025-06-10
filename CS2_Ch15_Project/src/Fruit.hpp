/*
 * Fruit.hpp
 *
 *  Created on: Apr 25, 2021
 *      Author: haris
 */

#ifndef FRUIT_HPP_
#define FRUIT_HPP_

#include "Food.hpp"

class Fruit: public Food {
private:
	long sugarAmount;
	float totalC;
	
public:
	Fruit();
	virtual ~Fruit();
	void print();
	string whoAmI();
	long getSugarAmount() const;
	void setSugarAmount(long sugarAmount);
	float getTotalC() const;
	void setTotalC(float totalC);
};

#endif /* FRUIT_HPP_ */
