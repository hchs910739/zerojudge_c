#include<stdio.h>
#include<stdlib.h>
int main(){
	int x,y,a=0;
	while(scanf("%d %d",&x,&y)!=EOF)
	{
		if(x==0&&y==0)break;
		for(int i=1;i;i++)
		{
			if(i*i<=y&&i*i>=x)a++;
			else if(i*i>y)break;
		}
		printf("%d\n",a);
		a=0;
	}
system("pause");
return 0;
}
