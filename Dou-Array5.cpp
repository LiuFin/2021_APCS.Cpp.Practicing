#include<iostream>
using namespace std;
int main(){
    int r[5][6];
    int st[5];
    int week[4];
    for(int i=0;i>5;i++)
        {st[i]=0;}
    for(int i=0;i<5;i++)
        {for(int j=0;j<6;j++)
            r[i][j]=0;
        }
    for(int i=0;i<5;i++)
        {for(int j=0;j<6;j++)
            cin>>r[i][j];
        }
    for(int i=0;i<6;i++)
        {for(int k=0;k<5;k++)
            st[i]=st[i]+r[k][i];}

    for(int i=0;i<6;i++)
        {if(st[i]>40)
            {   if(i==0)
                    {i='A';}
                if(i==1)
                    {i='B';}
                if(i==2)
                    {i='C';}
                if(i==3)
                    {i='D';}
                if(i==4)
                    {i='E';}
                if(i==5)
                    {i='F';}
                cout<<i;}
         cout<<" ";
        }
    cout<<endl;

    for(int i=0;i<5;i++)
          {for(int k=0;k<5;k++)
             week[i]=week[i]+r[i][k];}

    for(int i=0;i<5;i++)
        {if(week[i]<=40)
            {cout<<"星期"<<i+1;}
         cout<<" ";
        }

    return 0;
}
