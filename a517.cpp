#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    long long int a,b,c;
    while(scanf("%lld %lld %lld",&a,&b,&c)!=EOF)
    {
        long long int d;
        d=sqrt(a*a+b*b);
        printf("%lld\n",sqrt(d*d+c*c));                     
    }
system("pause");
return 0;
}

