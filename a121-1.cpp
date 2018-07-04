#include<iostream>
#include<cmath>
using namespace std;
main(){
       long long int a=2,b=100000,e=1,C=0,x,y,z=0;
       int c[10000];
       for(int i=a;i<=b;i++)
       {
               for(int j=2;j<=sqrt(i);j++)
               {
                       if(i%j==0)
                       {
                                 e=0;
                       }
               }
               if(e==1)
               {
                       C++;
                       c[C]=i;
               }
               else
               {
                   e=1;
               }
       }
       while(cin>>x>>y)
       {
                       for(int i=1;i<=C;i++)
                       {
                               if(c[i]<=y&&c[i]>=x)z++;
                       }
                       cout<<z<<endl;
                       z=0;
       }
system("pause");
return 0;
}
