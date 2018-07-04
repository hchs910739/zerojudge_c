#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b,c,d,x,y,n,i;
    while(scanf("%d",&n)!=EOF)
    {
                for(i=1;i<=n;i++)
                {
                    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&x,&y);
                    if((b-y)*(d-y)==(a-x)*(c-x))printf("該死的東西!竟敢想讓我死！\n");
                    else printf("父親大人!母親大人!我快到了！\n");
                }
    }
system("pause");
return 0;
}
