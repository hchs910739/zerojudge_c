#include<iostream>
using namespace std;
main(){
       int x,k;
       int y[1000];
       while(cin>>x)
       {
                    for(k=1;k<=x;k++)
                    {
                                     cin>>y[k];
                    }
                    for(int i=1;i<=x;i++)
                    {
                            if(y[i]%4==0&&y[i]%100!=0||y[i]%400==0)
                            {
                                                                   cout<<"a leap year"<<endl;
                            }
                            else
                            {
                                cout<<"a normal year"<<endl;
                            }
                    }
       }
system("pause");
return 0;
}
