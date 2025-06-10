//============================================================================
// Name        : Ch15_Project.cpp
// Author      : Haris Jilani
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
//#include "Food.hpp"
#include "Vegetable.hpp"
#include "Fruit.hpp"
#include "Dairy.hpp"
using namespace std;

int main() {

	string filename;
	const int SIZE = 100;
	fstream foodFile;
	int foodtype = 0;
	string foodName;
	Date datePurchased;
	Date dateExpired;
	int monthPurchased = 0;
	int dayPurchased = 0;
	int yearPurchased = 0;
	int monthExpired = 0;
	int dayExpired = 0;
	int yearExpired = 0;
	int fiber = 0;
	int sodium = 0;
	long sugar = 0;
	int tFat = 0;
	double tCholesterol = 0;
	float vitaminC = 0;
	int foodCounter = -1;
	Food* myRefrigerator[SIZE];
	cout << "Welcome to my food reporting system" << endl;
	cout << "Enter the file name please: ";
	getline(cin, filename);
	if(filename == "Food.txt") {
		foodFile.open(filename, ios::in);
		if(foodFile.fail()) {
			cout << "Failed to open the file.";
		}
		else if (!foodFile.fail()) {
			while (!foodFile.eof()) {
				while (foodFile.eof()) {
					break;
				}
				foodFile >> foodtype;
				switch (foodtype) {
				case 01: {
						foodFile >> foodName >> monthPurchased >> dayPurchased >> yearPurchased >> monthExpired >> dayExpired >> yearExpired >> fiber >> sodium;
						datePurchased.setMonth(monthPurchased);
						datePurchased.setDay(dayPurchased);
						datePurchased.setYear(yearPurchased);
						//sets the month, day, and year of the purchase date which is read from the file
						dateExpired.setMonth(monthExpired);
						dateExpired.setDay(dayExpired);
						dateExpired.setYear(yearExpired);
						//sets the month, day, and year of the expire date which is read from the file
						Vegetable* veggie = new Vegetable();
						veggie->setName(foodName);
						veggie->setDatePurchased(datePurchased);
						veggie->setExpireDate(dateExpired);
						veggie->setTotalSodium(sodium);
						veggie->setTotalFiber(fiber);
						for(int i = foodCounter + 1; i < foodCounter + 2; i++) {
							myRefrigerator[i] = veggie;
						}
						foodCounter++;
					break;
				} //case 01
				case 02: {
					foodFile >> foodName >> monthPurchased >> dayPurchased >> yearPurchased >> monthExpired >> dayExpired >> yearExpired >> sugar >> vitaminC;
					datePurchased.setMonth(monthPurchased);
					datePurchased.setDay(dayPurchased);
					datePurchased.setYear(yearPurchased);
					//sets the month, day, and year of the purchase date which is read from the file
					dateExpired.setMonth(monthExpired);
					dateExpired.setDay(dayExpired);
					dateExpired.setYear(yearExpired);
					//sets the month, day, and year of the expire date which is read from the file
					Fruit *fruit = new Fruit();
					fruit->setName(foodName);
					fruit->setDatePurchased(datePurchased);
					fruit->setExpireDate(dateExpired);
					fruit->setSugarAmount(sugar);
					fruit->setTotalC(vitaminC);

					for (int i = foodCounter + 1; i < foodCounter + 2; i++) {
						myRefrigerator[i] = fruit;
					}
					foodCounter++;
					break;
				} //case 02
				case 03: {
					foodFile >> foodName >> monthPurchased >> dayPurchased >> yearPurchased >> monthExpired >> dayExpired >> yearExpired >> tFat >> tCholesterol;
					datePurchased.setMonth(monthPurchased);
					datePurchased.setDay(dayPurchased);
					datePurchased.setYear(yearPurchased);
					//sets the month, day, and year of the purchase date which is read from the file
					dateExpired.setMonth(monthExpired);
					dateExpired.setDay(dayExpired);
					dateExpired.setYear(yearExpired);
					//sets the month, day, and year of the expire date which is read from the file
					Dairy *dairy2 = new Dairy();
					dairy2->setName(foodName);
					dairy2->setDatePurchased(datePurchased);
					dairy2->setExpireDate(dateExpired);
					dairy2->setFat(tFat);
					dairy2->setCholesterol(tCholesterol);
					for (int i = foodCounter + 1; i < foodCounter + 2; i++) {
						myRefrigerator[i] = dairy2;
					}
					foodCounter++;
					break;
				} //case 03

				default: {
					cout << "Invalid food type in file - ignored" << endl;
					break;
				} //default
				} //switch
			} //while
			for (int j = 0; j < 1; j++) {
				cout << endl;
				cout << endl;
				cout << endl;
				cout << "Total Food read from the file: " << foodCounter + 1 << endl;
				cout << "Food Report" << endl;
				cout << "===========" << endl;
				for (int i = 0; i < foodCounter+1; i++) {
					myRefrigerator[i]->print();
				}
			}
			for(int i = 0; i < foodCounter+1; i++) {
				delete myRefrigerator[i];
				myRefrigerator[i] = nullptr;
			}
		} //else if
	}
	else if(filename != "Food.txt") {
		cout << "Error: The file does not exist or has been inputed incorrectly." << endl;
	}
	cout << endl;
	cout << "Program ending, have an amazing day!" << endl; // prints Program ending, have an amazing day!
	return 0;
}
