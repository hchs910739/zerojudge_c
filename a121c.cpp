#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int a[100000],c=0,b=1;
	a[1]=2;
	for(int i=3;i<=1000000;i++)
	{
		for(int j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
			{
				c=1;
				break;
			}
		}
		if(c==0)a[b++]=i;
		c=0;
	}
	for(int i=1;i<=100000;i++)
	{
		printf("%d ",a[i]);
	}
system("pause");
return 0;
}
