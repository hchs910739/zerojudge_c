#include<stdio.h>
#include<stdlib.h>
int main(){
	int x,a,y=1,ans=0;
	while(scanf("%d",&x)!=EOF)
	{
		for(int i=1;i<=x;i++)
		{
			scanf("%d",&a);
			for(int j=2;j<=a;j++)
			{
				for(int k=1;k<=11;k++)
				{
					y=y%j;
					y=y*10;
					if(y==0)
					{
						ans++;
						break;
					}
				}
				y=1;
			}
			printf("%d\n",ans);
			ans=0;
		}
	}
system("pause");
return 0;
}
