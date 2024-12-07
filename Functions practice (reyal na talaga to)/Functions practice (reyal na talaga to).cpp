// Functions practice (reyal na talaga to).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <thread> 
#include <chrono>
using namespace std;

float expenses(float food, float clothes, float transportation, float wants);
string wish();

int main() {
	const int delay_ms = 2000;
	cout << " "<<endl;
	this_thread::sleep_for(chrono::milliseconds(delay_ms));
	cout << "Will I even live long enough to make it?\n";
	this_thread::sleep_for(chrono::milliseconds(delay_ms));
	cout << "I'm not sure\n";
	this_thread::sleep_for(chrono::milliseconds(delay_ms));
	cout << "Damn it. I want to live a long and fruitful life, just like everybody else\n";
	this_thread::sleep_for(chrono::milliseconds(delay_ms));
	cout << "I want to have a family as well\n";
	this_thread::sleep_for(chrono::milliseconds(delay_ms));
	cout << "I'm not aiming to be hyper successfull, just successfull enough so that my children won't have to worry about expenses ever again\n";
	this_thread::sleep_for(chrono::milliseconds(delay_ms));
	cout << "But of course, I'll have to teach them the real value of money, so that they won't take it for granted\n";
	this_thread::sleep_for(chrono::milliseconds(delay_ms));
	cout << "Hays\n";
	this_thread::sleep_for(chrono::milliseconds(delay_ms));

	system("pause");
	system("cls");
	cout << " " << endl;
	this_thread::sleep_for(chrono::milliseconds(delay_ms));
	cout << "Petot po talaga yang dollar sign\n";
	this_thread::sleep_for(chrono::milliseconds(delay_ms));
	cout << "sadiyang hindi lang talaga ako abot sa standards niya :(\n";
	this_thread::sleep_for(chrono::milliseconds(delay_ms));
	cout << "EME HAHAHAHAHAHAHAHAHAHAHAHAHAHA\n";
	this_thread::sleep_for(chrono::milliseconds(delay_ms));
	cout << "Magtitipid o magpapakamatay?\n";
	this_thread::sleep_for(chrono::milliseconds(delay_ms));
	float katangahan, pagkain, damit, pamasahe, gusto;
	cout << "How much ba sa food? $";
	cin >> pagkain;
	cout << "Eh sa clothes mo? $";
	cin >> damit;
	cout << "How about your transit expenses? $";
	cin >> pamasahe;
	cout << "Of course, syempre meron din ang mga katangahang pinag-gagastusan mo diba\n";
	cout << "How much ba kasi? $";
	cin >> gusto;
	katangahan = expenses(pagkain, damit, pamasahe, gusto);
	cout << "Endgame stupidity\n";
	this_thread::sleep_for(chrono::milliseconds(1000));
	cout << "HAHAHAHA\n";
	this_thread::sleep_for(chrono::milliseconds(1000));
	cout << "Ang natira sa limit ay??? $"<<katangahan<<endl;
	this_thread::sleep_for(chrono::milliseconds(1000));
	if (katangahan < 0)
	{
		cout << "Katanga-tanga talagang nilalang\n";
	}
	else
	{
		cout << "Nah, I'd tipid\n";
	}

}

float expenses(float food, float clothes, float transportation, float wants) {
	float limit = 1000, gastador, gastado;
	gastador = food + clothes + transportation + wants;
	gastado = limit - gastador;

	return gastado;
}

string wish() {
	const int delay_ms = 1000;
	cout << " ";
	this_thread::sleep_for(chrono::milliseconds(delay_ms));
	cout << "Kapag hindi ko talaga nakuha yang scholarship, nako\n";
	this_thread::sleep_for(chrono::milliseconds(delay_ms));
	cout << "Tatalon talaga ako\n";
	this_thread::sleep_for(chrono::milliseconds(delay_ms));
	cout << "Potcha\n";
	this_thread::sleep_for(chrono::milliseconds(delay_ms));
	return 0;
}