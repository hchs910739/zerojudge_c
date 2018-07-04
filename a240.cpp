#include<stdio.h>
#include<stdlib.h>
int main(){
	int x,a,ans=0,A,y=1;
	while(scanf("%d",&x)!=EOF)
	{
		for(int i=1;i<=x;i++)
		{
			scanf("%d",&a);
			for(int j=1;j<=a;j++)
			{
				y=y%17;
				y=y*10;
				ans=ans+(y/17);
				if(j==a)A=y/17;
			}
			printf("%d %d\n",A,ans);
			ans=0;
			y=1;
		}
	}
system("pause");
return 0;
}
