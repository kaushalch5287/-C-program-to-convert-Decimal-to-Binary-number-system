/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
 long long decimal, tempDecimal, binary;
 int rem, place = 1;
 binary = 0;
 printf("Enter any decimal number: ");
 scanf("%lld", &decimal);
 tempDecimal = decimal;
 while(tempDecimal > 0)
 {
 rem = tempDecimal % 2;
 binary = (rem * place) + binary;
 tempDecimal /= 2;
 place *= 10;
 }
 printf("Decimal number = %lld\n", decimal);
 printf("Binary number = %lld", binary);
 return 0;
}