#include<stdio.h>
#include<stdlib.h>
int main(){
	long long int a;
	while(scanf("%lld",&a)!=EOF)
	{
		for(long long int i=1;;i++)
		{
			if(a==i*i*i)
			{
				printf("%lld\n",i);
				break;
			}
		}
	}
system("pause");
return 0;
}
