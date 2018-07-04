#include<iostream>
using namespace std;
main(){
       int x,a;
       int y[100000];
       while(cin>>x)
       {
                    if(x==0)break;
                    for(int i=1;i<=x;i++)
                    {
                            cin>>y[i];
                    }
                    for(int i=1;i<x;i++)
                    {
                       for(int j=1;j<x;j++)
                       {
                              if(y[j]>y[j+1])
                              {
                                             a=y[j];
                                             y[j]=y[j+1];
                                             y[j+1]=a;
                              }
                       }
                    }
                    for(int i=1;i<=x;i++)cout<<y[i]<<" ";
                    cout<<endl;
       }
system("pause");
return 0;
}
