#include<stdio.h>
#include<stdlib.h>
int main(){
	int x,y,min=100000,n;
	char a[11],b[11],ans1[11],ans2[11];
	while(scanf("%d",&x)!=EOF)
	{
		for(int i=1;i<=x;i++)
		{
			scanf("%d",&y);
			for(int j=1;j<=y;j++)
			{
				scanf("%s %s %d",a,b,&n);
				if(n<min)
				{
					min=n;
					for(int k=0;k<10;k++)
					{
						ans1[k]=a[k];
						ans2[k]=b[k];
					}
				}
			}
			if(min>=0)
			{
				printf("Are you kidding me?\n");
			}
			else printf("%s %s\n",ans1,ans2);
			min=100000;
		}
	}
system("pause");
return 0;
}
