// Functions practice (reyal na talaga to).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

void Ako();
int oddNumbers(int a);
float MayPagAsaBa(float l, float u, float h, float baka, float mag, float scholar, float yarn, float amp);

int main() {

	Ako();

	system("pause");
	system("cls");

	int myNumbers, b = 0;

	myNumbers = oddNumbers(b);
	cout << myNumbers;

	system("pause");
	system("cls");

	float WalangPake, Scholar, Sana, Ako, Kung, Di, Dahil, Sa, Katangahan;
	cout << "Enter your grades\n";
	cout << "PPE: ";
	cin >> Scholar;
	cout << "RPH: ";
	cin >> Sana;
	cout << "P.E: ";
	cin >> Ako;
	cout << "ITC Lec: ";
	cin >> Kung;
	cout << "ITC Lab: ";
	cin >> Di;
	cout << "CompProg Lec: ";
	cin >> Dahil;
	cout << "CompProg Lab: ";
	cin >> Sa;
	cout << "STS: ";
	cin >> Katangahan;
	WalangPake = MayPagAsaBa(Scholar, Sana, Ako, Kung, Di, Dahil, Sa, Katangahan);
	cout << "Result: " << WalangPake<<"\n";
	if (WalangPake < 3)
	{
		cout << "Awit, walang scholarship\n";
		cout << "Katanga-tanga kasi\n";
		cout << "Wala na ngang scholarship, wala pang pag-asa\n";
	}
	else
	{
		cout << "THANK YOU, LORD. I LOVE YOU!\n";
	}

}

void Ako() {
	int payment;
	cout << "Ako'y tahimik lang sa umpisa\n";
	cout << "Don't what to do whenever you are near\n";
	cout << "Nani the fuck\n";
	cout << "Enter payment: $";
	cin >> payment;

}



int oddNumbers(int a) {
	cout << "These are odd numbers from 0 to 1000\n";
	for (int a = 0; a < 1000; a++)
	{
		if (a%2 == 1)
		{
			cout << "Number: " << a << endl;
		}
	}
	return 0;
}

float MayPagAsaBa(float l, float u, float h, float baka, float mag, float scholar, float yarn, float amp) {
	float wala;
	wala = l + u + h + baka + mag + scholar + yarn+ amp;
	wala /= 8;
	return wala;
}