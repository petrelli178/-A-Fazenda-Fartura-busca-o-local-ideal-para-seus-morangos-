#include <stdio.h>
#include <locale.h>
#include <stdlib.h>



int main() { 
	setlocale(LC_ALL, "Portuguese");
	
	
	//declaração de váriaveis
	int C1,L1,C2,L2;
	int MqFz1, MqFz2;
	
	
	
	//entrada de Dados: Comprimento e Largura da Fazenda1 e Fazenda2
	do {
    printf("Digite o comprimento da Fazenda 1: ");
    scanf("%d", &C1);
  	} while (C1 < 1 || C1 > 100);

  	do {
    printf("Digite a largura da Fazenda 1: ");
    scanf("%d", &L1);
  	} while (L1 < 1 || L1 > 100);

  	do {
    printf("Digite o comprimento da Fazenda 2: ");
    scanf("%d", &C2);
  	} while (C2 < 1 || C2 > 100);

  	do {
    printf("Digite a largura da Fazenda 2: ");
    scanf("%d", &L2);
  	} while (L2 < 1 || L2 > 100);

	
	printf("------------------------------------------- \n \n");
	
	//Processamento de Dados 
	MqFz1 = L1*C1;
	MqFz2 = L2*C2;
	
	if (MqFz1 > MqFz2) {
		printf("A primeira fazenda é a maior em metros quadrados e a melhor opção para se efeturar a construção\n \n \n");
	} else { 
		printf("A segunda fazenda é a maior em metros quadrados e a melhor opção para se efeturar a construção \n \n");
	}
	
	
	//Saída de dados
	printf("Metro Quadrado Fazenda 1 =  %d \n", MqFz1);
	printf("Metro Quadrado Fazenda 2 =  %d \n", MqFz2);
	

	system("pause");
return 0;
}
