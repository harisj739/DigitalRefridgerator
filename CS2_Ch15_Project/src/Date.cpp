/*
 * Date.cpp
 *
 *  Created on: Apr 21, 2021
 *      Author: haris
 */

#include "Date.hpp"

Date::Date() {
	// TODO Auto-generated constructor stub
	this->setDay(0);
	this->setMonth(0);
	this->setYear(0);

}

int Date::getDay() const {
	return Day;
}

bool Date::setDay(int day) {
	if(this->Month == 0 || this->Year == 0) {
		return false;
	} //if
	else if((day < 1 || day > 31) && (this->Month == 1 || this->Month == 3 || this->Month == 5 || this->Month == 7 || this->Month == 8 || this->Month == 10 || this->Month == 12)) {
		return false;
	} //else if
	else if((day < 1 || day > 30) && (this->Month == 4 || this->Month == 6 || this->Month == 9 || this->Month == 11)) {
		return false;
	} //else if
	else if((day < 1 || day > 28) && this->Month == 2) {
		return false;
	} //else if
	else {
		this->Day = day;
		return true;
	} //else
} //setDay()

int Date::getMonth() const {
	return Month;
}

bool Date::setMonth(int month) {
	if(this->Year == 0) {
		return false;
	} //if
	else if(month < 1 || month > 12) {
		return false;
	} //else if
	else {
		this->Month = month;
		return true;
	} //else
} //setMonth()

int Date::getYear() const {
	return Year;
}

bool Date::setYear(int year) {
	if(year < 1 || year > 9999) {
		return false;
	} //if
	else {
		this->Year = year;
		return true;
	} //else
} //setYear()

ostream &operator<<(ostream &output, const Date &rval) {
	if(rval.Day == 0 || rval.Month == 0 || rval.Year == 0) {
		output << "Invalid date sent";
	} //if
	else {
		output << rval.Month << "/" << rval.Day << "/" << rval.Year;
	} //else
	return output;
} //&operator<<

Date::~Date() {
	// TODO Auto-generated destructor stub
}

string Date::getDate() const {
	string date;
	date = to_string(getYear()) + "/" + to_string(getMonth()) + "/" + to_string(getDay());
	return date;

}

