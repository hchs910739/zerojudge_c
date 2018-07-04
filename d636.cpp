#include<stdio.h>
#include<stdlib.h>
int main(){
    long long int x,y,ans=1;
    while(scanf("%lld %lld",&x,&y)!=EOF)
    {
		y=y%10007;
                    for(int i=1;i<=y;i++)
                    {
                            ans=ans*x;
                            if(ans>=100000)ans=ans%10007;
                    }
                    printf("%lld",ans%10007);
                    ans=1;
    }
system("pause");
return 0;
}
