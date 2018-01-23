#include <stdio.h>
int main()
{
    int n;
    int counter = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while(n != 0)
    {
        
        n /= 10;
        ++counter;
    }

    printf("Number of digits: %d", counter);
}
