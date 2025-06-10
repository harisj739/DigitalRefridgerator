/*
 * Food.hpp
 *
 *  Created on: Apr 21, 2021
 *      Author: haris
 */

#ifndef FOOD_HPP_
#define FOOD_HPP_

#include "Date.hpp"
using namespace std;

class Food {
private:
//protected:
	string Name;
	Date datePurchased;
	Date expireDate;
public:
	Food();
	virtual ~Food();
	void virtual print(void) = 0;
	string virtual whoAmI() = 0;
	const Date& getDatePurchased() const;
	void setDatePurchased(const Date &datePurchased);
	const Date& getExpireDate() const;
	void setExpireDate(const Date &expireDate);
	const string& getName() const;
	void setName(const string &name);
};

#endif /* FOOD_HPP_ */
