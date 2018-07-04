#include<iostream>
using namespace std;
main(){
       int a;
       int b[100000];
       int ans[10000]={};
       while(cin>>a)
       {
                    for(int i=1;i<=a*2;i=i+2)
                    {
                            cin>>b[i]>>b[i+1];
                    }
                    for(int i=1;i<=a*2;i=i+2)
                    {
                            if(b[i]%2==1&&b[i+1]%2==1)
                            {
                                                      for(int j=b[i];j<=b[i+1];j=j+2)
                                                      {
                                                              ans[i]=ans[i]+j;
                                                      }
                            }
                            else if(b[i]%2==0&&b[i+1]%2==0)
                            {
                                 for(int j=b[i]+1;j<=b[i]-1;j=j+2)
                                 {
                                         ans[i]=ans[i]+j;
                                 }
                            }
                            else if(b[i]%2==1&&b[i+1]%2==0)
                            {
                                 for(int j=b[i];j<=b[i]-1;j=j+2)
                                 {
                                         ans[i]=ans[i]+j;
                                 }
                            }
                            else
                            {
                                for(int j=b[i]+1;j<=b[i];j=j+2)
                                {
                                        ans[i]=ans[i]+j;
                                }
                            }
                    }
                    for(int i=1;i<=a*2;i=i+2)
                    {
                            cout<<"Case "<<(i+1)/2<<": "<<ans[i]<<endl;
                    }
       }
system("pause");
return 0;
}
