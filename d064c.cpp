#include<stdio.h>
#include<stdlib.h>
int main(void){
    int x;
    while(scanf("%d",&x)!=EOF)
    {
                              if(x%2==1)
                              {
                                        printf("Odd\n");
                              }
                              else
                              {
                                  printf("Even\n");
                              }
    }
system("pause");
return 0;
}
