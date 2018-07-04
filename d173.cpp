#include<stdio.h>
#include<stdlib.h>
int main(){
	int x;
	while(scanf("%d",&x)!=EOF)
	{
		printf("%d\n",((x-1)*4)*((2*x)-3)+1);
	}
system("pause");
return 0;
}
