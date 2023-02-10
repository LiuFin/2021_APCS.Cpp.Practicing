#include<iostream>
using namespace std;
int main(){
    int a;
    int b=0;
    cin>>a;
    for(int i=2;i<a;i++)
        {if (a%i==0)
        {cout<<"no";
         break;}}
    if (b==0)
        {cout<<"yes";}
    return 0;
}
