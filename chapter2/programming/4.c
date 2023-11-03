#include <stdio.h>

int main(void) {
  float amount;
  printf("Enter an amount: \n");
  scanf("%f", &amount);
  printf("With tax added: %f", amount + amount * 0.05);
}