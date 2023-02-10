#include<iostream>
using namespace std;
int main()
{
    int ans=1453;
    int guess;
    int a=5;
    while (guess!=ans&&a!=0) {
        a--;
        cout<<"猜一個正整數?"<<endl;
        cin>>guess;
        if (guess>ans)
            cout<<"猜大了，剩"<<a<<"次機會"<<endl;
        else
            if (guess<ans)
            cout<<"猜小了，剩"<<a<<"次機會"<<endl;
                else{cout<<"猜對了，剩"<<a<<"次機會"<<endl;}
    }
    return 0;
}
