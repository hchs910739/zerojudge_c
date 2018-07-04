#include<stdio.h>
#include<stdlib.h>
int main(){
    int x,y;
    while(scanf("%d %d",&x,&y)!=EOF)
    {
                    printf("%d\n",((y-(y%2))-(x+(x%2)))/2+1);
    }
system("pause");
return 0;
}
