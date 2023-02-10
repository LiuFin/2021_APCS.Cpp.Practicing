#include<iostream>
using namespace std;
int main(){
    int a=3;
    int b=0;
    while(a<101)
    {for(int i=2;i<a;i++)
        {if(a%i==0)
         {break;}
         if(b==0)
            {
            cout<<a<<endl;
            b=0;
            a++;
            }
        }
    }

    return 0;
}
