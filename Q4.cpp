//Question 4: Logical Expression Evaluator
//Design a program that prompts the user to enter two boolean values (true/false).
// The program should evaluate and display the results of the following logical expressions:
1. AND (&&)
2. OR (||)
3. NOT (!)
//
#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<endl<<"Enter your first boolean value (0 for false, 1 for true): ";
cin>>a;
while(a!=0 && a!=1)
{ cout<<endl<<"Enter your first boolean value (0 for false, 1 for true): ";
cin>>a;
}
cout<<endl<<"Enter your second boolean value (0 for false, 1 for true ): ";
cin>>b;
while (b!=0 && b!=1)
{
cout<<endl<<"Enter your second boolean value (0 for false, 1 for true ): ";
cin>>b;
}
cout<<endl<<"AND(value1 && value2): "<<(a&&b);
cout<<endl<<"OR(value1 || value2): "<<(a||b);
cout<<endl<<"NOT(value1 ): "<<(!a);
cout<<endl<<"NOT(value2): "<<(!b);
return 0;
system("pause>0");
}