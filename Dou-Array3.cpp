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
            data[k][3]=data[k][3]+data[k][h];}
    for(int k=0;k<3;k++)
        {for(int h=0;h<4;h++)
            {cout<<data[k][h];
             cout<<" ";
            }
         cout<<endl;
        }
    for(int k=0;k<3;k++)
        {cout<<data[3][k];
         cout<<" ";
        }
return 0;
}
