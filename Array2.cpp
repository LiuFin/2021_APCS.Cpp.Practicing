#include<iostream>
using namespace std;
int main(){
    int sc[10];
    int n;
    int d;
    for(int i=1;i<11;i++)
        sc[i]=0;
    for(int j=0;j<10;j++)
        {cin>>n;
         d=n/10;
         if(d==10)
         {sc[9]=sc[9]+1;}
         else {sc[d]=sc[d]+1;}
        }
    for(int i=9;i>=0;i--)
        {if(i==9)
            {cout<<i<<"0~"<<"100¤À"<<sc[i]<<endl;}
        else if(i==0)
            {cout<<"0~9¤À"<<sc[i]<<endl;}
        else{cout<<i<<"0~"<<i<<"9¤À"<<sc[i]<<endl;}
        }
}
