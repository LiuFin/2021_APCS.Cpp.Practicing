#include<iostream>
using namespace std;
int main()
{int m;
cout<<"薪水多少?";
cin>>m;
if (m<=25000)
cout<<"加薪後的薪水為"<<m*1.1;
else
    if (m>25000&&m<=27000)
    cout<<"加薪後的薪水為"<<m*1.07;
else
    if (m>27000&&m<=30000)
    cout<<"加薪後的薪水為"<<m*1.05;
else {cout<<"加薪後的薪水為"<<m*1.03;}
}
