/*
 * Fruit.cpp
 *
 *  Created on: Apr 25, 2021
 *      Author: haris
 */

#include "Fruit.hpp"

Fruit::Fruit() {
	//Food();
	setSugarAmount(0);
	setTotalC(0);

}

long Fruit::getSugarAmount() const {
	return sugarAmount;
}

void Fruit::setSugarAmount(long sugarAmount) {
	this->sugarAmount = sugarAmount;
}

float Fruit::getTotalC() const {
	return totalC;
}

void Fruit::setTotalC(float totalC) {
	this->totalC = totalC;
}

string Fruit::whoAmI(void) {
	return "Fruit";
}

void Fruit::print(void) {
	cout << whoAmI() << ":" << setw(20) << right << this->getName() << setw(15)<< this->sugarAmount << endl;
}

Fruit::~Fruit() {
	// TODO Auto-generated destructor stub
}

