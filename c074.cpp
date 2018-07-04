#include<stdio.h>
#include<stdlib.h>
int main(){
	int x,a[100];
	while(scanf("%d",&x)!=EOF)
	{
		if(x==0)break;
		for(int i=1;i<=x;i++)scanf("%d",&a[i]);
		for(int i=1;i<=x-5;i++)
		{
			for(int j=i+1;j<=x-4;j++)
			{
				for(int k=j+1;k<=x-3;k++)
				{
					for(int l=k+1;l<=x-2;l++)
					{
						for(int m=l+1;m<=x-1;m++)
						{
							for(int n=m+1;n<=x;n++)
							{
								printf("%d %d %d %d %d %d\n",a[i],a[j],a[k],a[l],a[m],a[n]);
							}
						}
					}
				}
			}
		}
	}
system("pause");
return 0;
}
