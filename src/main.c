#include "calculator.h"
#include <stdio.h>
// #include <clocale>
// #include <cstdlib>
// using namespace std;

int main(int argc, char *argv[]) {
  // setlocale(LC_ALL,"russian");
  char ss;

  do {
    printf("Введите арифметическое действие: число,знак(/,+,-,*),число\n");
    float x, y, r;
    char o;

    scanf("%f", &x);
    scanf("%s", &o);
    scanf("%f", &y);

    switch (o) {
    case '+':
      r = sum(x, y);
      break;

    case '-':
      r = sub(x, y);
      break;

    case '*':
      r = mul(x, y);
      break;

    case '/':
      r = del(x, y);
      break;
    }
    printf("%f %c %f = %f\n", x, o, y, r);
    printf("Продолжить?(y/n)");
    scanf("%s", &ss);

  } while (ss == 'y');

  return 0;
}
