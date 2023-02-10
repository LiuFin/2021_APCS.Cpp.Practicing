#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<i;j++)
            cout<<" ";
        cout<<"*";
        for(int k=0;k<3*(4-i);k++)
            cout<<" ";
        if(i<4)
        {cout<<"*"<<endl;}}
     for(int a=0;a<5;a++){
        for(int b=0;b<4-a;b++)
            cout<<" ";
        if(a>0)
        {cout<<"*";}
        for(int c=0;c<a*3;c++)
            cout<<" ";
        if(a>0&&a<5)
        {cout<<"*";}
        cout<<endl;
        }
return 0;
}
