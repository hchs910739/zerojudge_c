#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	long long int c;
	int ans;
    double b;
    while((scanf("%lld",&c)!=EOF))
	{
	    b=pow(c,1.0/3);
	    ans=(int)b;
	    if(c<=63)printf("%d\n",ans);
	    else printf("%d\n",ans+1);
	}
system("pause");
return 0;
}
