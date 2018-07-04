#include<iostream>
using namespace std;
main(){
       int a[10]={0};
       char n[10][10];
       for(int i=1;i<=9;i++)
       {
               for(int j=1;j<=9;j++)
               {
                       cin>>n[i][j];
                       a[i]=a[i]+n[i][j];
               }
       }
       for(int i=1;i<=9;i++)
       {
               cout<<477-a[i]<<endl;
       }
system("pause");
return 0;
}
