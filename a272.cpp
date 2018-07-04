#include<stdio.h>
#include<stdlib.h>
int main(){
	long long int x,a[4];
	a[1]=1;
	a[2]=2;
	while(scanf("%lld",&x)!=EOF)
	{
		for(int i=3;i<=x;i++)
		{
			a[i]=a[i-1]+a[i-2];
			printf("%lld %lld %lld\n",a[i],a[i-1],a[i-2]);
			a[i]=a[i]%10007;
			a[i-2]=a[i-1];
			a[i-1]=a[i];
			printf("%lld %lld %lld\n",a[i],a[i-1],a[i-2]);
		}
		//printf("%lld\n",a[x]);
		a[1]=1;
		a[2]=2;
	}
system("pause");
return 0;
}
