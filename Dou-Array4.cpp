#include<iostream>
using namespace std;
int main(){
    int data[4][4];
    for(int i=0;i<4;i++)
        {for(int j=0;j<4;j++)
            data[i][j]=0;
        }
    for(int i=0;i<3;i++)
        {for(int j=0;j<3;j++)
            cin>>data[i][j];
        }
    for(int k=0;k<3;k++)
        {for(int h=0;h<3;h++)
            data[3][k]=data[3][k]+data[h][k];}
    for(int k=0;k<3;k++)
        {for(int h=0;h<3;h++)
            {data[k][3]=data[k][3]+data[k][h];}

    if(data[3][0]>>data[3][1]&&data[3][0]>>data[3][2])
        {cout<<"材1︽羆㎝程"<<endl;}
    if(data[3][1]>>data[3][0]&&data[3][1]>>data[3][2])
        {cout<<"材2︽羆㎝程"<<endl;}
    if(data[3][2]>>data[3][1]&&data[3][2]>>data[3][0])
        {cout<<"材3︽羆㎝程"<<endl;}
    if(data[0][3]>>data[1][3]&&data[0][3]>>data[2][3])
        {cout<<"材1羆㎝程"<<endl;}
    if(data[1][3]>>data[0][3]&&data[1][3]>>data[2][3])
        {cout<<"材2羆㎝程"<<endl;}
    if(data[2][3]>>data[1][3]&&data[2][3]>>data[0][3])
        {cout<<"材3羆㎝程"<<endl;}
        }
return 0;
}
