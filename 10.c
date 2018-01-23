#include<stdio.h>
int main()
{
	int n,i,a[10],k,sum=0;
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the no of array");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter the place to be added");
	scanf("%d",&k);
	for(i=0;i<k;++i);
	{
		sum+=a[i];
	}
	
	printf("%d",sum);
	return(0);
	
}

