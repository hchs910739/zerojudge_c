#include<stdio.h>
#include<stdlib.h>
int main(){
    int x,y,i,n=0,ans=0;;
    while(scanf("%d %d",&x,&y)!=EOF)
    {
                    for(i=x;;i++)
                    {
                                 n=n+i;
                                 ans++;
                                 if(n>y)break;
                    }
                    printf("%d\n",ans);
                    ans=0;
                    n=0;
    }
system("pause");
return 0;
}
