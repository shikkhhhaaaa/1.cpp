#include <stdio.h>
#include<math.h>
int main()
{
    int n,k;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("enter the power:");
    scanf("%d",&k);

    count=count+pow(n,k);

    printf("Number of digits: %d", count);
}
