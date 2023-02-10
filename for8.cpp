#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    int i;
    cin>>a;
    cin>>b;
    if(a>b)
    {i=a;}
    if(a<b)
    {i=b;}
    for(;i>0;i--)
    if(a%i==0&&b%i==0){
    cout<<i<<endl;}
    return 0;
}
