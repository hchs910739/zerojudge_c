#include<iostream>
using namespace std;
main(){
       int a,b,c,ans=0;
       while(cin>>a)
       {
                    if(a==0)break;
                    for(int i=1;i<=a;i++)
                    {
                            cin>>b;
                            c=b*b;
                            ans=ans+c;
                    }
                    cout<<ans<<endl;;
                    ans=0;
                    
       }
system("pause");
return 0;
}
