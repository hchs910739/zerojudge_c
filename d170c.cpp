#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b,c,d,x,y,n,i;
    while(scanf("%d",&n)!=EOF)
    {
                for(i=1;i<=n;i++)
                {
                    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&x,&y);
                    if((b-y)*(d-y)==(a-x)*(c-x))printf("�Ӧ����F��!�����Q���ڦ��I\n");
                    else printf("���ˤj�H!���ˤj�H!�ڧ֨�F�I\n");
                }
    }
system("pause");
return 0;
}
