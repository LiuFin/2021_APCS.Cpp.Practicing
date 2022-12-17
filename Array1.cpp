#include<iostream>
using namespace std;
int main(){
    int dice[7];
    int n;
    for(int i=1;i<7;i++)
        {dice[i]=0;}
    for(int j=0;j<10;j++)
        {cin>>n;
         if(n==1)
         {dice[1]+=1;}
         if(n==2)
         {dice[2]+=1;}
         if(n==3)
         {dice[3]+=1;}
         if(n==4)
         {dice[4]+=1;}
         if(n==5)
         {dice[5]+=1;}
         if(n==6)
         {dice[6]+=1;}
        }
    for (int k=1;k<7;k++)
        {cout<<"點數"<<k<<"共擲出"<<dice[k]<<"次\n";}
}
