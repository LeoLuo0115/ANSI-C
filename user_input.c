#include <stdio.h>
// cretate a function that plus a,b
int SolveEquation(int a, int b)

{
return a+b;
}

int main ()
{

int num1, num2;
scanf("%d %d", &num1, &num2);
int sum;
sum = SolveEquation(num1,num2);
//sum = num1 + num2; it also works without function
printf("The sum of your two number is %d\n",sum);
return 0;

}