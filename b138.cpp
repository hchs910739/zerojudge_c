#include<iostream>
using namespace std;
main(){
       int n[11];
       int h,a=0;
       while(1)
       {
               for(int i=1;i<=10;i++)
               {
                       cin>>n[i];
               }
               cin>>h;
               for(int i=1;i<=10;i++)
               {
                       if(h+30>=n[i])
                       {
                           a++;
                       }
               }
               cout<<a<<endl;
               a=0;
       }
system("pause");
return 0;
}
