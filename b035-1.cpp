#include<iostream>
using namespace std;
main(){
       long long int a,b,x,ans=0;
       while(cin>>a)
       {
       for(int i=1;i<=a;i++)
       {
               cin>>x;
               ans=ans+(x*x);
       }
       cin>>b;
       if(b==0)
       {
       cout<<ans<<endl;
       }
       ans=0;
       }
system("pause");
return 0;
}
