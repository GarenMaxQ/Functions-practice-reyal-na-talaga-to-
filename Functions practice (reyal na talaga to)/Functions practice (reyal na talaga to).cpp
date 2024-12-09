// Functions practice (reyal na talaga to).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <thread> 
#include <chrono>
using namespace std;

void payment() {
	float payment;
	float bill = 0, change;
	char buy;
	bool invalidBuy;
	do {
		invalidBuy = false;
		do {
			cout << "Please select as many as you want\t"<<"Yuur bill is "<<"["<<bill<<"]\n";
			cout << "1. Coke          - $1\n";
			cout << "2. Sprite        - $1\n";
			cout << "3. Mt. Dew       - $1\n";
			cout << "4. Royal         - $1\n";
			cout << "5. Done buying   - $1\n";
			cout << "Enter: ";
			cin >> buy;
			switch (buy)
			{
			case'1':
				bill += 1;
				break;
			case'2':
				bill += 1;
				break;
			case'3':
				bill += 1;
				break;
			case'4':
				bill += 1;
				break;
			case'5':
				break;
			default:
				cout << "Invalid item\n";
				invalidBuy = true;
				break;
			}
	} while (invalidBuy);
} while (buy != '5');
	cout << "Please pay $"<<bill<<endl;
	cout << "$";
	cin >> payment;
	change = payment - bill;
	while (change < 0)
	{
		cout << "Insufficient payment\n";
		cout << "Please pay $" << bill << endl;
		cout << "$";
		cin >> payment;
		change = payment - bill;
	}
	cout << "Your change is $" << change << endl;
	cout << "Thank you for buying\n";
}
int main() {
	
	payment();
}