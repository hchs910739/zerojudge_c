#include<stdio.h>
#include<stdlib.h>
int main(){
	int x,y;
	while(scanf("%d %d",&x,&y)!=EOF)
	{
		int up=1,down=1;
		for(int i=1;i<=y;i++)
		{
			up=up*(x-i+1);
			down=down*i;
		}
		printf("%d\n",up/down);
	}
system("pause");
return 0;
}
