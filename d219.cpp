#include<stdio.h>
#include<stdlib.h>
int main(){
    long long int b,p,m,ans=1;
    while(scanf("%lld %lld %lld",&b,&p,&m)!=EOF)
    {
                    for(int i=1;i<=p;i++)
                    {
                            ans=ans*b;
                            ans=ans%m;
                    }
                    printf("%lld\n",ans);
                    ans=1;
    }
system("pause");
return 0;
}
