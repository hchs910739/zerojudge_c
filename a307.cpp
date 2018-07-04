#include<stdio.h>
#include<stdlib.h>
int main(){
	int x;
	while(scanf("%d",&x)!=EOF)
	{
		bool start=false;
		if(x<0)
		{
			x=-x;
			printf("-");
			while(x>0)
			{
				if(x%10==0&&start==false)
				{
					x=x/10;
					continue;
				}
				else if(x%10==0&&start==true)
				{
					printf("0");
					x=x/10;
				}
				else if(x%10!=0)
				{
					printf("%d",x%10);
					x=x/10;
					start=true;
				}
			}
		}
		else
		{
			while(x>0)
			{
				if(x%10==0&&start==false)
				{
					x=x/10;
					continue;
				}
				else if(x%10==0&&start==true)
				{
					printf("0");
					x=x/10;
				}
				else if(x%10!=0)
				{
					printf("%d",x%10);
					x=x/10;
					start=true;
				}
			}
			printf("\n");
		}
	}
system("pause");
return 0;
}
