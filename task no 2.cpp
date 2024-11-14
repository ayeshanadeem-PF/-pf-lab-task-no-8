#include <iostream>
using namespace std;
int main() {
 int n1,n2;
 char op;
 cout<<"Enter two numbers "<<endl;
 cin>>n1>>n2;
 cout<<"Enter an Operator(+,-,*,/)"<<endl;
 cin>>op;
 switch(op)
 {
     case '+':
     cout<<"Addition of Two Number is "<<n1+n2;
     break;
     case '-':
     cout<<"Subtraction of Two Number is "<<n1-n2;
     break;
     case '*':
     cout<<"Multiplication of Two Number is "<<n1*n2;
     break;
     case '/':
     cout<<"Division of Two Number is "<<n1/n2;
     break;
     default:
     cout<<"Invalid operator";
     break;
 }

   return 0;
}