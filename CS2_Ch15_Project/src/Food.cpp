/*
 * Food.cpp
 *
 *  Created on: Apr 21, 2021
 *      Author: haris
 */

#include "Food.hpp"

Food::Food(){
	// TODO Auto-generated constructor stub
	this->setName(" ");


}

Food::~Food() {
	// TODO Auto-generated destructor stub
}

void Food::print(void) {
	string expireDateString = this->expireDate.getDate();
	string datePurchasedString = this->datePurchased.getDate();
	cout << this->getName() << setw(20) << datePurchasedString << setw(20) << expireDateString;
}

const Date& Food::getDatePurchased() const {
	return datePurchased;
}

void Food::setDatePurchased(const Date &datePurchased) {
	this->datePurchased = datePurchased;
}

const Date& Food::getExpireDate() const {
	return expireDate;
}

void Food::setExpireDate(const Date &expireDate) {
	this->expireDate = expireDate;
}

const string& Food::getName() const {
	return Name;
}

void Food::setName(const string &name) {
	Name = name;
}

string Food::whoAmI(void) {
	return "Food";
}
