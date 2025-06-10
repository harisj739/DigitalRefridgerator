/*
 * Vegetables.cpp
 *
 *  Created on: Apr 25, 2021
 *      Author: haris
 */

#include "Vegetable.hpp"

Vegetable::Vegetable():Food() {
	// TODO Auto-generated constructor stub
	this->setTotalFiber(0);
	this->setTotalSodium(0);

}

int Vegetable::getTotalFiber() const {
	return totalFiber;
}

void Vegetable::setTotalFiber(int totalFiber) {
	this->totalFiber = totalFiber;
}

int Vegetable::getTotalSodium() const {
	return totalSodium;
}

void Vegetable::setTotalSodium(int totalSodium) {
	this->totalSodium = totalSodium;
}

string Vegetable::whoAmI(void) {
	return "Vegetable";
}

void Vegetable::print(void) {
	cout << whoAmI() << ":" << setw(16) << right << this->getName() << setw(15) << this->totalSodium << endl;
}

Vegetable::~Vegetable() {
	// TODO Auto-generated destructor stub
}

