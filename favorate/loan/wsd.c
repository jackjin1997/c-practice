#include <stdio.h>
// FROM 23.9.9
// loanBalance * rateDaily * daysCount
int main(void) {
  int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 31};
  int startMonth = 9;
  float loan = 14000, rateDaily = 0.0375 / 100, payment = 1166.67;
  float currentMonth;

  printf("Current Month: \n");
  scanf("%f", &currentMonth);
  float afterMonth = currentMonth - startMonth;

  float loanBalance = loan;
  float totalNeedPay = 0;
  
  for (int i = 0; i < afterMonth && loanBalance > 0; i++) {
    int month = (i + startMonth) % 12;
    int days = months[month];
    float monthPay = loanBalance * days * rateDaily + payment;
    loanBalance = loanBalance - payment;
    totalNeedPay += monthPay;
    printf("month: %d,\n loanBalance: %.2f,\n monthPay: %.2f,\n totalNeedPay: %.2f \n", month, loanBalance, monthPay, totalNeedPay);
    printf("-------------------------\n");
  }
}