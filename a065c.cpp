#include<stdio.h>
#include<stdlib.h>
int main(){
    char a[10];
    int j;
    while(scanf("%s",a)!=EOF)
    {
            for(j=0;j<=5;j++)
            {
                    printf("%d",abs(a[j+1]-a[j]));
            }
            printf("\n");
    }
system("pause");
return 0;
}
