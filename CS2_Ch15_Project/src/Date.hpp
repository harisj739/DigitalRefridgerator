/*
 * Date.hpp
 *
 *  Created on: Apr 21, 2021
 *      Author: haris
 */

#ifndef DATE_HPP_
#define DATE_HPP_

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Date {
private:
	int Year;
	int Month;
	int Day;
public:
	Date();
	virtual ~Date();
	int getDay() const;
	bool setDay(int Day);
	int getMonth() const;
	bool setMonth(int Month);
	int getYear() const;
	bool setYear(int Year);
	string getDate() const;
	friend ostream &operator<<(ostream &output, const Date &rval);
};

#endif /* DATE_HPP_ */
