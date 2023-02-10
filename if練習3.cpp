#include<iostream>
using namespace std;
int main()
{int x;
int y;
cout<<"x值為?";
cin>>x;
cout<<"y值為?";
cin>>y;
if (x>0&&y>0)
    cout<<"在第一象限";
else
    if(x<0&&y>0)
        cout<<"在第二象限";
    else
        if(x<0&&y<0)
            cout<<"在第三象限";
        else
            if(x>0&&y<0)
                cout<<"在第四象限";
            else
                if(x==0&&y==0)
                    cout<<"在原點";
                else
                    if(x==0&&y!=0)
                        cout<<"在x軸上";
else
{cout<<"在y軸上";}}
