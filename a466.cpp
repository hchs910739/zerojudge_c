#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int x;
	while(scanf("%d",&x)!=EOF)
	{
		for(int i=1;i<=x;i++)
		{
			char a[10];
			scanf("%s",a);
			if(strlen(a)==5)
			{
				printf("3\n");
				continue;
			}
			if(a[0]=='o'&&a[1]=='n')printf("1\n");
			else if(a[0]=='o'&&a[2]=='e')printf("1\n");
			else if(a[1]=='n'&&a[2]=='e')printf("1\n");
			else if(a[0]=='t'&&a[1]=='w')printf("2\n");
			else if(a[0]=='t'&&a[2]=='o')printf("2\n");
			else if(a[1]=='w'&&a[2]=='o')printf("2\n");
		}
	}
system("pause");
return 0;
}
