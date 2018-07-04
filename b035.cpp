#include<iostream>
using namespace std;
main(){
       int a,ans=0;
       int n[500];
       while(cin>>a)
       {
                    for(int i=1;i<=a;i++)
                    {
                            cin>>n[i];
                            if(n[a]==0)
                            {
                                         break;
                            }
                    }
                    for(int i=1;i<=a;i++)
                    {
                            ans=ans+(n[i]*n[i]);
                    }
                    cout<<ans<<endl;
                    ans=0;
       }
system("pause");
return 0;
}
