#include <stdio.h>
int main(void){

//ETAPA 5 - EXERCÍCIO 13 --- Calculadora simples: Receba dois números e um operador (+, -, *, /) e execute a operação.

    float num1;
    float num2;
    char operador;

    printf("\nInsira o primeiro valor da conta: ");
    scanf("%f", &num1);

    printf("\nInsira o operador da conta (+ , - , * , /): ");
    scanf(" %c", &operador);

    printf("\nInsira o segundo valor da conta: ");
    scanf("%f", &num2);

    if (operador == '+'){
        printf("\n%f + %f = %f\n\n", num1, num2, num1 + num2);
    }

    else if (operador == '-'){
        printf("\n%f + %f = %f\n\n", num1, num2, num1 - num2);
    }

    else if (operador == '*'){
        printf("\n%f + %f = %f\n\n", num1, num2, num1 * num2);
    }

    else if (operador == '/'){
        printf("\n%f + %f = %f\n\n", num1, num2, num1 / num2);
    }

    else{
        printf("O operador eh incondizente!");
    }

//# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
//ETAPA 5 - EXERCÍCIO 14 --- Conversor de temperaturas (C -> F) celsius para fahrenheit: escolha do tipo de conversão com if

float graus;
char tipo;
float fracao_1 = 5.0/9.0;
float fracao_2 = 9.0/5.0;
float result;

printf("Insira a temperatura: ");
scanf("%f", &graus);

printf("Deseja transformar estes graus em celsius ou fahrenheit (c ou f): ");
scanf(" %c", &tipo);

if (tipo == 'c'){
    result = (graus - 32) * fracao_1;
    printf("\n%f Celsius\n\n", result);
}

else if(tipo == 'f'){
    result = (graus * fracao_2) + 32;
    printf("\n%f Fahrenheit\n\n", result);
}
else{
    printf("O tipo de graus inserido não");
}

}

