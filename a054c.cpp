#include<stdio.h>
#include<stdlib.h>
int main(void){
    char a[10];
    int num=0,c;
    while(scanf("%s",&a)!=EOF)
    {
                              for(int i=0;i<=7;i++)
                              {
                                      num=num+((a[i]-48)*(8-i));
                              }
                              c=10-(a[8]-48);
                              c=c%10;
                              if((num)%10==c)printf("BNZ\n");
                              else if((num+9)%10==c)printf("CIP\n");
                              else if((num+8)%10==c)printf("DOQ\n");
                              else if((num+7)%10==c)printf("ER\n");
                              else if((num+6)%10==c)printf("FS\n");
                              else if((num+5)%10==c)printf("GT\n");
                              else if((num+4)%10==c)printf("HU\n");
                              else if((num+3)%10==c)printf("JVX\n");
                              else if((num+2)%10==c)printf("KLY\n");
                              else if((num+1)%10==c)printf("AMW\n");
                              num=0;
    }
system("pause");
return 0;
}
