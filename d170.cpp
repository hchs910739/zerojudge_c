#include<iostream>
using namespace std;
main(){
       double x1,y1,x2,y2,x3,y3,a;
       int ans[10000];
       while(cin>>a)
       {
                    for(int i=1;i<=a;i++)
                    {
                            cin>>x1>>y1>>x2>>y2>>x3>>y3;
                            if((y2-y1)/(x2-x1)==(y3-y2)/(x3-x2)&&((x2>x3&&x3>x1)||(x2<x3&&x1>x3)))
                            {
                                                                ans[i]=1;
                            }
                            else
                            {
                                ans[i]=0;
                            }
                    }
                    for(int i=1;i<=a;i++)
                    {
                            if(ans[i]==1)
                            {
                                         cout<<"�Ӧ����F��!�����Q���ڦ��I"<<endl;
                            }
                            else
                            {
                                cout<<"���ˤj�H!���ˤj�H!�ڧ֨�F�I"<<endl;
                            }
                    }
       }
system("pause");
return 0;
}
