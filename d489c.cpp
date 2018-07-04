#include<stdio.h>
#include<stdlib.h>
int main(void){
    int a,b,c,s;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
                    s=(a+b+c)/2;
                    printf("%d\n",s*(s-a)*(s-b)*(s-c));
    }
system("pause");
return 0;
}
