#include<iostream>
using namespace std;
int main()
{int year;
int month;
int day;
int sum;
cout<<"年?月?日?"<<endl;
cin>>year>>month>>day;
switch(month){
case 1:
    break;
case 2:
    sum=day+31;
    break;
case 3:
    sum=day+59;
    break;
case 4:
    sum=day+90;
    break;
case 5:
    sum=day+120;
    break;
case 6:
    sum=day+151;
    break;
case 7:
    sum=day+181;
    break;
case 8:
    sum=day+212;
    break;
case 9:
    sum=day+243;
    break;
case 10:
    sum=day+273;
    break;
case 11:
    sum=day+304;
    break;
case 12:
    sum=day+334;
    break;
}
if (month<3)
    cout<<"第"<<sum<<"天"<<endl;
else
    if (year%4==0&&year%100!=0)
        {sum=sum+1;
        cout<<"第"<<sum<<"天"<<endl;}
    else
        if(year%400==0)
        {sum=sum+1;
        cout<<"第"<<sum<<"天"<<endl;}
            else
                if(year%1000==0)
                {sum=sum+1;
                cout<<"第"<<sum<<"天"<<endl;}
                    else{cout<<"第"<<sum<<"天"<<endl;}
return 0;
}
