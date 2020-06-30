#include <stdio.h>
double round (double x)
{
    int y;
    y=(int)x;
    if(x - y >= 0.5) {
	return (double)y + 1;
    } else {
	return (double)y;
    }
}
#define PI 3.14159
int main() 
{
    double r;
    double a;
    double b;
    scanf("%lf", &r);;
    a = 2 * PI * r * 1000;
    printf("%.3lf\n", round(a) / 1000);
    b = PI * r * r;
    printf("%.3lf", b);
    return 0;
}
