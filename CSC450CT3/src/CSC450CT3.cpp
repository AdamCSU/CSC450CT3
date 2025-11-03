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

	cout << "\nContents stored in variables:" << endl;  //Display the contents of the variables and pointers
	cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

	cout << "\nContents stored in memory using pointers: " << endl;
	cout << "*ptrA = " << *ptrA << ", *ptrB = " << *ptrB << ", *ptrC = " << *ptrC << endl;

	cout << "Memory addresses of contents stored via pointers:" << endl;
	cout << "ptrA = " << ptrA << ", ptrB = " << ptrB << ", ptrC = " << ptrC << endl;

	delete ptrA;  //Clear memory used by the pointers
	delete ptrB;
	delete ptrC;

	cout << "\nMemory used by the pointers has been cleared." << endl;

	return 0;
}
