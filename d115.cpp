#include<stdio.h>
#include<stdlib.h>

int n,m,a[100],b[100],temp;

void lineup()
{
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if(a[j] <= a[i])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

void rec(int now,int step)
{
	if(now==m+1)
    {
        for(int i=1; i<=m; i++)
        {
        	printf("%d ",b[i]);
		}
        printf("\n");
    }
    else
    {
        for(int i=step+1; i<=n; i++)
        {
            b[now] = a[i];
            rec(now+1, i);
        }
    }
}

int main(void){
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0)break;
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
		}
		scanf("%d",&m);
		lineup();
		//for(int i=1;i<=n;i++)printf("%d ",a[i]);
		
		rec(1,0);	
	}
system("pause");
return 0;
}

