#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
main(){
       double c,f;
       while(cin>>f)
       {
                    c=((f-32)*5)/9;
                    printf("%.3f",c);
       }
system("pause");
return 0;
}
