#include <stdio.h>

float calculate(float number_a, float number_b, char operator) {
//In this new one function, it is being used the command switch for every single operator that might appear:
//sum, subtraction, division and multiplication.
    switch (operator) {
        case '+': return number_a + number_b;
        case '-': return number_a - number_b;
        case '*': return number_a * number_b;
        //As division by zero is not suitable, it was chosen the usage...
        //Of the ternary operator '?' -> if number_b is different of zero,...
        //The operator can be used and it is valid, else, it returns 0;
        case '/': return (number_b != 0) ? number_a / number_b : 0;
//Now, there is the case where is none of the options above (default):
        default:
            printf("Invalid operator!\n");
            return 0;
    }
}
int main() {
    float number_a, number_b, result;
    char operator;

    printf("Enter the first number:\n");
    scanf("%f", &number_a);

    printf("Enter the operator (+, -, *, /):\n");
    scanf(" %c", &operator);

    printf("Enter the second number:\n");
    scanf("%f", &number_b);

    result = calculate(number_a, number_b, operator);
    printf("Result of %.2f %c %.2f = %.2f\n", number_a, operator, number_b, result);

    return 0;
}