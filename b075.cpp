#include<stdio.h>
#include<stdlib.h>
int main(){
	int x,y,hour1,minute1,hour2,minute2,h,m,a,b,c,d;
	char n[11];
	while(scanf("%d",&x)!=EOF)
	{
		for(int i=1;i<=x;i++)
		{
			scanf("%d %d:%d %d:%d",&y,&hour1,&minute1,&hour2,&minute2);
			for(int j=1;j<=y;j++)
			{
				scanf("%s %d:%d",n,&h,&m);
				//printf("%.2d:%.2d %.2d:%.2d\n",hour1-h,minute1-m,hour2-h,minute2-m);
				a=hour1-h;
				b=minute1-m;
				c=hour2-h;
				d=minute2-m;
				if(b<0)
				{
					b=b+60;
					a--;
				}
				if(d<0)
				{
					d=d+60;
					c--;
				}
				printf("%.2d:%.2d %.2d:%.2d\n",a,b,c,d);
			}
		}
	}
system("pause");
return 0;
}
