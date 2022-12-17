#include<iostream>
using namespace std;
int main()
{int num;
int a;
int b;
int c;
int d;
cout<<"請輸入一個正整數";
cin>>num;
if (num>=10000)
    {cout<<"please try again.";}
else {a=num/1000;
    b=num/100;
    b=b%10;
    c=num/10;
    c=c%10;
    d=num%10;
    cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<d;}}
