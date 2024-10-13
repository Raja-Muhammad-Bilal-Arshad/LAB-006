//Write a program that takes two integers as input from the user. The program should perform
// the following operations: addition, subtraction, multiplication, and division. 
// Display the results for each operation.

// Calculator
#include<iostream>
using namespace std;
int main()
{
float a, b;
cout << "Enter your first Integer: " << endl;
cin >> a;
cout << "Enter your Second interger : " << endl;
cin >> b;
if (b == 0)
{
cout << "Your denominator is equal to Zero Division is not possible";
}
else
{
cout << "Division :" <<a / b << endl;
}
cout << "Addition: " << a + b << endl;
cout << "Subtraction: " << a - b << endl;
cout << "Multiplication: " << a * b << endl;
return 0;
system("pause>0");
}