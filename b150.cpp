#include<iostream>
using namespace std;
main(){
       int m[100];
       int money=300,x=0,y;
       while(1)
       {
               for(int i=1;i<=12;i++)
               {
                       cin>>m[i];
                       x=x+m[i];
                       if(money*i<x)
                       {
                                    y=(money*i)-x;
                                    break;
                       }
                       else if(money*i>=x)
                       {
                            y=(money*i)-x;
                       }
               }
               cout<<y<<endl;
       }
system("pause");
return 0;
}
