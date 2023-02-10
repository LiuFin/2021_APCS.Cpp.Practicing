#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<i;j++)
            cout<<" ";
        cout<<"*";
        for(int k=0;k<9-(i*2);k++)
            cout<<" ";
        cout<<"*"<<endl;
        }
    for(int l=0;l<5;l++){
        cout<<" ";}
    cout<<"*"<<endl;
    for(int a=0;a<5;a++){
        for(int b=0;b<4-a;b++)
            cout<<" ";
        cout<<"*";
        for(int c=0;c<a*2+1;c++)
            cout<<" ";
        cout<<"*"<<endl;}
    return 0;
}
