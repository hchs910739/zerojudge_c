#include<iostream>
using namespace std;
main(){
       int x,y,j,a=1;
       while(cin>>x>>y)
       {
                      for(int i=2;i<=y;i++)
                      {
                               x=x*x;
                      }
       for(j=10;;j=j*10)
       {
               a=a+1;
               if(x/j<10)
               {
                         break;
               }
       }
              cout<<a<<endl;
              a=1;
       }
system("pause");
return 0;
}
