#include<iostream>
using namespace std;
main(){
       int x=0,y=0;
       int a[10][10];
       for(int i=1;i<=9;i++)
       {
               for(int j=1;j<=9;j++)
               {
                       cin>>a[i][j];
               }
       }
       for(int i=1;i<=9;i++)
       {
               for(int j=1;j<=9;j++)
               {
                       x=x+a[i][j];
                       y=y+a[j][i];
               }
       }
       if(x==405&&y==405)
       {
                cout<<"yes"<<endl;
       }
       else
       {
           cout<<"no"<<endl;
       } 
system("pause");
return 0;
}
