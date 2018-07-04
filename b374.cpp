#include<stdio.h>
#include<stdlib.h>
int main(void){
	
	int x,b;
	
	while(scanf("%d",&x)!=EOF)
	{
		int max=0;
		int a[30001]={0};
		for(int i=1;i<=x;i++)
		{
			scanf("%d",&b);
			a[b]++;
			if(a[b] > max)max = a[b];
		}
		for(int i=1;i<=30001;i++)
		{
			if(a[i] == max)printf("%d %d\n",i,max);
		}
		max=0;
	}
	
system("pause");
return 0;
}

