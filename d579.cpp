#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
main(){
       float x;
       while(cin>>x)
       {
                    if(x>0)
                    {
                           cout<<"|";
                           printf("%.4f",x);
                           cout<<"|=";
                           printf("%.4f",x);
                           cout<<endl;
                    }
                    if(x<0)
                    {
                           cout<<"|";
                           printf("%.4f",x);
                           cout<<"|=";
                           printf("%.4f",-x);
                           cout<<endl;
                    }
       }
system("pause");
return 0;
}
