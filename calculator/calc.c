#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    
    double x, y,res;
    char operand[4];

    printf("Welcome to deez nuts\n");

    while(1){
        printf("Please type an operator(+, -, /, *, tan, cos, or sin) or type ! to end the program\n");
        scanf("%s", operand);
        if(!strcmp(operand, "!")){
            break;
        }
        else if(!strcmp(operand, "+")){
            printf("Please type in operand 1\n");
            scanf("%lf", &x);
            printf("Please type in operand 2\n");
            scanf("%lf", &y);
            res = x + y;
            printf("%lf + %lf = %lf\n",x,y, res);
        }
        else if(!strcmp(operand, "-")){
            printf("Please type in operand 1\n");
            scanf("%lf", &x);
            printf("Please type in operand 2\n");
            scanf("%lf", &y);
            res = x - y;
            printf("%lf - %lf = %lf\n",x,y, res);
        }
        else if(!strcmp(operand, "/")){
            printf("Please type in operand 1\n");
            scanf("%lf", &x);
            printf("Please type in operand 2\n");
            scanf("%lf", &y);
            res = x / y;
            printf("%lf / %lf = %lf\n",x,y, res);
        }
        else if(!strcmp(operand, "*")){
            printf("Please type in operand 1\n");
            scanf("%lf", &x);
            printf("Please type in operand 2\n");
            scanf("%lf", &y);
            res = x * y;
            printf("%lf * %lf = %lf\n",x,y, res);
        }
        else if(!strcmp(operand, "tan")){
            printf("Please type in an operand\n");
            scanf("%lf", &x);
            res = tan(x);
            printf("tan(%lf) = %f\n",x, res);
        }
        else if(!strcmp(operand, "cos")){
            printf("Please type in an operand\n");
            scanf("%lf", &x);
            res = cos(x);
            printf("cos(%lf) = %f\n",x, res);
        }
        else if(!strcmp(operand, "sin")){
            printf("Please type in an operand\n");
            scanf("%lf", &x);
            res = sin(x);
            printf("sin(%lf) = %f\n",x, res);
        }
    }
    return 0;
}
