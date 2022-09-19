#include <stdio.h>

int main(void) {
  char nome[50];
	int idade;
	float peso;
	char genero;
	
	printf("Bem vindo(a)! Preencha seus dados abaixo: \n \n");
	
	printf("Digite seu nome: \n");
	scanf("%[^\n]s",nome);
	printf("\n");
	
	printf("Digite sua idade: \n");
	scanf("%d", &idade);
	printf("\n");
	
	printf("Digite seu peso: \n");
	scanf("%f", &peso);
	printf("\n");
	
	fflush(stdin);
	printf("Digite seu genero (M ou F): \n");
	scanf("%s", &genero);
	printf("\n");
	
	printf("CADASTRO REALIZADO COM SUCESSO! \n");
	printf("\n");
	
	printf("Oi %s! Voce tem %d anos e pesa %.1f \n", nome, idade, peso);
  
  printf("Nome: %s \n", nome);
	printf("Idade: %d \n", idade);
	printf("Peso: %.1f \n", peso);
	printf("Genero: %c \n", genero);
	
	if(idade >= 18){
		printf("MAIOR. \n");
} 	else {
		printf("MENOR. \n");
}
	if ((idade >= 18) && (peso >= 50)){
		printf("PODE DOAR SANGUE \n");
	} else {
		printf(" NÃO PODE DOAR SANGUE");
	}
}