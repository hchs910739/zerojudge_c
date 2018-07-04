#include<stdio.h>
#include<stdlib.h>
int main(){
    int x;
    while(scanf("%d",&x)!=EOF)
    {
                              if(x%2==0)printf("%d\n",x);
                              else printf("%d\n",x-1);
    }
system("pause");
return 0;
}
