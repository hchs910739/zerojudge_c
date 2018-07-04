#include<stdio.h>
#include<stdlib.h>
int main(void){
    int x,y,ans;
    while(scanf("%d %d",&x,&y)!=EOF)
    {
                    if(x>y)
                    {
                           for(int i=y;i>=1;i--)
                           {
                                   if(x%i==0&&y%i==0)
                                   {
                                                     printf("%d\n",i);
                                                     break;
                                   }
                           }
                    }
                    else
                    {
                        for(int i=x;i>=1;i--)
                           {
                                   if(x%i==0&&y%i==0)
                                   {
                                                     printf("%d\n",i);
                                                     break;
                                   }
                           }
                    }
    }
system("pause");
return 0;
}
