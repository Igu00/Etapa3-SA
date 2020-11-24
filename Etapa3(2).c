//Serão armazenados: Dados da aeronave: Prefixo, Capacidade, Autonomia. Dados dos Pilotos:
//registro, Nome, Horas de Voo. Dados dos Clientes: CPF, Nome, Destino. Dados do Voo:
//Número do voo, Prefixo aeronave, Registro do Piloto, Destino, CPF Cliente. Criar uma função pra
//validar o CPF. Criar as funções separadas para armazenamento de dados. 
//Atribuir uma funcionalidade para impressão de relatório de voo.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "BibliotecaViana.c"
#include "struct_c.c"
#include <time.h>

void tabelaBase(){
	int i; 	
	long long CPF;
	TipoAeronave Aviao;
	TipoPiloto Piloto;
	TipoCliente Passageiro;
	
	corFundo(128);
	
	gotoxy(1,1);
	printf("%c", 218);
	for(i=0;i<108;i++) printf("%c", 196);
	gotoxy(1,20);
	printf("%c", 194);
	gotoxy(1,50);
	printf("%c", 194);
	gotoxy(1,80);
	printf("%c", 194);
	gotoxy(1,110);
	printf("%c", 191);			
	gotoxy(2,1);
	printf("%c", 179);
	gotoxy(3,1);
	printf("%c", 195);
	for(i=0;i<108;i++) printf("%c", 196);
	gotoxy(2,20);
	printf("%c", 179);
	gotoxy(2,50);
	printf("%c", 179);
	gotoxy(2,80);
	printf("%c", 179);
	gotoxy(2,110);
	printf("%c", 179);
	gotoxy(3,20);
	printf("%c", 197);
	gotoxy(3,50);
	printf("%c", 197);
	gotoxy(3,80);
	printf("%c", 197);
	gotoxy(3,110);
	printf("%c", 180);
	gotoxy(2, 5);
	printf("Dados Piloto");
	gotoxy(1, 33);
	printf("Nome");
	gotoxy(1, 61);
	printf("Registro");
	gotoxy(1, 90);
	printf("Horas De Voo");
	gotoxy(2, 21);
	printf("%s", Piloto.nome);
	gotoxy(2, 51);
	printf("%i", Piloto.registro);
	gotoxy(2, 81);
	fflush(stdin);
	printf("%i", Piloto.horasvoo);
	
	
	
	

	gotoxy(4,1);
	printf("%c", 179);
	gotoxy(5,1);
	printf("%c", 195);
	gotoxy(5,1);
	printf("%c", 195);
	for(i=0;i<108;i++) printf("%c", 196);
	gotoxy(6,1);
	printf("%c", 179);
	gotoxy(7,1);
	printf("%c", 195);
	gotoxy(7,1);
	printf("%c", 195);
	for(i=0;i<108;i++) printf("%c", 196);
	gotoxy(4,20);
	printf("%c", 179);
	gotoxy(4,50);
	printf("%c", 179);
	gotoxy(4,80);
	printf("%c", 179);
	gotoxy(4,110);
	printf("%c", 179);
	gotoxy(5,20);
	printf("%c", 197);
	gotoxy(5,50);
	printf("%c", 197);
	gotoxy(5,80);
	printf("%c", 197);
	gotoxy(5,110);
	printf("%c", 180);
	gotoxy(4, 4);
	printf("Dados Aeronave");
	gotoxy(3, 31);
	printf("Prefixo");
	gotoxy(3, 60);
	printf("Capacidade");
	gotoxy(3,91);
	printf("Autonomia");
	gotoxy(4, 21);
	fflush(stdin);
	printf("%i", Aviao.prefixo);
	gotoxy(4, 51);
	printf("%i", Aviao.capacidade);
	gotoxy(4, 81);
	fflush(stdin);
	printf("%i", Aviao.autonomia);
	



	gotoxy(6,20);
	printf("%c", 179);
	gotoxy(6,50);
	printf("%c", 179);
	gotoxy(6,80);
	printf("%c", 179);
	gotoxy(6,110);
	printf("%c", 179);	
	gotoxy(7,20);
	printf("%c", 193);
	gotoxy(7,50);
	printf("%c", 193);
	gotoxy(7,80);
	printf("%c", 193);
	gotoxy(7,110);
	printf("%c", 180);
	gotoxy(6, 2);
	printf("Dados Passageiro");
	gotoxy(5, 33);
	printf("Nome");
	gotoxy(5, 64);
	printf("CPF");
	gotoxy(5, 92);
	printf("Destino");
	gotoxy(6, 21);
	fflush(stdin);
	printf("%s", Passageiro.nome);
	gotoxy(6, 51);
	printf("%9lld", CPF);
	gotoxy(6, 81);
	fflush(stdin);
	printf("%s", Passageiro.destino);
	
	
	
	gotoxy(8,1);
	printf("%c", 179);
	gotoxy(8,110);
	printf("%c", 179);
	gotoxy(9,20);
	printf("%c", 193);
	gotoxy(9,50);
	printf("%c", 193);
	gotoxy(9,80);
	printf("%c", 193);
	gotoxy(9,110);
	printf("%c", 217);
	gotoxy(9,1);
	printf("%c", 192);
	for(i=0;i<108;i++) printf("%c", 196);
	gotoxy(8, 40);
	printf("Obrigado Por Voar Conosco! :)");
	
			
	getch();
	
}

int main(){
	int numvoo, cpf2, x1, x2, x3, x4, x5, x6, x7, x8, x9, D1, D2;
	long long CPF, cpfval,cpfvali;
	TipoAeronave Aviao;
	TipoPiloto Piloto;
	TipoCliente Passageiro;
	
	printf("Dados Aeronave");
	
	printf("\n\nPrefixo: ");
	scanf("%i", &Aviao.prefixo);
	printf("\n\nCapacidade: ");
	scanf("%i", &Aviao.capacidade);
	printf("\n\nAutonomia: ");
	scanf("%i", &Aviao.autonomia);
	
	printf("\n\nDados Piloto");
	
	printf("\n\nRegistro: ");
	scanf("%i", &Piloto.registro);
	printf("\n\nNome: ");
	fflush(stdin);
	scanf("%s", &Piloto.nome);
	printf("\n\nHoras Voo: ");
	scanf("%i", &Piloto.horasvoo);
	
	printf("\n\nDados Passageiro");
	
	printf("\n\nNome: ");
	fflush(stdin);
	scanf("%s", &Passageiro.nome);
	printf("\n\nDestino: ");
	fflush(stdin);
	scanf("%s", &Passageiro.destino);
	printf("CPF: ");
	scanf("%lld",&cpfvali);
	printf("\n\nDados Voo");
	printf("\n\nNumero do Voo: ");
	scanf("%i", &numvoo);
	
	
	
	
	
	
	
	
	
	
	printf("valide o seu CPF: ");
	scanf("%9lld", &CPF);
	
	x1 = CPF /100000000;
	x2 = (CPF/10000000)%10;
	x3 = (CPF/1000000)%10;
	x4 = (CPF/100000)%10;
	x5 = (CPF/10000)%10;
	x6 = (CPF/1000)%10;
	x7 = (CPF/100)%10;
	x8 = (CPF/10)%10;
	x9 = CPF%10;
	D1 = ((x1*10)+(x2*9)+(x3*8)+(x4*7)+(x5*6)+(x6*5)+(x7*4)+(x8*3)+(x9*2))%11;
	if(D1<2){
	D1 = 0;
	}
	else
	{
	D1 = 11 - D1;
	}
	D2 = ((x1*11)+(x2*10)+(x3*9)+(x4*8)+(x5*7)+(x6*6)+(x7*5)+(x8*4)+(x9*3)+(D1*2))%11;
	if(D2<2){
	D2=0;
	}
	else
	{	
	D2=11 - D2;
	}
	
	
	cpf2 = D1*10+D2;
	cpfval = CPF*100+cpf2;
	if(cpfval == cpfvali){
	    printf("CPF Valido");
	    delay(1000);
		system("cls");
		tabelaBase();
		}
	else
	    printf("\tCPF INVALIDO");
	

		
}
