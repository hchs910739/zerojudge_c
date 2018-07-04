#include<stdio.h>
#include<stdlib.h>
int main(){
	int a;
	while(scanf("%d",&a)!=EOF)
	{
		printf("{0}\n");
		for(int i=1;i<=a;i++)
		{
			printf("{");
			while(i<=a)
			{
				if(i==1||i==j)printf("%d",j);
				else printf("%d,",j);
			}
			printf("}\n");
		}
	}
system("pause");
return 0;
}
