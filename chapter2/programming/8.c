#include <stdio.h>

int main(void) {
  float loan, rate, payment;
  printf("Enter amount of loan: \n");
  scanf("%f", &loan);
  printf("Enter interest rate: \n");
  scanf("%f", &rate);
  printf("Enter monthly payment: \n");
  scanf("%f", &payment);

  float a = loan + loan * rate / 100 / 12 - payment;
  float loanBalance = a;
  float b = loanBalance + loanBalance * rate / 100 / 12 - payment;
  loanBalance = b;
  float c = loanBalance + loanBalance * rate / 100 / 12 - payment;
  printf("Balance remaining after first payment: %.2f \n", a);
  printf("Balance remaining after second payment: %.2f \n", b);
  printf("Balance remaining after third payment: %.2f \n", c);
}