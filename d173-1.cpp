#include<stdio.h>
#include<stdlib.h>
int main(){
	int x;
	while(scanf("%d",&x)!=EOF)
	{
		printf("%d\n",(x-2)*8+5);
	}
system("pause");
return 0;
}
