#include<stdio.h>
#include<stdlib.h>
int main(){
    int x,y,a,b;
    while(scanf("%d %d %d %d",&x,&y,&a,&b)!=EOF)
    {
                    if(x==0&&y==0&&a==0&&b==0)break;
                    else if((x*y)%(a*b)!=0)printf("-1\n");
                    //else if(x%a!=0||y%b!=0)printf("-1\n");
                    else printf("%d\n",(x*y)/(a*b));
    }
system("pause");
return 0;
}
