#include<stdio.h>
#include<stdlib.h>
int main(void){
    int x;
    while(scanf("%d",&x)!=EOF)
    {
                              if(x>25)printf("%d\n",85-x);
                              else printf("%d\n",25-x);
    }
system("pause");
return 0;
}
