#include<stdio.h>
#include<stdlib.h>
int main(){
    int x,i;
    while(scanf("%d",&x)!=EOF)
    {
                              for(i=1;i<x;i++)
                              {
                                               if(i%7!=0)printf("%d ",i);
                              }
                              printf("\n");
    }
system("pause");
return 0;
}
