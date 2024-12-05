// Functions practice (reyal na talaga to).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

void Welcome(string MyName) {
    cout << "My name is " << MyName << endl;;
    cout << "Reyal practice na talaga to ng functions\n";
    cout << "Nani the fuckkk\n";
    cout << "Sana all may pag-asa\n";
    cout << "Sheeshable academic achiever cutie\n";
    cout << "WKWKWKWKWKWKWKWKW\n";
    cout << "'Till I Met You~\n";
}
int cashier(int a, int b) {
    int sukli;
    sukli = a - b;
    return sukli;
}

double showDecimal(double u, double v, double a) {
    double dec;
    dec = u + v + a;
    return dec;
}
string Scholarship() {
    return  "Sana ma-scholar ako, please Lorddd\n";
}

void Welcome();
void Program();
void Closing();
void Body();
void Closing() {
    cout << "\nThank you for using C++";
}

string TX02_Professors() {
    return "Leandro 'Ian' Tulod aka The Goat";
}
int Area(int a, int b) {
    int area = a * b;
    return area;
}
int main()
{
    int change, bill = 1000, payment;
    Welcome("Daniel Anthony D. Villegas");
    cout << "Your bill is: $" << bill;
    cout << "\nEnter your payment: $";
    cin >> payment;
    change = cashier(payment, bill);
    while (change < 0)
    {
        cout << "Insufficient payment\n";
        cout << "Your bill is: $" << bill;
        cout << "\nEnter your payment: $";
        cin >> payment;
        change = cashier(payment, bill);
    }

    if (change >= 0)
    {
        cout << "Your change is $" << change;
        cout << "\nThank you\n";
    }

    system("pause");
    system("cls");

    double total,baon = 1.37, ipon = 10.50, suweldo = 50.74;
    cout << "These are my money" << endl;
    cout << "Baon: $" << baon << endl;
    cout << "Ipon: $" << ipon << endl;
    cout << "Suweldo: $" << suweldo << endl;
    system("pause");
    total = showDecimal(baon, ipon, suweldo);
    cout << "My total money is: $" << total;
    cout << "\nNgayon ko lang nalaman, directly proportional pala yung pera sa pag-asa.\n";
    system("pause");

    string result = Scholarship();
    cout << result;

    system("pause");
    system("cls");

    cout << "John Benedict Legaspi\n";
    Welcome();
    Program();
    Body();

    system("pause");
    system("cls");

    TX02_Professors();

    system("pause");
    system("cls");

    int l, w, Aarea;
    cout << "Enter measurements of your rectangle\n";
    cout << "Enter length: ";
    cin >> l;
    cout << "Enter width: ";
    cin >> w;
    Aarea = Area(l, w);
    cout << "The area of your rectangle is: " << Aarea;

    
}
void Welcome() {
    cout << "Welcome\n";
}
void Program() {
    cout << "It has been a wonderful day!\n";
        Welcome();
}
void Body() {
    Closing();
    cout << ", everybody.\n";
}