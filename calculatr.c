#include <stdio.h>

int main() {

  char c;
  float a,b;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &c);
  printf("Enter two operands: ");
  scanf("%f%f", &a, &b);

  switch (c) {
    case '+':
      printf("%f + %f = %f", a,b,a+b);
      break;
    case '-':
      printf("%f - %f = %f", a,b,a-b);
      break;
    case '*':
      printf("%f * %f = %f", a,b,a*b);
      break;
    case '/':
      printf("%f / %f = %f", a,b,a/b);
      break;
	  default:
      printf("Error! operator is not correct");
  }

  return 0;
}

