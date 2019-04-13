#include<stdio.h>
int main()
{
 
  int pal ;
  int number1 , number2 , number3 , number4 , number5;
  printf("Enter yout number :");
  scanf("%d" , &pal );

  number1 = pal / 10000;
  number2 = pal / 1000 % 10;
  number3 = pal / 100 % 10;
  number4 = pal / 10 %10;
  number5 = pal / 1 % 10;

   printf("%d\n" , number1);
   printf("%d\n" , number2);
   printf("%d\n" , number3);
   printf("%d\n" , number4);
   printf("%d\n" , number5);

  if (number1 == number5 && number2 == number4)
	  printf("Palindrome");
  else
	  printf("not palindrome");
  
 

return 0;










}
