#include<stdio.h>
#include<stdlib.h>
int main(){
	int x,a[100],i=1;
	while(scanf("%d",&x)!=EOF)
	{
		if(x<0)break;
		for(;;i++)
		{
			a[i]=x%3;
			x=(x-(x%3))/3;
			if(x==0)break;
		}
		for(int j=i;j>=1;j--)
		{
			printf("%d",a[j]);
		}
		printf("\n");
		i=1;
	}
system("pause");
return 0;
}
