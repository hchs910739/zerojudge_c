#include<stdio.h>
#include<stdlib.h>
int main(){
	bool a[1000000];
	for(int i=0;i<=1000000;i++)a[i]=true;
	
	a[0]=false;
	a[1]=false;
	for(int i=2;i<=1000000;i++)
	{
		if(a[i])
		{
			for(int j=i*2;j<=1000000;j=j+i)
			{
				a[j]=false;
			}
		}
	}
	int x;
	while(scanf("%d",&x)!=EOF)
	{
		int n=0;
		for(int i=2;i<=x;i++)
		{
			if(a[i])
			{
				printf("%10d",i);
				n++;
				if(n==5)
				{
					printf("\n");
					n=0;
				}
			}
		}
		printf("\n");
	}
return 0;
}
