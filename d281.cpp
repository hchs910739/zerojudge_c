#include<stdio.h>
#include<stdlib.h>
int main(){
	long long int x;
	while(scanf("%lld",&x)&&x>=0)
	{
		if(x==1)printf("0%%\n");
		else printf("%lld%%\n",x*25);
	}
system("pause");
return 0;
}
