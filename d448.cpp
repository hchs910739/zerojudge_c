#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
main(){
       double a,b,c,d,e,x;
       while(cin>>a>>b>>c>>d>>e)
       {
                                x=e+(b-c)*((d-e)/(a-c));
                                printf("%.6f\n",x);
       }
system("pause");
return 0;
}
