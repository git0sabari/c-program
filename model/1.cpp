#include <stdio.h>
int main() 
{
  double n1, n2, n3;
  printf("Enter the value of n1 : ");
  scanf("%lf",&n1);
  printf("Enter the value of n2 : ");
  scanf("%lf",&n2);
  printf("Enter the value of n3 : ");
  scanf("%lf",&n3);
  if (n1 >= n2 && n1 >= n3)
    printf("n1 is the largest number.");
  else if (n2 >= n1 && n2 >= n3)
    printf("n2 is the largest number.");
  else 
    printf("n3 is the largest number.");
}
