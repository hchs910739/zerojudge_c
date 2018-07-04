#include<stdio.h>
#include<stdlib.h>
int main(){
	int x,a,ans=0,y;
	while(scanf("%d",&x)!=EOF)
	{
		for(int i=1;i<=x;i++)
		{
			scanf("%d",&a);
			for(int j=2;j<=a;j++)
			{
				y=j;
				if(y%3==0)continue;
				while(y%2==0)
				{
					y=y/2;
				}
				while(y%5==0)
				{
					y=y/5;
				}
				if(y==1)ans++;
			}
			printf("%d\n",ans);
			ans=0;
		}
	}
system("pause");
return 0;
}
