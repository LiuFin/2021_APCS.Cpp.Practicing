#define N 5
#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<N-1-i;j++)
        cout<<" ";
        if(i>0)
        {cout<<"*";}
        for(int k=0;k<i*3;k++)
        cout<<"-";
        cout<<"*"<<endl;
        }
    return 0;
}
