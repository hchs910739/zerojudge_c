#include<stdio.h>
#include<stdlib.h>
int main(){
    int x;
    while(scanf("%d",&x)!=EOF)
    {
                              printf("'C' can use printf(");
                              printf("%c",34);
                              printf("%c",37);
                              printf("d");
                              printf("%c",34);
                              printf(",n); to show integer like %d\n",x);
    }
system("pause");
return 0;
}
