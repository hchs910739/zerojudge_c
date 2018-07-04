#include<stdio.h>
#include<stdlib.h>
int main(){
	long long int n,a,b,c,x;
	scanf("%lld",&n);
		for(int i=1;i<=x;i++)
		{
			scanf("%lld",&x);
			long long int all=0;
			for(int j=1;j<=x;j++)
			{
				scanf("%lld %lld %lld",&a,&b,&c);
				all=all+a*c;
			}
			printf("%lld\n",all);
		}
system("pause");
return 0;
}
