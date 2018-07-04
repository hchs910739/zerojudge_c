#include<iostream>
using namespace std;
main(){
       int x,y,z,i,j;
       while(cin>>x>>y)
       {
                       for(i=x,j=1;;j++)
                       {
                               if(i==1)
                               {
                                       break;
                               }
                               else if(i%2==1)
                               {
                                          i=(i*3)+1;
                               }
                               else
                               {
                                   i=(i/2);
                               }
                       }
                       cout<<x<<" "<<y<<" "<<j<<endl;
       }
system("pause");
return 0;
}
