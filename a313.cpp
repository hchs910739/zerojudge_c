#include<stdio.h>
#include<stdlib.h>
int main(){
	int x,y,a[10001],all=0,ans=0;
	while(scanf("%d",&x)!=EOF)
	{
		for(int i=1;i<=x;i++)
		{
			scanf("%d",&y);
			for(int j=1;j<=y;j++)
			{
				scanf("%d",&a[j]);
			}
			for(int j=1;j<=y;j++)
			{
				all=all+a[j];
				if(all==0)
				{
					ans++;
				}
			}
			printf("%d\n",ans);
			ans=0;
		}
	}
system("pause");
return 0;
}
