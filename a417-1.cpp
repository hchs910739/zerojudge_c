#include<stdio.h>
#include<stdlib.h>
int main(){
	int z,a,b,ans[101][101]={0};
	while(scanf("%d",&z)!=EOF)
	{
		for(int i=1;i<=z;i++)
		{
			scanf("%d %d",&a,&b);
			bool up=false,right=false,down=false,left=false;
			if(b==1)right=true;
			else down=true;
			int x=1,y=1;
			for(int j=1;j<=a*a;j++)
			{
				//printf("%d %d \n",x,y);
				if(b==1)
				{
					if(right==true&&ans[x][y]==0)
					{
						ans[x][y]=j;
						if(y+1<=a&&ans[x][y+1]==0)
						{
							y++;
						}
						else
						{
							x++;
							down=true;
							right=false;
						}
					}
					else if(down==true&&ans[x][y]==0)
					{
						ans[x][y]=j;
						if(x+1<=a&&ans[x+1][y]==0)
						{
							x++;
						}
						else
						{
							y--;
							left=true;
							down=false;
						}
					}
					else if(left==true&&ans[x][y]==0)
					{
						ans[x][y]=j;
						if(y-1>=1&&ans[x][y-1]==0)
						{
							y--;
						}
						else
						{
							x--;
							up=true;
							left=false;
						}
					}
					else if(up==true&&ans[x][y]==0)
					{
						ans[x][y]=j;
						if(x-1>=1&&ans[x-1][y]==0)
						{
							x--;
						}
						else
						{
							y++;
							right=true;
							up=false;
						}
					}
				}
				else if(b==2)
				{
					if(down&&ans[x][y]==0)
					{
						ans[x][y]=j;
						if(x+1<=a&&ans[x+1][y]==0)
						{
							x++;
						}
						else
						{
							y++;
							right=true;
							down=false;
						}
					}
					else if(right&&ans[x][y]==0)
					{
						ans[x][y]=j;
						if(y+1<=a&&ans[x][y+1]==0)
						{
							y++;
						}
						else
						{
							x--;
							up=true;
							right=false;
						}
					}
					else if(up&&ans[x][y]==0)
					{
						ans[x][y]=j;
						if(x-1>=1&&ans[x-1][y]==0)
						{
							x--;
						}
						else
						{
							y--;
							left=true;
							up=false;
						}
					}
					else if(left&&ans[x][y]==0)
					{
						ans[x][y]=j;
						if(y-1>=1&&ans[x][y-1]==0)
						{
							y--;
						}
						else
						{
							x++;
							down=true;
							left=false;
						}
					}
				}
			}
			for(int k=1;k<=a;k++)
			{
				for(int l=1;l<=a;l++)
				{
					printf("%5d",ans[k][l]);
					ans[k][l]=0;
				}
				printf("\n");
			}
		}
	}
system("pause");
return 0;
}
