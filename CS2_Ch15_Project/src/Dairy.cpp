/*
 * Dairy.cpp
 *
 *  Created on: Apr 25, 2021
 *      Author: haris
 */

#include "Dairy.hpp"

Dairy::Dairy() {
	// TODO Auto-generated constructor stub
	//Food();
	setFat(0);
	setCholesterol(0);

}

double Dairy::getCholesterol() const {
	return cholesterol;
}

void Dairy::setCholesterol(double cholesterol) {
	this->cholesterol = cholesterol;
}

int Dairy::getFat() const {
	return fat;
}

void Dairy::setFat(int fat) {
	this->fat = fat;
}

string Dairy::whoAmI(void) {
	return "Dairy";
}


void Dairy::print(void) {
	string expireDateString = this->getExpireDate().getDate();
	string datePurchasedString = this->getDatePurchased().getDate();
	cout << whoAmI() << ":" << setw(20) << right << this->getName() << setw(15) << this->fat << setw(15) << datePurchasedString << setw(15) << expireDateString << setw(10) << this->cholesterol << endl;
}

Dairy::~Dairy() {
	// TODO Auto-generated destructor stub
}

