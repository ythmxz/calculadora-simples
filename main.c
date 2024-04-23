#include <stdio.h>

int main() {

  int operacao = 0;
  float valor1 = 0.0, valor2 = 0.0;
  float resultado = 0.0;

  printf("Escolha uma operação: \n\n1: Adição \n2: Subtração \n3: Multiplicação \n4: Divisão\n\n");
    scanf("%d", &operacao);

  printf("\n\nAdicione um valor: ");
    scanf("%f", &valor1);

  printf("\n\nAdicione outro valor: ");
    scanf("%f", &valor2);

  ( operacao == 1 ) ? resultado = valor1 + valor2 :
  ( operacao == 2 ) ? resultado = valor1 - valor2 :
  ( operacao == 3 ) ? resultado = valor1 * valor2 :
  ( operacao == 4 ) ? resultado = valor1 / valor2 :
  ( operacao == 4 && valor2 == 0 ) ? printf("Não é possível dividir por 0!") :
  printf("\n\nOperação inválida! Tente novamente.");

  printf("\n\nResultado: %g", resultado);

  return 0;

}
