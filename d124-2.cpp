#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
char n[100000];
main(){
       int a,b=0;
       while(scanf("%s",&n))
       {
                    if(n[0]==48)break;
                    a=strlen(n);
                    for(int i=0;i<=a;i++)
                    {
                            b=b+n[i];
                    }
                    if(b%3==0)
                    {
                       printf("yes\n");
                       b=0;
                    }
                    else
                    {
                           printf("no\n");
                           b=0;
                    }
       }
system("pause");
return 0;
}
