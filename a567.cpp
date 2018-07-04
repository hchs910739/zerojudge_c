#include<stdio.h>
#include<stdlib.h>
int main(){
	int x,a[10001],b[10001];
	while(scanf("%d",&x)!=EOF)
	{
		for(int i=1;i<=x;i++)
		{
			scanf("%d %d",&a[i],&b[i]);
		}
	}
system("pause");
return 0;
}
