//Question 3: Grade Evaluation
//Write a program that takes a student's score (out of 100) as input and 
//outputs their grade
#include<iostream>
using namespace std;
int main()
{
int marks;
cout<<"Enter your marks ";
cin >>marks;
if(marks>=90 && marks<=100)
{
cout<<" The student's Grade is: A";
}
else if(marks>=80 && marks<=89)
{
cout<<" The student's Grade is: B";
}
else if(marks>=70 && marks<=79)
{
cout<<" The student's Grade is: C";
}
else if(marks>=60 && marks<=69)
{
cout<<" The student's Grade is: D";
}
else if(marks>=0 && marks<=59)
{
cout<<" The student's Grade is: F";
}
else if (marks >100 || marks<0)
{
cout<<"Inappropriate input";
}
return 0;
system("pause>0");
}