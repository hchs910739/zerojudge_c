#include<stdio.h>
#include<stdlib.h>
int main(){
	int x,y,z,i,a[31],j,t=1;
	while(scanf("%d %d",&x,&y)!=EOF)
	{
		if(y>x)
		{
			z=y;
			y=x;
			x=z;
		}
		for(i=1;i<=30;i++)
		{
			scanf("%d",&a[i]);
		}
		for(j=1;j<=30;j++)
		{
			if(a[j]==0)continue;
			else
			{
				if(t<=3&&a[j]==x)
				{
					printf("Y\n");break;
				}
				else
				{
					t++;
				}
			}
		}
		if(t>3)printf("N\n");
		t=1;
	}
system("pause");
return 0;
}
