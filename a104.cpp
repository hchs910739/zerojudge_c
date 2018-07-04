#include<stdio.h>
#include<stdlib.h>
int main(){
	int x,a[1001],c;
	while(scanf("%d",&x)!=EOF)
	{
		for(int i=1;i<=x;i++)scanf("%d",&a[i]);
		for(int i=1;i<x;i++)
		{
			for(int j=i+1;j<=x;j++)
			{
				if(a[j]>a[i])
				{
					c=a[j];
					a[j]=a[i];
					a[i]=c;
				}
			}
		}
		for(int i=x;i>=1;i--)printf("%d ",a[i]);
		printf("\n");
	}
system("pause");
return 0;
}
