#include <stdio.h>

int main() {
// Declare Variables 
signed int iret=0;
int ienter=0;
int num_of_integer ;
float sum=0;
float avg = 0;
int large_value,small_value;

printf("Please enter the integers.\nPlease use Ctrl+Z when you are done\n");
iret=scanf("%d\n",&ienter); // get first integer

num_of_integer=0;
large_value = 0;
small_value= 999999; 

while(iret==1){

if (ienter > large_value)
large_value = ienter;
  
if(ienter < small_value)
small_value=ienter;

num_of_integer++;
sum = sum+ienter;
iret=scanf("%d",&ienter) ;
}
avg=sum/num_of_integer;
printf("\nnumber of integer entered : %d \n",num_of_integer);
printf("Sum of integer : %.2f \n", sum);
printf("average of integer %0.2f \n",avg);
printf("Largest integer value %d \n",large_value);
printf("smallest integer value %d\n ",small_value);
return 0;
}

