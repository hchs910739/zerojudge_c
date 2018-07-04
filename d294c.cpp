#include<stdio.h>
#include<stdlib.h>
int main(){
    long long int x,y;
    while(scanf("%lld %lld",&x,&y)!=EOF)
    {
                    printf("%lld\n",((x*(x+1))/2)*((y*(y+1))/2));
    }
system("pause");
return 0;
}
