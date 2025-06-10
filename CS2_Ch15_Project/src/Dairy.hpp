/*
 * Dairy.hpp
 *
 *  Created on: Apr 25, 2021
 *      Author: haris
 */

#ifndef DAIRY_HPP_
#define DAIRY_HPP_

#include "Food.hpp"

class Dairy: public Food {
private:
	int fat;
	double cholesterol;
public:
	Dairy();
	virtual ~Dairy();
	void print();
	string whoAmI();
	double getCholesterol() const;
	void setCholesterol(double cholesterol);
	int getFat() const;
	void setFat(int fat);
};

#endif /* DAIRY_HPP_ */
