#include<stdio.h>
#include<stdlib.h>
int main(){
    int x;
    while(scanf("%d",&x)!=EOF)
    {
                              while(x>0)
                              {
                                        if(x>=1000000000)
                                        {
                                                        if(x/1000000000==1)printf("珺");
                                                        else if(x/1000000000==2)printf("禠珺");
                                        }
                                        else if(x>=100000000)
                                        {
                                             if(x/100000000==1)printf("滁货");
                                             else if(x/100000000==2)printf("禠货");
                                             else if(x/100000000==3)printf("把货");
                                             else if(x/100000000==4)printf("竩货");
                                             else if(x/100000000==5)printf("ヮ货");
                                             else if(x/100000000==6)printf("嘲货");
                                             else if(x/100000000==7)printf("琺货");
                                             else if(x/100000000==8)printf("货");
                                             else if(x/100000000==9)printf("╤货");
                                        }
                                        else if(x>=10000000)
                                        {
                                             if(x/10000000==1)printf("滁");
                                             else if(x/10000000==2)printf("禠");
                                             else if(x/10000000==3)printf("把");
                                             else if(x/10000000==4)printf("竩");
                                             else if(x/10000000==5)printf("ヮ");
                                             else if(x/10000000==6)printf("嘲");
                                             else if(x/10000000==7)printf("琺");
                                             else if(x/10000000==8)printf("");
                                             else if(x/10000000==9)printf("╤");
                                        }
                                        else if(x>1000000)
                                        {
                                             if(x/1000000==1)printf("滁ㄕ");
                                             else if(x/1000000==2)printf("禠ㄕ");
                                             else if(x/1000000==3)printf("把ㄕ");
                                             else if(x/1000000==4)printf("竩ㄕ");
                                             else if(x/1000000==5)printf("ヮㄕ");
                                             else if(x/1000000==6)printf("嘲ㄕ");
                                             else if(x/1000000==7)printf("琺ㄕ");
                                             else if(x/1000000==8)printf("ㄕ");
                                             else if(x/1000000==9)printf("╤ㄕ");
                                        }
                                        else if(x>=100000)
                                        {
                                             if(x/100000==1)printf("滁珺");
                                             else if(x/100000==2)printf("禠珺");
                                             else if(x/100000==3)printf("把珺");
                                             else if(x/100000==4)printf("竩珺");
                                             else if(x/100000==5)printf("ヮ珺");
                                             else if(x/100000==6)printf("嘲珺");
                                             else if(x/100000==7)printf("琺珺");
                                             else if(x/100000==8)printf("珺");
                                             else if(x/100000==9)printf("╤珺");
                                        }
                                        else if(x>=10000)
                                        {
                                             if(x/10000==1)printf("滁窾");
                                             else if(x/10000==2)printf("禠窾");
                                             else if(x/10000==3)printf("把窾");
                                             else if(x/10000==4)printf("竩窾");
                                             else if(x/10000==5)printf("ヮ窾");
                                             else if(x/10000==6)printf("嘲窾");
                                             else if(x/10000==7)printf("琺窾");
                                             else if(x/10000==8)printf("窾");
                                             else if(x/10000==9)printf("╤窾");
                                        }
                                        x=x/10; 
                              }
    }
system("pause");
return 0;
}
