#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{

    double x, y, res;
    char operand[4];

    printf("\nWelcome!\n");

    while (1)
    {
        printf("Please type in what operation you are looking for, or type manual for a list of operations. Type ! to end the program\n");
        scanf("%s", operand);
        if (!strcmp(operand, "manual") || !strcmp(operand, "man"))
        {
            printf("List of operations:\v\rOperation - Symbol/Phrase\v\r");
        }
        else if (!strcmp(operand, "!"))
        {
            break;
        }
        else if (!strcmp(operand, "+"))
        {
            printf("Please type in operand 1\n");
            scanf("%lf", &x);
            printf("Please type in operand 2\n");
            scanf("%lf", &y);
            res = x + y;
            printf("%lf + %lf = %lf\n", x, y, res);
        }
        else if (!strcmp(operand, "-"))
        {
            printf("Please type in operand 1\n");
            scanf("%lf", &x);
            printf("Please type in operand 2\n");
            scanf("%lf", &y);
            res = x - y;
            printf("%lf - %lf = %lf\n", x, y, res);
        }
        else if (!strcmp(operand, "/"))
        {
            printf("Please type in operand 1\n");
            scanf("%lf", &x);
            printf("Please type in operand 2\n");
            scanf("%lf", &y);
            if (y == 0)
            {
                printf("Error: divide by 0\n");
            }
            else
            {
                res = x / y;
                printf("%lf / %lf = %lf\n", x, y, res);
            }
        }
        else if (!strcmp(operand, "*"))
        {
            printf("Please type in operand 1\n");
            scanf("%lf", &x);
            printf("Please type in operand 2\n");
            scanf("%lf", &y);
            res = x * y;
            printf("%lf * %lf = %lf\n", x, y, res);
        }
        else if (!strcmp(operand, "tan"))
        {
            printf("Please type in an operand\n");
            scanf("%lf", &x);
            res = tan(x);
            printf("tan(%lf) = %f\n", x, res);
        }
        else if (!strcmp(operand, "cos"))
        {
            printf("Please type in an operand\n");
            scanf("%lf", &x);
            res = cos(x);
            printf("cos(%lf) = %f\n", x, res);
        }
        else if (!strcmp(operand, "sin"))
        {
            printf("Please type in an operand\n");
            scanf("%lf", &x);
            res = sin(x);
            printf("sin(%lf) = %f\n", x, res);
        }
        else if (!strcmp(operand, "arccos") || !strcmp(operand, "inverse cos") || !strcmp(operand, "cos^-1"))
        {
            printf("Please type in an operand\n");
            scanf("%lf", &x);
            res = acos(x);
            printf("arccos(%lf) = %f\n", x, res);
        }
        else if (!strcmp(operand, "arcsin") || !strcmp(operand, "inverse sin") || !strcmp(operand, "sin^-1"))
        {
            printf("Please type in an operand\n");
            scanf("%lf", &x);
            res = asin(x);
            printf("arcsin(%lf) = %f\n", x, res);
        }
        else if (!strcmp(operand, "arctan") || !strcmp(operand, "inverse tan") || !strcmp(operand, "tan^-1"))
        {
            printf("Please type in an operand\n");
            scanf("%lf", &x);
            res = atan(x);
            printf("arctan(%lf) = %f\n", x, res);
        }
        else if (!strcmp(operand, "e") || !strcmp(operand, "e^x") || !strcmp(operand, "exponential") || !strcmp(operand, "exp"))
        {
            printf("Please type in an operand\n");
            scanf("%lf", &x);
            res = exp(x);
            printf("exp^%lf = %f\n", x, res);
        }
    }
    return 0;
}
