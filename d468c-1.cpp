#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	long long int x,y;
	double ans;
	while(scanf("%lld %lld",&x,&y)!=EOF)
	{
		if(x==0&&y==0)
		{
			printf("All Over.\n");
			break;
		}
		ans=pow(x,y);
		printf("%lld\n",(long long int)ans);
	}
system("pause");
return 0;
}
