#include<iostream>
using namespace std;
main(){
       int x,y,a=0;
       while(cin>>x>>y)
       {
                       if(x%2==0)
                       {
                                 for(int k=x;k<=y;k=k+2)
                                 {
                                      a=a+k; 
                                 }
                                 cout<<a<<endl;
                                 a=0;
                       }
                       else if(x%2==1)
                       {
                                 for(int i=x+1;i<=y;i=i+2)
                                 {
                                         a=a+i;
                                 }
                                 cout<<a<<endl;
                                 a=0;
                       }
       }
system("pause");
return 0;
}
