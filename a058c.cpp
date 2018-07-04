#include<stdio.h>
#include<stdlib.h>
int main(void){
    int a=0,b=0,c=0,x;
    int y[1000];
    while(scanf("%d",&x)!=EOF)
    {
                              for(int i=1;i<=x;i++)
                              {
                                      scanf("%d",&y[i]);
                                      if(y[i]%3==0)a++;
                                      else if(y[i]%3==1)b++;
                                      else if(y[i]%3==2)c++;
                              }
                              printf("%d %d %d\n",a,b,c);
                              a=0;
                              b=0;
                              c=0;
    }
system("pause");
return 0;
}
