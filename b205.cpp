#include<iostream>
using namespace std;
main(){
       int x,i;
       int n[1000];
       int ans[333];
       while(cin>>x)
       {
                    for(i=1;i<=x;i++)
                    {
                                     cin>>n[i];                 
                    }
                    for(int j=1;j<=x;j++)
                    {
                            ans[j]=(n[j]/27)+(n[j]%27)/9+((n[j]%27)%9)/3+(((n[j]%27)%9)%3)/1;
                            cout<<ans[j]<<endl;
                    }
       }
system("pause");
return 0;
}
