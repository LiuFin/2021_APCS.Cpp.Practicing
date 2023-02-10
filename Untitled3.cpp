#include<iostream>
using namespace std;
int main(){
    for(int a=0;a<8;a++){
        cout<<" ";}
        cout<<"*"<<endl;
    for(int i=1;i<5;i++){
        for(int j=0;j<6-(i-1)*2;j++)
            cout<<" ";
        cout<<"*";
        for(int k=0;k<3*i+(i-1);k++)
            cout<<"_";
        cout<<"*"<<endl;}
    return 0;
}
