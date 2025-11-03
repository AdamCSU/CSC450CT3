//============================================================================
// Name        : CSC450CT3.cpp
// Author      : Adam Gorry
// Version     :
// Copyright   : Your copyright notice
// Description : CSC450 Critical Thinking 3
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a, b, c;  //3 variables to store user input
	cout << "Please enter three integers: ";  //Ask user to enter 3 integers
	cin >> a >> b >> c;

	int* ptrA = new int;  //Create integer pointers to dynamically allocated memory
	int* ptrB = new int;  //Ditto
	int* ptrC = new int;  //Same as that guy ^

	*ptrA = a;  //Store values in the dynamically allocated memory
	*ptrB = b;
	*ptrC = c;

	return 0;
}
