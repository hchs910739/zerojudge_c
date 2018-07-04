#include<stdio.h>
#include<stdlib.h>
int main(){
    int x,i,ans=1;
    while(scanf("%d",&x)!=EOF)
    {
                              if(x==0)printf("0! = 1 = 1\n");
                              else
                              {
                                  printf("%d! =",x);
                                  for(i=x;i>=2;i--)
                                  {
                                                  printf(" %d *",i); 
                                                  ans=ans*i;
                                  }
                                  printf(" 1 = %d\n",ans);
                                  ans=1;
                              }
    }
system("pause");
return 0;
}
