#include<stdio.h>
#include<stdlib.h>
int main(){
	int real,num,x,a[5];
	while(scanf("%d %d",&real,&x)!=EOF)
	{
		a[1]=real/1000;
		a[2]=(real%1000)/100;
		a[3]=(real%100)/10;
		a[4]=real%10;
		for(int i=1;i<=x;i++)
		{
			scanf("%d",&num);
			int b[5],A=0,B=0;
			b[1]=num/1000;
			b[2]=(num%1000)/100;
			b[3]=(num%100)/10;
			b[4]=num%10;
			for(int j=1;j<=4;j++)
			{
				for(int k=1;k<=4;k++)
				{
					if(j==k&&a[j]==b[k])A++;
					else if(j!=k&&a[j]==b[k])B++;
				}
			}
			printf("%dA%dB\n",A,B);
		}
	}
system("pause");
return 0;
}
