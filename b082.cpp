#include<stdio.h>
#include<stdlib.h>
int main(){
	int x,y,a[101],b[101],A,B;
	char c[101],C;
	while(scanf("%d",&x)!=EOF)
	{
		for(int i=1;i<=x;i++)
		{
			scanf("%d",&y);
			for(int j=1;j<=y;j++)
			{
				scanf("%d %c %d",&a[j],&c[j],&b[j]);
			}
			for(int k=1;k<y;k++)
			{
				for(int m=2;m<=y;m++)
				{
					if(b[k]==a[m])
					{
						A=a[k+1];
						a[k+1]=a[m];
						a[m]=A;
						B=b[k+1];
						b[k+1]=b[m];
						b[m]=B;
						C=c[k+1];
						c[k+1]=c[m];
						c[m]=C;
						break;
					}
				}
			}
			for(int n=1;n<=y;n++)printf("%c",c[n]);
			printf("\n");
		}
	}
system("pause");
return 0;
}
