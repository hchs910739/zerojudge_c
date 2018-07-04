#include<iostream>
using namespace std;
main(){
       int n[250000];
       int ans[250000];
       int x,i,j;
               for(i=0;;i++)
               {
                       cin>>n[i];
                       if(n[i]==0)
                       {
                               break;
                       }
                       if(n[i]>=101)
                       {
                                 ans[i]=n[i]-10;
                       }
                       else if(n[i]<=100)
                       {
                            ans[i]=91;
                       }
               }
               for(j=0;j<i;j++)
               {
                       cout<<"f91("<<n[j]<<") = "<<ans[j]<<endl;
               }
system("pause");
return 0;
}
