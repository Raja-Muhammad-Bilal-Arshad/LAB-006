//Question 2: Even or Odd Checker
//Create a program that takes an integer input from the user and determines whether the number is even or odd.
// The program should output the result in a user-friendly format.
//Even and odd number finder
#include<iostream>
using namespace std;
int main()
{
int a;
cout<<"Enter a integer: ";
cin>>a;
if(a%2==0 && a%2!=1)
{
cout<<a<<" is even";
}
else
cout<<a<<" is odd";
return 0;
system("pause>0");
}