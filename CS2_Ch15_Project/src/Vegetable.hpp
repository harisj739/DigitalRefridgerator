/*
 * Vegetables.hpp
 *
 *  Created on: Apr 25, 2021
 *      Author: haris
 */

#ifndef VEGETABLE_HPP_
#define VEGETABLE_HPP_

#include "Food.hpp"

class Vegetable: public Food {
private:
	int totalFiber;
	int totalSodium;
public:
	Vegetable();
	virtual ~Vegetable();
	int getTotalFiber() const;
	void setTotalFiber(int totalFiber);
	int getTotalSodium() const;
	void setTotalSodium(int totalSodium);
	void print(void);
	string whoAmI();

};

#endif /* VEGETABLE_HPP_ */
