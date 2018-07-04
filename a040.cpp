#include<stdio.h>
#include<stdlib.h>
int main(){
    int x,y,ans,all=0,a=0;
    while(scanf("%d %d",&x,&y)!=EOF)
    {
                    for(int i=x;i<=y;i++)
                    {
                            ans=i;
                            while((ans%10)>0)
                            {
                                             all=all+((ans%10)*(ans%10)*(ans%10));
                                             ans=ans/10;
                                             //printf("%d %d\n",ans,all);
                            }
                            if(all==i)
                            {
                                      printf("%d\n",i);
                                      a=1;
                            }
                            all=0;
                    }
                    if(a==0)printf("none\n");
                    a=0;
    }
system("pause");
return 0;
}
