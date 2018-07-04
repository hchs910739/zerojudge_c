#include<stdio.h>
#include<stdlib.h>
int main(void){
    int x;
    while(scanf("%d",&x)!=EOF)
    {
                            for(int i=1;i<=x;i++)
                            {
                                    for(int j=(x-i);j>=1;j--)
                                    {
                                            printf("_");
                                    }
                                    for(int k=1;k<=i;k++)
                                    {
                                            printf("+");
                                    }
                                    printf("\n");
                            }
    }
system("pause");
return 0;
}
