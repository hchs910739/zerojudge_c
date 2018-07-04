#include<iostream>
using namespace std;
main(){
       int x,y,z,a,b;
       while(cin>>x>>y>>z)
       {
                          a=x/10;
                          b=z/2;
                          if(a>b)
                          {
                                 cout<<x<<" ­Ó»æ°®¡A"<<y+b<<" ²°¥©§J¤O¡A"<<z<<" ­Ó³J¿|¡C"<<endl;
                          }
                          else
                          {
                              cout<<x<<" ­Ó»æ°®¡A"<<y+a<<" ²°¥©§J¤O¡A"<<z<<" ­Ó³J¿|¡C"<<endl;
                          }
       }
system("pause");
return 0;
}
