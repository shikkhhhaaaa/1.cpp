#include<stdio.h>
int main()
{
	int year;
	printf("enter the year");
	scanf("%d",&year);
	if(year%400==0)
	printf("yes");
	if(year%4==0)
	printf("yes");
		
	else
	printf("no");
    return 0;
}

