#include<stdio.h>
#include<stdlib.h>
int main(){
    long long int x;
    while(scanf("%lld",&x)!=EOF)
    {
                              if(x%4==0)printf("%lld\n",(x/4)*(x/4));
                              else printf("%lld\n",((x/2)/2)*((x/2)/2+1));
    }
system("pause");
return 0;
}
