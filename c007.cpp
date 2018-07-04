#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[1000];
    int x=1,y=1,c;
    while(cin.getline(a,1000))
    {
                              c=strlen(a);
                              for(int i=0;i<c;i++)
                              {
                                      if(a[i]!='"')
                                      {
                                                   cout<<a[i];
                                      }
                                      if(a[i]=='"'&&x==1)
                                      {
                                                        cout<<"``";
                                                        x=2;
                                      }
                                      else if(a[i]=='"'&&x==2)
                                      {
                                           cout<<"''";
                                           x=1;
                                      }
                              }
                              cout<<endl;
    }
system("pause");
return 0;
}
