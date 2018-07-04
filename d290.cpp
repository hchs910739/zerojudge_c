#include<iostream>
using namespace std;
main(){
       int x,a=0;
       while(1)
       {
               for(x=1;x<=100000;x++)
               {
                                     for(int k=1;k<=x;k++)
                                     {
                                             if(x%k==0)
                                             {
                                             a=a+k;
                                             }
                                     }
                                     if(a==x)
                                     {
                                             cout<<x<<endl;
                                             a=0;
                                     }continue;33550336           
               }
       }
system("pause");
return 0;
}
