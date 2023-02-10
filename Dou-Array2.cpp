#include<iostream>
using namespace std;
int main(){
    int data[3][3];
    for(int i=0;i<3;i++)
        {for(int j=0;j<3;j++)
            data[i][j]=0;
        }
    for(int i=0;i<3;i++)
        {for(int j=0;j<3;j++)
            cin>>data[i][j];
        }
    for(int k=0;k<3;k++)
        {for(int h=0;h<3;h++)
            {cout<<data[k][h];
             cout<<" ";
            }
         cout<<endl;
        }
return 0;
}
