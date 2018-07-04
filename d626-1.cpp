#include<stdio.h>
#include<stdlib.h>
int n;
char pic[101][101]={0};
void map(int a,int b)
{
	if(a<1||b<1||a>n||b>n)return;
	if(pic[a][b]=='+')return;
	pic[a][b]='+';
	for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				printf("%c",pic[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	map(a+1,b);
	map(a,b+1);
	map(a-1,b);
	map(a,b-1);
}
int main(){
	int a,b,z=0;
	while(scanf("%d",&n)!=EOF)
	{
		for(int i=1 ;i<=n ;i++)
		{
			for(int j=1 ;j<=n ;j++)
			{
				scanf(" %c",&pic[i][j]);
			}
		}
		scanf("%d %d",&a,&b);
		a++;
		b++;
		map(a,b);
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				printf("%c",pic[i][j]);
			}
			printf("\n");
		}
	}
system("pause");
return 0;
}
