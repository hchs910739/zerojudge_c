#include<iostream>
#include<math.h>
using namespace std;
main(){
       int a,b,c,D;
       int x,y;
       while(cin>>a>>b>>c)
       {
                          D=b*b-4*a*c;
                          if(D<0)
                          {
                                 cout<<"No real root"<<endl;
                          }
                          else if(D==0)
                          {
                               x=-b/(2*a);
                               cout<<"Two same roots x="<<x<<endl;;
                          }
                          else if(D>0)
                          {
                               x=(-b+sqrt(D))/(2*a); 
	                            y=(-b-sqrt(D))/(2*a);
	                            cout<<"Two different roots x1="<<x<<" , x2="<<y<<endl;
                          }
       }
system("pause");
return 0;
}
