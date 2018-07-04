#include<iostream>
using namespace std;
main(){
       int x,k;
       int y[1000];
       int a[1000];
       while(cin>>x)
       {
                    for(k=1;k<=x;k++)
                    {
                                     cin>>y[k];
                                     if(y[k]%4==0&&y[k]%100!=0||y[k]%400==0)
                                     {
                                         a[k]=1;                            
                                     }
                                     else
                                     {
                                         a[k]=2;
                                     }
                    }
                    for(int i=1;i<=x;i++)
                    {
                            if(a[i]==1)
                            {
                                   cout<<"Case "<<i<<": "<<"a leap year"<<endl;
                            }
                            if(a[i]==2)
                            {
                                   cout<<"Case "<<i<<": "<<"a normal year"<<endl;
                            }
                    }
       }
system("pause");
return 0;
}
