#include<stdio.h>
#include<stdlib.h>
int main(){
	int x,y;
	while(scanf("%d.%d",&x,&y)!=EOF)
	{
		printf("%d.%d",x,y);
		if(x+(y/100)>0&&x+(y/100)<=100)
		{
			
		}
		else if(x+(y/100)<=500&&x+(y/100)>100)
		{
			
		}
		else
		{
			x=(x*6)/10;
			y=(y*6)/10;
		}
	}
system("pause");
return 0;
}
