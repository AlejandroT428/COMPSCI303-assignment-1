#include "functions.h"

void inputArray(int nums[], int size) {

	ifstream numsFile;

	numsFile.open("A1input.txt");

	// Check if the file is open.
	if (!numsFile.is_open()) {
		cout << "Unable to open numsFile" << endl;
		throw invalid_argument("numsFile could not be opened.");
	}

	//input values into array
	for (int i = 0; 100 > i; i++) {
		numsFile >> nums[i];
	}
	return;
}

int findNum(int nums[], int size, int userNum) {

	for (int i = 0; size > i; i++) {
		if (nums[i] == userNum) {
			return i;
		}
	}
	throw invalid_argument("Could not find the usernum in array.");
	return -1;
}

void modifyInteger(int nums[], int userNum, int newVal) {
	nums[userNum] = newVal;
	return;
}

void addNewInteger(int nums[], int nums1[], int& size, int userNum) {

	for (int i = 0; size > i; i++) {
		nums1[i] = nums[i];
	}
	size++;
	nums1[100] = userNum;

	return;
}

void removeInteger(int nums[], int& size, int userNum, int choice) {
	int tempArr[100];
	int k = 0;

	if (choice == 1) {
		for (int i = 0; size > i; i++) {	
			if (userNum == i) {
				k = 1;
			}
			tempArr[i] = nums[i + k];
		}

		size--;

		for (int i = 0; size > i; i++) {
			nums[i] = tempArr[i];
		}

	}
	else {
		nums[userNum] = 0;
	}

	return;
}

void PrintArray(int nums[], int size) {
	for (int i = 0; size > i; i++) {
		cout << nums[i] << " ";
	}
	cout << endl;
	return;
}