#include<stdio.h>
 int main()
 {
   double amount, finalamount;
   int discount;
   printf("Enter the total Amount: ");
   scanf("%lf",&amount);
   if(amount>=1000)
   {
     discount = (amount * 10)/100;
   }
   else
   {
     discount = (amount * 5)/100;
   }
   finalamount = amount - discount;
   printf("Total payable amount = %.2f", finalamount);
   return 0;
 }