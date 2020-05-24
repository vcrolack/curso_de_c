#include <stdio.h>
#include <math.h>

int area_circulo(int r)
{
    int area = pow(r,2) * 3.14;
    return area;
}

int main()
{
    int var = 3;
    int var2 = 4;
    int res = var * var2;
    int radio = 2;
    printf("El resultado de la multipicacion es %d\n", res);
    printf("El area del circulo es %d\n", area_circulo(radio));
    return 0;
}