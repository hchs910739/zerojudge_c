#include<iostream>
using namespace std;
main(){
       int k,x;
       int a[1000];
       int ans[1000];
       while(cin>>x)
       {
                    for(k=1;k<=x*4;k=k+4)
                    {
                                     cin>>a[k]>>a[k+1]>>a[k+2]>>a[k+3];
                                     if(a[k+1]-a[k]==a[k+3]-a[k+2])
                                     {
                                                                   ans[k]=a[k+1]-a[k]+a[k+3];
                                     }
                                     if(a[k+1]/a[k]==a[k+3]/a[k+2])
                                     {
                                                                   ans[k]=(a[k+1]/a[k])*a[k+3];
                                     }
                    }
                    for(int i=1;i<=x*4;i=i+4)
                    {
                            cout<<a[i]<<" "<<a[i+1]<<" "<<a[i+2]<<" "<<a[i+3]<<" "<<ans[i]<<endl;
                    }
       }
system("pause");
return 0;
}
