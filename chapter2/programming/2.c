#include <stdio.h>

int main(void) {
  float r;
  scanf("R=%f", &r);
  float v = 4.0f/3.0f * r * r * r * 3.14f;
  printf("V=%f", v);
}