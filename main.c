#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*Declaracao e instanciação das variaveis para exibição da mensagem ao usuario
indicando o nome completo do autor, o curso, a universidade e o numero da
matricula */
/*Para execução desta atividade foram utilizado o google para pesquisa e algumas video aulas do youtube */

char autor[30] = "Marcelo Moreira Schunck";
char curso[30] = "Ciência de Dados";
char universidade[24] = "UniLaSalle";
int mat = 202212541;
int opcao = 1;

/*exibição na tela dos valores das variáveis declaradas anteriormente */

int main(void) {
  printf("O nome do autor é  = %s\n", autor);
  printf("O nome do Curso é  = %s\n", curso);
  printf("A Universidade é   = %s\n", universidade);
  printf("A Minha matricula é   = %i\n", mat);

  /*Inicio do menu para seleção */

  printf("\n\n **********SELECIONE UMA OPÇÃO********** ");

  printf("\n 1 - SOMA ");
  printf("\n 2 - MULTIPLICAÇÃO ");
  printf("\n 3 - DIVISÃO ");
  printf("\n 4 - POTENCIAÇÃO ");
  printf("\n 5 - SUBTRAÇÃO ");
  printf("\n 6 - RAIZ QUADRADA ");
  printf("\n 7 - Fechar Programa ");
  printf("\n\n Escolha uma opcao: ");

  /*o scanf captura a entrada selecionada pelo usuario e armazena na variavel
  opcao declarada globalmente no inicio do codigo*/
  scanf("%d", &opcao);

  /*Aqui inicia-se a construção do switch e conforme o valor atribuido a
  variavel opcao uma etapa do case será executada.*/
  switch (opcao) {

    /*Quando for selecionado o valor 1 é executada uma soma utilizando o operador + .*/
  case 1:
    printf("Selecionada SOMA \n");
    float soma_a, soma_b;
    printf("Informe o primeiro valor: ");
    scanf("%f", &soma_a);
    printf("Informe o segundo valor: ");
    scanf("%f", &soma_b);
    float soma;
    soma = (soma_a + soma_b);
    printf("A Soma dos valores é -> %f + %f é %f\n", soma_a, soma_b, soma);
    break;
/*Quando for selecionado o valor 2 é executada uma multiplicação utilizando o operador * .*/
  case 2:
    printf("Selecionada MULTIPLICAÇÃO \n");
    float mult_a, mult_b;
    printf("Informe o primeiro valor: ");
    scanf("%f", &mult_a);
    printf("Informe o segundo valor: ");
    scanf("%f", &mult_b);
    float mult;
    mult = (mult_a * mult_b);
    printf("A Multiplicação dos valores é -> %lf x %lf é %f\n", mult_a, mult_b,
           mult);
    break;
/*Quando for selecionado o valor 3 é executada uma divisão utilizando o operador / .*/
  case 3:
    printf("Selecionada DIVISÃO \n");
    float div_a, div_b;
    printf("Informe o primeiro valor: ");
    scanf("%f", &div_a);
    printf("Informe o segundo valor: ");
    scanf("%f", &div_b);
    float div;
    div = (div_a / div_b);
    printf("A Multiplicação dos valores é -> %lf / %lf é %f\n", div_a, div_b,
           div);
    break;
/*Quando for selecionado o valor 4 é executada uma potenciação utilizando a função pow() da 
Biblioteca math.h*/
  case 4:
    printf("Selecionada POTENCIAÇÃO \n");
    float pot_a, pot_b;
    printf("Informe a base de potenciação: ");
    scanf("%f", &pot_a);
    printf("Informe o expoente : ");
    scanf("%f", &pot_b);
    float pot;
    pot = pow(pot_a, pot_b);
    printf("A potenciação de -> %f elevado ao expoente %f é %f\n", pot_a,
           pot_b, pot);
    break;
/*Quando for selecionado o valor 5 é executada uma subtração utilizando o operador - .*/

  case 5:
    printf("Selecionada SUBTRAÇÃO \n");
    float sub_a, sub_b;
    printf("Informe o primeiro valor: ");
    scanf("%f", &sub_a);
    printf("Informe o segundo valor: ");
    scanf("%f", &sub_b);
    float sub;
    sub = (sub_a - sub_b);
    printf("A Multiplicação dos valores é -> %lf - %lf é %f\n", sub_a, sub_b,
           sub);
    break;
/*Quando for selecionado o valor 6 é executada uma raiz quadrada utilizando a função sqrt() da 
Biblioteca math.h*/
  case 6:
    printf("Selecionada RAIZ QUADRADA \n");
    float raiz, result;
    printf("Informe o valor: ");
    scanf("%f", &raiz);
    result = sqrt(raiz);
    printf("A Raiz quadrada é -> %f\n ", result);
    break;
/*Quando for selecionado o valor 7 o programa é encerrado. */
  case 7:
    printf("PROGRAMA ENCERRADO \n");
    break;
/*Quando for selecionadouma opção invalida é executada o default:. */
  default:
    printf("OPÇÃO INVÁLIDA!!!");
  }
  return 0;
}
