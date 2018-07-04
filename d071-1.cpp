#include<iostream>
using namespace std;
main(){
       int x,k;
       int y[1000];
       while(1)
       {
                    for(k=1;;k++)
                    {
                                     cin>>y[k];
                                     if(y[k]==EOF)
                                     {
                                                  break;
                                     }
                    }
                    for(int i=1;i<k;i++)
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
return 0;
}
