#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string first, last;
	int age, con;
		cout << "Please enter your First name:";
		getline (cin, first);

		cout << "Please enter your Last name:";
		getline (cin, last);

		cout << "Please enter your age:";
		cin >> age;

		cout << "Please enter your confidence as a programmer between 0-100:";
		cin >> con;

		double con_per = con / 100.0;

		int dage = age * 7;

		cout << "Hello ," << first <<" "<< last << " nice to meet you! You might be "
			<< age <<" in human years, but in dog years you are " << dage << endl;
		if (con_per <= 0.5) {
			cout << "I agree, preogrammers can't be trusted!" << endl;
		}
		else {
			cout << "Writing code takes hard work!";
		}
}
