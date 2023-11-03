#include <stdio.h>

int main(void) {
  float loan, rate, payment;
  printf("Enter amount of loan: \n");
  scanf("%f", &loan);
  printf("Enter interest rate: \n");
  scanf("%f", &rate);
  printf("Enter monthly payment: \n");
  scanf("%f", &payment);

  float a = loan + loan * rate / 100 - payment;
  float b = a + a * rate / 100 - payment;
  float c = b + b * rate / 100 - payment;
  printf("Balance remaining after first payment: %f \n", a);
  printf("Balance remaining after second payment: %f \n", b);
  printf("Balance remaining after third payment: %f \n", c);
}