#include<stdio.h>
#include<stdlib.h>
int main(){
    int a=1,num;
    for(int i=2;;i++)
    {
            num=i;
            while(num%2==0||num%3==0||num%5==0)
            {
                                      if(num%2==0)num=num/2;
                                      if(num%3==0)num=num/3;
                                      if(num%5==0)num=num/5;
                                      if(num==1)
                                      {
                                                 a++;
                                                 printf("%d %d\n",a,i);
                                                 break;
                                      }
            }
            if(a==1500)break;
    }
system("pause");
return 0;
}
