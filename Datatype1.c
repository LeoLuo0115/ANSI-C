#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

int aa = 1;
int a;
// don't forget to have '&' before variable you are storing the value in
scanf("%d", &a);
printf("the number is %d\n", a);
int sum1;
sum1 = a + aa;
printf("the sum fo int is %d\n",sum1);

// delcare dobule 
double var;
scanf("%lf", &var);
printf("the double is %.2f\n", var);

// declaring string, 
char str[50];       
// scanf 除了string %s 不需要 ”&“， 剩下都需要
scanf("%s",str); 
printf("the string is %s\n",str);

char T;
scanf("%c",&T);
printf("The T is %c\n",T);

return 0;
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "This is ", str2[] = "programiz.com";
    //concatenates str1 and str2 and resultant string is stored in str1.
    strcat(str1,str2);
    puts(str1);    
    puts(str2); 
    return 0;
}
*/