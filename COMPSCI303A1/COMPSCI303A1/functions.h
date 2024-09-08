#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Reads the file and inputs the values into the array.
void inputArray(int nums[], int size);

// Finds the UserNum within the area.
int findNum(int nums[], int size, int userNum);

// Modifys the number specfied by the User.
void modifyInteger(int nums[], int userNum, int newVal);

// Adds a new number to the end of the area.
void addNewInteger(int nums[], int nums1[], int& size, int userNum);

// Removes a number either completly or replaces it with a 0.
void removeInteger(int nums[], int &size, int userNum, int choice);

// Prints the entire array.
void PrintArray(int nums[], int size);