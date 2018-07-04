#include<iostream>
using namespace std;
main(){
       int i;
       long long int n[100000];
       while(1)
       {
               for(i=1;;i=i+2)
               {
                       cin>>n[i]>>n[i+1];
                       if(n[i]==0&&n[i+1]==0)
                       {
                                             break;
                       }
               }
               for(int j=1;j<=i-2;j=j+2)
               {
                       if(n[j]<=n[j+1])
                       {
                                      cout<<"Fair"<<endl;
                       }
                       else
                       {
                           cout<<"Unfair"<<endl;
                       }
               }
       }
system("pause");
return 0;
}
