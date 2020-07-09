#include <stdio.h>
int main()
{
    double x, y, averge;
    printf("Please input float x and y: ");
    scanf("%lf %lf", &x, &y);
    averge = (x+y)/2;
    printf("x and y: %.2f\n", averge);

    getchar();
    return 0;
}
