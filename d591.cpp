#include<iostream>
using namespace std;
main(){
       int x;
       int n[1000];
       int ans[500];
       while(cin>>x)
       {
                    for(int i=1;i<=x*4;i=i+4)
                    {
                            cin>>n[i]>>n[i+1]>>n[i+2]>>n[i+3];
                            ans[i]=n[i+3]-((n[i]-n[i+1]*n[i+3])/(n[i+2]-n[i+1]));
                            ans[i+1]=(n[i]-n[i+1]*n[i+3])/(n[i+2]-n[i+1]);
                    }
                    for(int j=1;j<=x*4;j=j+4)
                    {
                            cout<<ans[j]<<" "<<ans[j+1]<<endl;
                    }
       }
system("pause");
return 0;
}
