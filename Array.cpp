#include<iostream>
using namespace std;
int main(){
    int N[100];
    int T[10000];
    int n,t,m,a,b;
    cin>>a;
    for(int i=0;i<a+1;i++)
        {N[i]=0;}
    cin>>b;
    for(int j=0;j<b;j++)
        {cin>>n;
         cin>>t;
         cin>>m;
         if(t==1)
            {N[n]=N[n]+m;}
         if(t==2)
            {N[n]=N[n]-m;}
        }
    for(int k=0;k<a+1;k++)
        {cout<<k<<":"<<N[k]<<endl;
        }
    return 0;
}
