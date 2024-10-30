#include <stdio.h>

int main(void)
{
    double result = 0;
    for (int i = 0; i < 10; ++i)
    {
        double num;
        scanf("%lf", &num);
        result += num * num;
    }
    printf("%lf\n", result);
    return 0;
}