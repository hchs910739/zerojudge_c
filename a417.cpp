#include<stdio.h>
#include<stdlib.h>
int main(){
	int x,a,b,ans[101][101]={0},X,Y;
	while(scanf("%d",&x)!=EOF)
	{
		for(int i=1;i<=x;i++)
		{
			scanf("%d %d",&a,&b);
			X=1;
			Y=1;
			if(b==1)
			{
				for(int j=1;j<=a*a;j++)
				{
					if(ans[X][Y]==0&&Y<=a)
					{
						ans[X][Y]=j;
						if(Y!=a)Y++;
						else X++;
					}
					else if(ans[X][Y]==0&&X<=a)
					{
						ans[X][Y]=j;
						if(X!=a)X++;
						else Y--;
					}
					else if(ans[X][Y]==0&&X>=1)
					{
						ans[X][Y]=j;
						if(Y!=1)Y--;
						else X--;
					}
					else if(ans[X][Y]==0&&Y>=1)
					{
						ans[X][Y]=j;
						if(X!=1)X--;
						else Y++;
					}
				}
			}
			else if(b==2)
			{
				
			}
			for(int j=1;j<=a;j++)
			{
				for(int k=1;k<=a;k++)
				{
					printf("%d ",ans[j][k]);
					ans[j][k]=0;
				}
				printf("\n");
			}
			X=1;Y=1;
		}
	}
system("pause");
return 0;
}
