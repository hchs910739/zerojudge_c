#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char a[1001]={0};
    int l,c=0,b=0;
    while(scanf("%s",a)!=EOF)
    {
                             l=strlen(a);
                             if(l==1&&a[0]==48)break;
                             for(int i=0;i<l;i=i+2)
                             {
                                     b=b+a[i];
                                     c=c+a[i+1];
                             }
                             if(l%2==1)b=b-48;
                             //printf("%d %d\n",b,c);
                             if(b==c||(b-c)%11==0||(c-b)%11==0)
                             {
                                     for(int j=0;j<l;j++)printf("%d",a[j]-48);
                                     printf(" is a multiple of 11.\n");
                             }
                             else
                             {
                                     for(int j=0;j<l;j++)printf("%d",a[j]-48);
                                     printf(" is not a multiple of 11.\n");
                             }
                             b=0;
                             c=0;
    }
system("pause");
return 0;
}
