#include<iostream>
using namespace std;
int main()
{int a;
int b;
cout<<"a?"<<endl;
cin>>a;
cout<<"b?"<<endl;
cin>>b;
if (a==0&&b==0)
    {cout<<0<<endl;}
    else
        if (a==0&&b!=0)
        {cout<<0<<endl;}
        else
            if (a!=0&&b==0)
            {cout<<0<<endl;}
            else {cout<<1<<endl;}
if (a==0||b==0)
    {cout<<0<<endl;}
    else
        {cout<<1<<endl;}
if (a==0^b==0)
    {cout<<0<<endl;}
    else
        if(a!=0^b!=0)
        {cout<<0<<endl;}
        else {cout<<1<<endl;}
}
