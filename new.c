#include <stdio.h>
#include <math.h>
int main()
{
    // // swap
    // int a, b, c;
    // printf("Enter a and b numbers to swap :");
    // scanf("%d %d", &a, &b);
    // // printf("swaped\na = %d\nb = %d",b,a);
    // c = a;
    // a = b;
    // b = c;
    // printf("a is now %d and your b is now %d", a, b);

    // //// asci
    // char c;
    // printf("Enter the character to change to ascii : ");
    // scanf("%c", &c);
    // printf("your ascii value is %d", c);

    // ////temperature
    // float f1;
    // printf("Enter temperature in faranheit : ");
    // scanf("%f", &f1);
    // printf("%.2f faranheit to celcius is %.2f", f1, ((f1 - 32.0) * (5.0 / 9.0)));
    // // data type size
    // // printf("size of \nint %d\nfloat %d\nchar %d\ndouble %d",sizeof(int),sizeof(float),sizeof(char),sizeof(double));
    // ////area and perimeter
    // int a, b;
    // printf("Enter length and breadth of the rectangle : ");
    // scanf("%d %d", &a, &b);
    // printf("Area = %d\nperimeter = %d", 2 * (a + b), a * b);

    // ////prime
    // int a;
    // printf("Enter a number: ");
    // scanf("%d", &a);
    // for (int i = 2; i <= a / 2; i++)
    // {
    //     if (a % i == 0)
    //     {
    //         printf("number is not prime");
    //         return 0;
    //     }
    // }
    // printf("number is prime");

    // //// n prime
    // int n, p;
    // printf("Enter n : ");
    // scanf("%d", &n);
    // for (int i = 2; i <= n; i++)
    // {
    //     p = 1;
    //     for (int j = 2; j <= i / 2; j++)
    //     {
    //         if (i % j == 0)
    //         {
    //             p = 0;
    //             break;
    //         }
    //     }
    //     if (p == 1)
    //     {
    //         printf("%d ", i);
    //     }
    // }

    // ////simple interest
    // int a, r, t;
    // printf("Enter amount : ");
    // scanf("%d", &a);
    // printf("Enter rate : ");
    // scanf("%d", &r);
    // printf("Enter time in months : ");
    // scanf("%d", &t);
    // printf("simple interest %d", (a * r * t) / 100);

    // ////compound interest
    // int p, r, n, t;
    // printf("Enter principal : ");
    // scanf("%d", &p);
    // printf("Enter rate : ");
    // scanf("%d", &r);
    // printf("Enter number of times compunded : ");
    // scanf("%d", &n);
    // printf("Enter time in years : ");
    // scanf("%d", &t);
    // printf("amount = %f", (float)p * pow(1 + ((float)r / (n * 100)), n * t));

    // //   *
    // //  **
    // // ***
    // //****
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 5; j > i; j--)
    //     {
    //         printf(" ");
    //     }
    //     for (int k = 0; k < i; k++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    //    *
    //   * *
    //  * * *
    // * * * *
    // int n = 5;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = n; j > i; j--)
    //     {
    //         printf(" ");
    //     }
    //     for (int k = 0; k < i; k++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
    // *****
    //  ****
    //   ***
    //    **
    //     *
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int k = 5; k > i; k--)
        {
            printf("*");
        }
        printf("\n");
    }
    //  * * * * *
    //   * * * *
    //    * * *
    //     * *
    //      *
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int k = 5; k > i; k--)
    //     {
    //         printf(" *");
    //     }
    //     printf("\n");
    // }
    return 0;
}