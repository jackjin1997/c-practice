#include <stdio.h>
// FROM 23.8.11
// loanBalance * rateDaily * daysCount
int main(void) {
  int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 31};
  int startMonth = 8;
  float loan = 8000, rateDaily = 0.03 / 100, payment = 400;
  float currentMonth;

  printf("Current Month: \n");
  scanf("%f", &currentMonth);
  float afterMonth = currentMonth - startMonth;

  float loanBalance = loan;
  float totalNeedPay = 0;
  
  for (int i = 0; i < afterMonth; i++) {
    int month = (i + startMonth) % 12;
    int days = months[month];
    float monthPay = loanBalance * days * rateDaily + payment;
    loanBalance = loanBalance - payment;
    totalNeedPay += monthPay;
    printf("month: %d,\n loanBalance: %.2f,\n monthPay: %.2f,\n totalNeedPay: %.2f \n", month, loanBalance, monthPay, totalNeedPay);
    printf("-------------------------\n");
  }
}