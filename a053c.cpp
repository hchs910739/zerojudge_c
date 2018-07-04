#include<stdio.h>
#include<stdlib.h>
int main(void){
    int x;
    while(scanf("%d",&x)!=EOF)
    {
                              if(x>=0&&x<=10)
                              {
                                             printf("%d\n",x*6);
                              }
                              else if(x>=11&&x<=20)
                              {
                                   printf("%d\n",60+(x-10)*2);
                              }
                              else if(x<=40&&x>=21)
                              {
                                   printf("%d\n",60+x);
                              }
                              else
                              {
                                  printf("100\n");
                              }
    }
system("pause");
return 0;
}
