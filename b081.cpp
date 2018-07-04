#include<stdio.h>
#include<stdlib.h>
int main(){
	int x,y=0,z=0;
	while(scanf("%d",&x)!=EOF)
	{
		if(x==0)break;
		for(int i=1;i<x;i++)
		{
			if(x%i==0)y=y+i;
		}
		for(int i=1;i<y;i++)
		{
			if(y%i==0)z=z+i;
		}
		if(x==y&&y==z)printf("=%d\n",x);
		else if(x==z)printf("%d\n",y);
		else printf("0\n");
		y=0;
		z=0;
	}
system("pause");
return 0;
}
