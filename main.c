#include <stdio.h>
#include <math.h>

int calculateSquareEquality (int a, int b, int c, float* x1, float* x2) {
    float disc = (float)b * (float)b - 4 * (float)a * (float)c;

    if (disc >= 0) {
        *x1 = ((-1) * b + sqrt(disc))/2 * a;
        *x2 = ((-1) * b - sqrt(disc))/2 * a;
    }

    return 1;
}

int main() {
    int a, b, c;
    float x1, x2;
    int resultCode;
    printf("Добро пожаловать в мою программу для решения квадратных уравнений.\n\n");
    printf("Квадратное уравнение имеет вид ax2 + bx + c = 0. Определите коэффициенты a,b и с:\n");
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);

    resultCode = calculateSquareEquality(a, b, c, &x1, &x2);

    switch (resultCode) {
        case 1:
            printf("У уравнения 2 корня: х1 = %7.2f и x2 = %7.2f\n", x1, x2);
            break;
        case 0:
            printf("У уравнения 1 корень: х = %7.2f\n", x1);
            break;
        case -1:
            printf("Уравнение не имеет корней\n");
            break;
        default:
            printf("Что-то пошло не так\n");
            break;
    }

    return 0;
}