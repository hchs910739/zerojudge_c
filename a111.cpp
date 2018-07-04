#include<stdio.h>
#include<stdlib.h>
int main(){
    int x;
    while(scanf("%d",&x)!=EOF)
    {
                              if(x==0)break;
                              printf("%d\n",(x*(x+1)*((2*x)+1))/6);
    }
system("pause");
return 0;
}
