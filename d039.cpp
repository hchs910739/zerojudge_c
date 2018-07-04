#include<stdio.h>
#include<stdlib.h>
int main(){
	int x,a,b;
	while(scanf("%d",&x)!=EOF)
	{
		for(int i=1;i<=x;i++)
		{
			scanf("%d %d",&a,&b);
			printf("%d\n",(a/3)*(b/3));
		}
	}
system("pause");
return 0;
}
