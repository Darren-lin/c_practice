#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{

    double x, y, res;
    char operand[4];
    char temp[5];

    printf("\nWelcome!\n");

    while (1)
    {
        printf("For settings -> opt\v\rFor Manual -> man\v\rTerminate -> !\v\rPlease type in what operation your are looking for\n");
        // printf("Please type in what operation you are looking for, or type manual for a list of operations. \v\rType ! to end the program\n");
        scanf("%s", operand);
        if (!strcmp(operand, "manual") || !strcmp(operand, "man"))
        {
            printf("\nList of operations:\v\rOperation -> Symbol/Phrase\v\rAddition -> +\v\rSubtration -> -\v\rMultiplication -> *\v\rDivision -> /\v\r"
                   "Sine/ArcSine -> sin / arcsin\v\rCosine/ArcCosine -> cos / arccos\v\rTangent/ArcTangent -> tan / arctan\v\r"
                   "Exponential -> exp\v\rPower -> pow\v\rSquare Root -> sqrt");
            printf("\n\n");
            printf("Type q to quit\n");
            scanf("%s", temp);
            printf("\n\n");
            if (!strcmp(temp, "q"))
            {
                continue;
            }
        }
        //SETTINGS WORK IN PROGRESS
        else if (!strcmp(operand, "opt"))
        {
            printf("\nSettings:\v\rWORK IN PROGRESS\n");
            printf("Would you like to change a setting?\n");
            printf("\n\n");
            // scanf("%s", temp);
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
        else if (!strcmp(operand, "e") || !strcmp(operand, "e^x") || !strcmp(operand, "exponential") || !strcmp(operand, "exp^x"))
        {
            printf("Please type in an operand\n");
            scanf("%lf", &x);
            res = exp(x);
            printf("exp^%lf = %f\n", x, res);
        }
        else if (!strcmp(operand, "x^") || !strcmp(operand, "power") || !strcmp(operand, "pow"))
        {
            printf("Please type in operand 1\n");
            scanf("%lf", &x);
            printf("Please type in operand 2\n");
            scanf("%lf", &y);
            res = pow(x, y);
            printf("%lf^(%lf) = %f\n", x, y, res);
        }
        else if (!strcmp(operand, "sqrt"))
        {
            printf("Please type in an operand\n");
            scanf("%lf", &x);
            res = sqrt(x);
            printf("√(%lf) = %f\n", x, res);
        }
        printf("\n\n");
    }
    return 0;
}
