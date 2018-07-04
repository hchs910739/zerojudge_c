#include<stdio.h>
#include<stdlib.h>
int main(){
    int x,y;
    while(scanf("%d %d",&x,&y)!=EOF)
    {
                    if(x==y)
                    {
                        printf("%d\n",y);   
                    }
                    else
                    {
                        printf("%d\n",y+1);
                    }
    }
system("pause");
return 0;
}
