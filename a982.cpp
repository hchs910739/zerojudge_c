#include<stdio.h>
#include<stdlib.h>
#include <string>

int n;
int m[101][101];

void maze(int x,int y)
{
	if(x>1)//left
	{
		if(m[x-1][y]==0 || m[x][y] <= m[x-1][y])
		{
			m[x-1][y] = m[x][y] + 1;
			maze(x-1,y);
			//printf("%d",m[x-1][y]);
		}
	}
	if(x<n)//right
	{
		if(m[x+1][y]==0 || m[x][y] <= m[x+1][y])
		{
			m[x+1][y] = m[x][y] + 1;
			maze(x+1,y);
			//printf("%d",m[x+1][y]);
		}
	}
	if(y>1)//up
	{
		if(m[x][y-1]==0 || m[x][y] <= m[x][y-1])
		{
			m[x][y-1] = m[x][y] +1;
			maze(x,y-1);
			//printf("%d",m[x][y-1]);
		}
	}
	if(y<n)//down
	{
		if(m[x][y+1]==0 || m[x][y] <= m[x][y+1])
		{
			m[x][y+1] = m[x][y] +1;
			maze(x,y+1);
			//printf("%d",m[x][y+1]);
		}
	}
}

int main(void){
	while(scanf("%d",&n)!=EOF)
	{
		char a[n+1];
		for(int y=1;y<=n;y++)
		{
			scanf("%s",a);
			for(int x=1;x<=n;x++)
			{	
				if(a[x-1]=='#')m[x][y]=-1;
				else m[x][y]=0;
			}
		}
		
		m[2][2]=1;
	    maze(2,2);
		
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				printf("%2d",m[j][i]);
			}
			printf("\n");
		}
		if(m[n-1][n-1] != 0)printf("%d\n",m[n-1][n-1]);
		else printf("No solution!\n");
	}
system("pause");
return 0;
}
