#include<iostream>
using namespace std;
main(){
       int x,y,a=0,b=0;
       while(cin>>x>>y)
       {
                       if(x%4==0&&x%100!=0||x%400==0)
                       {
                                                      a=1;
                       }
                       if(y%4!=0&&y%100==0||y%400==0)
                       {
                                                      b=1;
                       }
                       cout<<a+b<<endl;
       }
system("pause");
return 0;
}
