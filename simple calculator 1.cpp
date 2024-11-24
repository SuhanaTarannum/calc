#include<iostream>
using namespace std;
int main()
{
double num1 ,num2,result;
char operation;
cout<<"simple calculator\n";
cout<<"------\n";
cout<<"enter the first number:";
cin>>num1;
cout<<"enter the second number:";
cin>>num2;
cout<<"choose an operation(+,-,*,/)";
cin >>(operation);
switch (operation)
{
    case '+': 
            result=num1+num2;
             cout <<"result:"<<num1<<"+"<<num2<<"="<<result<< endl;
            break;
    case '-': 
            result=num1-num2;
            cout<<"result:"<<num1<<"-"<<num2<<"="<<result<< endl;
            break;
    case '*':
            result=num1*num2;
            cout<<"result:"<<num1<<"*"<<num2<<"="<<result<< endl;
            break;
    
    case '/':
            result=(num1/num2);
             cout<<"result:"<<num1<<"/"<<num2<<"="<<result<< endl;
             break;
    
else
{
cout<<"error:"<< endl;
break;
}
return 0;
}
}