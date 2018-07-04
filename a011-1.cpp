#include<iostream>
#include<cstring>
using namespace std;
main(){
       char a[10000];
       int b,c=1;
       while(cin.getline(a,10000))
       {
                    b=strlen(a);
                    for(int i=0;i<b;i++)
                    {
                            if(a[i]==' '||a[i]==',')c++;
                    }
                    cout<<c<<endl;
                    c=1;
       } 
system("pause");
return 0;
}
