#include<stdio.h>
#include<stdlib.h>
int main(){
	int x;
	while(scanf("%d",&x)!=EOF)
	{
		if(x<0)break;
		long long int a=1,b=0,c;
		for(int i=1;i<=x;i++)
		{
			c=b+1;
			b=(a+b);
			a=c;
		}
		printf("%lld %lld\n",b,a+b);
	}
system("pause");
return 0;
}
