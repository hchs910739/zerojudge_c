#include<iostream>
using namespace std;
main(){
       int y[1000];
       string a[1000];
       int x;
       while(1)
       {
               for(x=1;;x++)
               {
                            cin>>y[x];
                            if(y[x]==0)
                            {
                                       break;
                            }
               }
               for(int k=1;k<x;k++)
               {
                            if(y[k]%4==0&&y[k]%100!=0||y[k]%400==0)
                            {
                                    a[k]="a leap year";
                            }
                            else
                            {
                                    a[k]="a normal year";
                            }
                       cout<<a[k]<<endl;
               }
       }
system("pause");
return 0;
}
