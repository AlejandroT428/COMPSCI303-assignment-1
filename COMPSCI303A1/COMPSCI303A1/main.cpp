//Alejandro Torres
//COMPSCI 303 Assignment 1

#include <iostream>
#include "functions.h"

using namespace std;

int main() {

	try {

		int size = 100;
		int nums[100];
		int nums1[101];
		int userNum;
		int choice;
		int tempOldVal;
		int tempNewVal;
		int userNumIndex;
		
		inputArray(nums, size);

		// 1. A function to check if a certain integer exists.
		cout << "Type in a number you would like to find: ";
		cin >> userNum;
		userNumIndex = findNum(nums, size, userNum);
		cout << "\nThe index for your number: " << userNumIndex << endl;

		// 2. A function that can modify the value of an integer.
		PrintArray(nums, size);
		cout << "Type a index of the integer you would like to modify: ";
		cin >> userNum;
		if (userNum < 0 || userNum >= size) {
			throw invalid_argument("This exceeds the array limit.");
		}
		cout << "\nType in a value you will use to replace: ";
		cin >> tempNewVal;
		tempOldVal = nums[userNum];
		modifyInteger(nums, userNum, tempNewVal);
		PrintArray(nums, size);
		cout << "\nOld Value: " << tempOldVal << " New Value: " << nums[userNum] << endl;
		


		// 3. A function that adds a new integer to the end of the array.
		cout << "Type a number to add to the end of the array: ";
		cin >> userNum;
		addNewInteger(nums, nums1, size, userNum);

		PrintArray(nums1, size);

		// 4. A function that takes the index and replaces a value with 0 or removes the integer from the array.
		cout << "Type a index you would like to replace or remove: ";
		cin >> userNum;
		cout << "\nWould you like to... (0) replace with 0, or (1) remove from array?: ";
		cin >> choice;
		if (choice != 1 && choice != 0) {
			throw invalid_argument("You made the wrong choice.");
		}
		removeInteger(nums1, size, userNum, choice);

		PrintArray(nums1, size);

		
	}
	catch (const invalid_argument& ex) {
		cout << "\nERROR: " << ex.what() << endl;
	}
	// Catches any arguement out of the scope of errors.
	catch (...) {
		cout << "Something happend with the code." << endl;
		return 0;
	}


	return 0;
}

//sizeof()