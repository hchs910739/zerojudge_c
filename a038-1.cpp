#include<iostream>
using namespace std;
int main(){
    char a[1000];
    int i;
    for(i=0;;i++)
    {
            cin>>a[i];
            if(a[i]==EOF)
            {
                          break;
            }
    }
    for(int j=i;j>=0;j--)
    {
            cout<<a[j];
    }
system("pause");
return 0;
}
