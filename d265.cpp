#include<stdio.h>
#include<stdlib.h>
int main(){
	int x,a[10001];
	while(scanf("%d",&x)!=EOF)
	{
		if(x==0)break;
		for(int i=1;i<=x;i++)scanf("%d",&a[i]);
		if(x%2==0)printf("No\n");
		else if(x%2==1)printf("Yes\n");
	}
system("pause");
return 0;
}
