#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    int i=0;
    while(str[i]!='\0')
    {if(str[i]>='A'&&str[i]<='Z')
        {str[i]+='a'-'A';
        cout<<str[i];
        i++;
        }
    else if(str[i]>='a'&&str[i]<='z')
        {str[i]-='a'-'A';
        cout<<str[i];
        i++;
        }
    else {cout<<str[i];
           i++;}}
}
