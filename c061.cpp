#include<stdio.h>
#include<stdlib.h>
int main(){
	long long int x,y;
	while(scanf("%lld %lld",&x,&y)!=EOF)
	{
		if(x==0&&y==0)break;
		long long int up=1,down=1;
		if(y>(x/2))y=(x-y);
		for(long long int i=1;i<=y;i++)
		{
			up=up*(x-i+1);
			down=down*i;
			if(up%down==0)
			{
				up=up/down;
				down=1;
			}
		}
		printf("%lld\n",up/down);
	}
system("pause");
return 0;
}
