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
                                 cout<<x<<" �ӻ氮�A"<<y+b<<" �����J�O�A"<<z<<" �ӳJ�|�C"<<endl;
                          }
                          else
                          {
                              cout<<x<<" �ӻ氮�A"<<y+a<<" �����J�O�A"<<z<<" �ӳJ�|�C"<<endl;
                          }
       }
system("pause");
return 0;
}
