#include <stdio.h>
// Macro to find maximum of two numbers
#define MAX(a, b) ((a) > (b) ? (a) : (b))
int main()
{
int num1, num2, result;
// Input
printf("Enter two numbers: ");
scanf("%d %d", &num1, &num2);
// Using macro
result = MAX(num1, num2);
// Output
printf("Maximum number is: %d\n", result);
return 0;
}
