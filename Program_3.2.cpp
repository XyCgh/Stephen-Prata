#include "pch.h"
#include <iostream>
#include "cmath"
using namespace std;
struct chel {
	char * f = new char[2];
	char * g = new char[2];
	int ago;
};
int main()
{
	char grade[5] = { 'A', 'B', 'C', 'D', 'E' };
	char c;
	cout << "What is your first name? ";
	chel abc;
	cin >> abc.f;
	cout << endl << "What is your last name? ";
	cin >> abc.g;
	cout << endl << "What letter grade do you deserve? ";
	cout << endl << "What is your age? ";
	cin >> abc.ago;
	cout << endl << "Name: " << abc.g << ", " << abc.f;
	cout << endl << "Grade: " << grade[1 + b] << endl;
	cout << "Age: " << abc.ago;
	cout << endl << b << endl;
	system("pause");
	return 0;
}