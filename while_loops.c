#include <stdio.h>
int main()
{
    int i = 1;
    
    while (i <= 5)
    {
        printf("%d\n", i);
        ++i;
    }

    double number, sum = 0;
    // the body of the loop is executed at least once
    do
    {
        printf("Enter a number: ");
        scanf("%lf", &number);
        sum += number; //  a+=b means a = a+b
    }
    while(number != 0.0); // != means not equals, ! is NOT gate
    printf("Sum = %.2lf\n",sum);
    return 0;
}