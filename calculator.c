#include <stdio.h>
#include <stdlib.h>

float addition(float n1, float n2)
{
    float ans = n1 + n2;
    return ans;
}

float subtraction(float n1, float n2)
{
    float ans = n1 + n2;
    return ans;
}

float Multiplication(float n1, float n2)
{
    float ans = n1 * n2;
    return ans;
}

float Division(float n1, float n2)
{
    float ans = n1 / n2;
    return ans;
}

int main(int argc, char const *argv[])
{
    char op;
    float ans, n1, n2;
    printf("welcome to calculator.\nINDEX\n+  Addition\n-  Subtraction\n*  Multiplication\n/  Division\n");
    printf("ENTER YOUR OPERATOR     ");
    scanf("%c", &op);
    scanf("%f", &n1);
    scanf("%f", &n2);
    
    switch (op)
    {
    case '+':
        ans = addition(n1, n2);
        printf("%f", ans);
        break;

    case '-':
        float ans = subtraction(n1, n2);
        printf("%f", ans);

    case '*':
        float ans = Multiplication(n1, n2);
        printf("%f", ans);

    case '/':
        float ans = Division(n1, n2);
        printf("%f", ans);
    
    default:
        printf("invalid operator");
        break;
    }
    
    

    return 0;
}
