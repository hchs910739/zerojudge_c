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
                                                        if(x/1000000000==1)printf("�B");
                                                        else if(x/1000000000==2)printf("�L�B");
                                        }
                                        else if(x>=100000000)
                                        {
                                             if(x/100000000==1)printf("����");
                                             else if(x/100000000==2)printf("�L��");
                                             else if(x/100000000==3)printf("�ѻ�");
                                             else if(x/100000000==4)printf("�v��");
                                             else if(x/100000000==5)printf("���");
                                             else if(x/100000000==6)printf("����");
                                             else if(x/100000000==7)printf("�m��");
                                             else if(x/100000000==8)printf("�û�");
                                             else if(x/100000000==9)printf("�h��");
                                        }
                                        else if(x>=10000000)
                                        {
                                             if(x/10000000==1)printf("���a");
                                             else if(x/10000000==2)printf("�L�a");
                                             else if(x/10000000==3)printf("�ѥa");
                                             else if(x/10000000==4)printf("�v�a");
                                             else if(x/10000000==5)printf("��a");
                                             else if(x/10000000==6)printf("���a");
                                             else if(x/10000000==7)printf("�m�a");
                                             else if(x/10000000==8)printf("�åa");
                                             else if(x/10000000==9)printf("�h�a");
                                        }
                                        else if(x>1000000)
                                        {
                                             if(x/1000000==1)printf("����");
                                             else if(x/1000000==2)printf("�L��");
                                             else if(x/1000000==3)printf("�Ѩ�");
                                             else if(x/1000000==4)printf("�v��");
                                             else if(x/1000000==5)printf("���");
                                             else if(x/1000000==6)printf("����");
                                             else if(x/1000000==7)printf("�m��");
                                             else if(x/1000000==8)printf("�è�");
                                             else if(x/1000000==9)printf("�h��");
                                        }
                                        else if(x>=100000)
                                        {
                                             if(x/100000==1)printf("���B");
                                             else if(x/100000==2)printf("�L�B");
                                             else if(x/100000==3)printf("�ѬB");
                                             else if(x/100000==4)printf("�v�B");
                                             else if(x/100000==5)printf("��B");
                                             else if(x/100000==6)printf("���B");
                                             else if(x/100000==7)printf("�m�B");
                                             else if(x/100000==8)printf("�ìB");
                                             else if(x/100000==9)printf("�h�B");
                                        }
                                        else if(x>=10000)
                                        {
                                             if(x/10000==1)printf("���U");
                                             else if(x/10000==2)printf("�L�U");
                                             else if(x/10000==3)printf("�ѸU");
                                             else if(x/10000==4)printf("�v�U");
                                             else if(x/10000==5)printf("��U");
                                             else if(x/10000==6)printf("���U");
                                             else if(x/10000==7)printf("�m�U");
                                             else if(x/10000==8)printf("�øU");
                                             else if(x/10000==9)printf("�h�U");
                                        }
                                        x=x/10; 
                              }
    }
system("pause");
return 0;
}
