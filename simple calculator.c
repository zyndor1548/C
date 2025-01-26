#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Simple two digit calculwtor");
    int *a, *b, *cas;
    a = (int *)malloc(sizeof(int));
    if (a == NULL)
        printf("memory allocation error a pointer");
    b = (int *)malloc(sizeof(int));
    if (b == NULL)
        printf("memory allocation error b pointer");
    cas = (int *)malloc(sizeof(int));
    if (cas == NULL)
        printf("memory allocation error case pointer");
    printf("\t\nEnter first number : ");
    scanf("%d", a);
    printf("\t\nEnter second number : ");
    scanf("%d", b);
    do
    {
        printf("\t\nChoose which opration you want to perform\n\t\t1 : +\n\t\t2 : -\n\t\t3 : *\n\t\t4 : \\\nEnter the number corsponding to the operation to perform : ");
        scanf("%d", cas);
    } while (*cas < 1 || *cas > 4);
    switch (*cas)
    {
    case 1:
        printf("Your answer for %d + %d = %d", *a, *b, (*a + *b));
        break;
    case 2:
        printf("Your answer for %d - %d = %d", *a, *b, (*a - *b));
        break;
    case 3:
        printf("Your answer for %d * %d = %d", *a, *b, (*a * *b));
        break;
    case 4:
        printf("Your answer for %d / %d = %.2f", *a, *b, ((float)*a / (float)*b));
        break;
    }
    free(a);
    free(b);
    free(cas);
    return 0;
}