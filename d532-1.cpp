#include<iostream>
using namespace std;
main(){
       int x,y,a=0;
       while(cin>>x>>y)
       {
                       for(int k=x;k<=y;k++)
                       {
                               if(k%4==0&&k%100!=0||k%400==0)
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
