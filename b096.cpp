#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b,c,x,y,z;
    while(scanf("%d %d %d %d %d %d",&a,&b,&c,&x,&y,&z)!=EOF)
    {
                    if(a==0&&b==0&&c==0&&x==0&&y==0&&z==0)break;
                    for(int i=1;;i++)
                    {
                                 x=x+(z-b);
                                 if(x<=0)
                                 {
                                         printf("You win in %d round(s).\n",i);
                                         break;
                                 }
                                 a=a+(c-y);
                                 if(a<=0)
                                 {
                                         printf("You lose in %d round(s).\n",i);
                                         break;
                                 }
                    }
    }
system("pause");
return 0;
}
