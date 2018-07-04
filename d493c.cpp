#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    long long int x,y,ans;
    while(scanf("%lld %lld",&x,&y)!=EOF)
    {
                      ans=pow(x,y);
                      printf("%lld\n",ans);
    }
system("pause");
return 0;
}
