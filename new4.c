#include <stdio.h>
#include<math.h>
int main()
{
    int n,i,d,flag=0;
	printf("enter the interval of the number");
	scanf("%d %d",&n,&d);
	for(i=n;i<d;i++)
	{
		
	if(i%2==0||i==n)
	{
		flag=0;
	}
	else
	{
		flag=1;
		printf("%d\n",i);
	}
	
}
}
