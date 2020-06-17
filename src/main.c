#include <stdio.h>
#include "calculator.h"
// #include <clocale>
// #include <cstdlib>
// using namespace std;




int main(int argc, char *argv[])
{
    // setlocale(LC_ALL,"russian");
    char ss;

    do{
        printf("Введите арифметическое действие: число,знак(/,+,-,*),число\n");
        float x,y,r;
        char o;

        scanf("%f", &x);
        scanf("%s", &o);
        scanf("%f", &y);

        switch(o){
            case '+':
            sum(x, y);
            break;

            case '-':
            sub(x, y);
            break;

            case '*':
            mul(x, y);
            break;

            case '/':
            del(x, y);
            break;
        }
        printf("%f %c %f = %f\n",x, o, y, r);

        printf("Продолжить?(y/n)");

        scanf("%s", &ss);

    }   while(ss == 'y');


    return 0;
}
