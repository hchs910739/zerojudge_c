#include<iostream>
#include<cmath>
using namespace std;
main(){
       int x,y,a=0,b=1;
       while(cin>>x>>y)
       {
                       for(int i=x;i<=y;i++)
                       {
                               for(int j=2;j<=sqrt(i);j++)
                               {
                                       if(i%j==0)
                                       {
                                                 b=0;
                                       }
                               }
                               if(b==1)
                               {
                                       a++;
                               }
                               else
                               {
                                   b=1;
                               }
                       }
                       cout<<a<<endl;
                       a=0;
       }
system("pause");
return 0;
}
