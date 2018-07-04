#include<iostream>
#include<math.h>
using namespace std;
main(){
       int x,a[100],b=0,k;
       while(cin>>x)
       {
                    for(int i=2;i<=sqrt(x);i++)
                    {
                            while(x%i==0)
                            {
                                         b++;
                                         a[b]=i;
                                         x=x/i;
                            }
                    }
                    for(int j=1;j<=b;j++)
                    {
                            for(k=j;k<=b;k++)
                            {
                                    if(a[j]!=a[k]&&k-j!=1)
                                    {
                                                  cout<<a[j]<<"^"<<k-j;
                                                  j=k;
                                                  break;
                                    }
                                    else if(a[j]!=a[k]&&k-j==1)
                                    {
                                         cout<<a[j]<<" * ";
                                         j=j+1;
                                         break;
                                    }
                            }
                    }
       }
system("pause");
return 0;
}
