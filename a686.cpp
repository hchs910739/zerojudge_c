#include<stdio.h>
#include<stdlib.h>
int main(){
	long long int x,a,b,c,ans=0,up;
	while(scanf("%lld",&x)!=EOF)
	{
		for(int i=1;i<=x;i++)
		{
			scanf("%lld %lld %lld",&a,&b,&c);
			up=b-c;
			if(up<=0&&a>b)printf("Poor Snail\n");
			else if(up<=0&&b>=a)printf("1\n");
			else if(up>0&&(a-b)%up==0)printf("%lld\n",((a-b)/up)+1);
			else if(up>0&&(a-b)%up!=0)printf("%lld\n",((a-b)/up)+2);
		}
	}
system("pause");
return 0;
}
