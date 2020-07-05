#include <stdio.h>
int main() {    

    int num1, num2, sum;
    
    printf("Entre dos numeros enteros: ");
    scanf("%d %d", &num1, &num2);

    // calculando la suma
    sum = num1 + num2;      
    
    printf("%d + %d = %d", num1, num2, sum);
    return 0;
}
