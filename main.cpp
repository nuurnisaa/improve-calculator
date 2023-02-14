#include <iostream>
#include <cmath>

using namespace std;

int main()

{
int num1; int num2;
char operation;

cout<<" Enter first number= ";
cin>>num1;
cout<<" Enter operator= ";
cin>>operation;
cout<<" Enter second number= ";
cin>>num2;

int result;
 if(operation=='+')
 {
    result=num1 + num2;}
 else if (operation == '-'){
    result=num1-num2;
 }
   else if (operation == '*'){
    result=num1*num2;
 }
      else if (operation == '/'){
    result=num1/num2;
 } else
{
    cout<<"Invalid";
}

cout<<result;

    return 0;
}
