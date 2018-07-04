#include<stdio.h>
#include<stdlib.h>
int main(){
	int x,y,a[100001],n,high,low=1,mid=0;
	bool ans=false;
	while(scanf("%d %d",&x,&y)!=EOF)
	{
		for(int i=1;i<=x;i++)scanf("%d",&a[i]);
		for(int i=1;i<=y;i++)
		{
			scanf("%d",&n);
			high=x;
			low=1;
			while(high>=low)
			{
				mid=(high+low)/2;
				if(a[mid]==n)
				{
					ans=true;
					printf("%d\n",mid);
					break;
				}
				else if(a[mid]>n)
				{
					high=mid-1;
				}
				else if(a[mid]<n)
				{
					low=mid+1;
				}
			}
			if(ans==false)printf("0\n");
			ans=false;
		}
	}
system("pause");
return 0;
}
