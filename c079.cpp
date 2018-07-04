#include<stdio.h>
#include<stdlib.h>
int main(){
    int x,y,ans=0,k;
    while(scanf("%d %d",&x,&y)!=EOF)
    {
                    ans=x;
                    k=x;
                    while((k/y)>=1)
                    {
                               ans=ans+(k/y);
                               k=(k%y)+(k/y);  
                    }
                    printf("%d\n",ans);
                    ans=0;
    }
system("pause");
return 0;
}
