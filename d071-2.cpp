#include<iostream>
using namespace std;
int main()
{
    int  a;
    while(cin>>a&&a!='EOF')
    {

        if(a%4==0&&a%100!=0)
            cout<<"a leap year"<<endl;
        else if(a%400==0)
            cout<<"a leap year"<<endl;
        else
           cout<<"a normal year"<<endl;
        }
       system("pause");
       return 0;
}

