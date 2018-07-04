#include<iostream>
using namespace std;
main(){
       int x,a=1,ans=0,k;
       while(cin>>x)
       {
                    for(k=1;k<=49*x;k=k+x)
                    {
                           a=a+k;
                           ans=ans+a;
                    }
                    cout<<ans+1<<endl;
                    a=1;
                    ans=0;
       }
system("pause");
return 0;
}
