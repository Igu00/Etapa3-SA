//Criar um algoritmo para uma empresa de pesquisa, onde serão lidos os seguintes dados: 
//Nome entrevistado, sexo, idade, canal de tv preferido, canal de tv malquisto. Serão 20 entrevistados
//que devem ter todos os dados armazenados. Ao final imprimir a média de idade das pessoas do 
//canal mais votado como preferido, a média de idade das pessoas do canal mais votado como
//malquisto, o número de pessoas de cada sexo de cada canal de tv. Imprimir também todos os 
//dados lidos em forma de tabela.

#include "BibliotecaViana.c"
#include "struct_c.c"
#include <stdio.h>
#include <string.h>
int canalpref=0, canalmalq=0, C1P=0, C2P=0, C3P=0, C1M=0, C2M=0, C3M=0, IC1P=0, IC2P=0, IC3P=0, IC1M=0, IC2M=0, IC3M=0, idade[5], canais, i;
float idadepref=0.0, idademalq=0.0;

int main(){
	
	TipoEntrevistado entrevistado[5];
	
	for (i=0; i<5; i++){
		fflush(stdin);
		printf("informe o seu nome: ");
		scanf("%s", &entrevistado[i].nome);
		
		fflush(stdin);
		printf("\n\ninforme o seu sexo: ");
		scanf("%s", &entrevistado[i].sexo);
		
		printf("\n\ninforme a sua idade: ");
		scanf("%f", &idade[i]);
		
		fflush(stdin);
		printf("\n\ninforme o seu canal preferido (1, 2 ou 3): ");
		scanf("%i", &canais);
		
		fflush(stdin);
		while(canais!='1' && canais!='2' && canais!='3'){
			printf("\n\ninforme um canal valido: ");
			scanf("%i", &canais);
		}
		
			if (canais=='1'){
				C1P++;
				idade+=IC1P;
			}else
			if (canais=='1'){
				C1P++;
				idade+=IC1P;
			} else{}
			 (canais=='1');
				C1P++;
				idade+=IC1P;
			

		fflush(stdin);
		printf("\n\ninforme o seu canal malquisto (1, 2 ou 3): ");
		scanf("%i", &canais);
		
		fflush(stdin);
		while(canais!='1' && canais!='2' && canais!='3'){
			printf("\n\ninforme um canal valido: ");
			scanf("%i", &canais);
		}
		
			if (canais=='1'){
			C1M++;
			idade+=IC1M;
			}
			if (canais=='2'){
			C2M++;
			idade+=IC2M;
			} 

			if (canais=='3'){
			C3M++;
			idade+=IC3M;
			}

	system("cls");			
}
}

