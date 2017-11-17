#include <stdio.h>
#include <math.h>

void solve()
{
    float a, b, c, delta, x_re, x_im;
    scanf("%f%f%f", &a, &b, &c);

    delta = b * b - 4 * a * c;

    x_re = -b / (2 * a);

    if (delta >= 0)
    {
        x_im = sqrt(delta) / (2 * a);
        printf("%g\n", x_re + x_im);
        printf("%g\n", x_re - x_im);
    }
    else
    {
        x_im = sqrt(-delta) / (2 * a);
        printf("%g+j%g\n", x_re, x_im);
        printf("%g-j%g\n", x_re, x_im);
    }
}

int main()
{
    for (int i = 0; i < 2; ++i)
    {
        solve();
    }
    return 0;
}
