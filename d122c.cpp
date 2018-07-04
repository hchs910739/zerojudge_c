#include<stdio.h>
#include<stdlib.h>
int main(){
    long long int x,num=0,i,ans=0;
    while(scanf("%lld",&x)!=EOF)
    {
		for(i=5;i<=x;i=i*5)
		{
			ans=ans+(x/i);
		}
		printf("%lld\n",ans);
		ans=0;
    }
system("pause");
return 0;
}
