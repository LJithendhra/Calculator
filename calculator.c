#include <stdio.h>
int main()
{
   int num1 ,num2,result;
   printf("Enter the numbers:  " " ");
   scanf("%d %d",&num1,&num2);
   result = num1 - num2;
   result1 = num1 * num2;
   result2 = num1 / num2;

   printf("Sum of %d and %d is %d\n",num1 ,num2,result);
   printf("Sum of %d and %d is %d\n",num1 ,num2,result1);
   printf("Sum of %d and %d is %d\n",num1 ,num2,result2);
   
   
    return 0;
}