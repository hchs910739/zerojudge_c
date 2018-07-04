#include<stdio.h>
#include<stdlib.h>
int main(){
	int x,y,a[10001],b[10001],ans=0;
	while(scanf("%d %d",&x,&y)!=EOF)
	{
		for(int i=1;i<=x;i++)
		{
			for(int j=1;j<=y;j++)scanf("%d",&a[j]);
			for(int j=1;j<=y;j++)scanf("%d",&b[j]);
			for(int j=1;j<=y;j++)
			{
				for(int k=1;k<=y;k++)
				{
					if(a[j]==b[k])ans++;
				}
			}
			printf("%d\n",ans);
			ans=0;
		}
	}
system("pause");
return 0;
}
