#include<stdio.h>
#include<stdlib.h>
int main(){
    int x,y,a,n=0,z=0,t=0;
    while(scanf("%d",&x)!=EOF)
    {
                 for(int i=1;i<=x;i++)
                 {
                              scanf("%d",&y);
                              z++;
                              a=y;
                              while(n!=y)
                              {
                                         while(a>0)
                                         {
                                                n=n+(a%10)*(a%10);
                                                a=a/10;    
                                         }
                                         a=n;
                                         //printf("%d ",n);
                                         if(n==1)
                                         {
                                                 t=0;
                                                 break;
                                         }
                                         else if(n==y)
                                         {
                                              t=1;
                                              break;
                                         }
                                         n=0;
                              }
                              if(t==0)printf("Case #%d: %d is a Happy number.\n",z,y);
                              else if(t==1)printf("Case #%d: %d is an Unhappy number.\n",z,y);
                              t=0;
                              n=0;
                 }
    }
system("pause");
return 0;
}
