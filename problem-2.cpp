#include <iostream>
using namespace std;

int main()
{
  int num1, num2, num3;
  cout<<"Input 3 integers and display the sum"<<endl;

  num1=10;
  num2=50;
  num3=83;

  cout<<"Enter first integer:";
  cin>>num1;
  cout<<"Enter second integer:";
  cin>>num2;
  cout<<"Enter third integer:";
  cin>>num3;

  cout<<"The sum of 3 integers you input is:" <<num1+num2+num3<<endl;

  return 0;
}