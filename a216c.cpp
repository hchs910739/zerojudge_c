#include<stdio.h>
#include<stdlib.h>
int main(){
    long long int x,i,a=0,b=0;
    while(scanf("%lld",&x)!=EOF)
    {
                              for(i=1;i<=x;i++)
                              {
                                               a=a+i;
                                               b=b+a;
                              }
                              printf("%lld %lld\n",a,b);
                              a=0;
                              b=0;
    }
system("pause");
return 0;
}
