#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int first_value, second_value, addition, subtraction, multiplication;
    double division;

    printf("Digite o valor do primeiro n�mero \n");
    scanf("%d", &first_value);
    printf("Digite o valor do segundo n�mero \n");
    scanf("%d", &second_value);

    addition = first_value + second_value;
    subtraction = first_value - second_value;
    multiplication = first_value * second_value;
    division = first_value / second_value;

    printf(" `Adi��o: %d \n `Subtra��o: %d \n `Multiplica��o: %d \n `Divis�o: %f \n", addition, subtraction, multiplication, division);

    system("pause");
    return 0;
}
