#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	int opcao; 
	int candidato1=0; 
	int candidato2=0; 
	int candidato3=0; 
	int candidato4=0; 
	int nulo=0;
	int branco=0;
	
	do{
		_sleep(3000);
		system("cls");
		printf("Seja bem vindo a nossa urna eletronica!!\n");
		printf("As opcoes de votos sao:\n");
		printf("1- Candidato 1\n");
		printf("2- Candidato 2\n");
		printf("3- Candidato 3\n");
		printf("4- Candidato 4\n");	
		printf("5- Voto nulo\n");
		printf("6- Voto em branco\n");
		printf("\n Digite seu voto:");
		scanf("%i", &opcao);
	
		switch(opcao){
			case 1 : candidato1++;
					 break;
			case 2 : candidato2++;
					 break;
		    case 3 : candidato3++;
		    		 break;
		    case 4 : candidato4++;
		             break;
		    case 5 : nulo++;
		             break;
		    case 6 : branco++;
		             break;
		    default: printf("Voto invalido! Digite um voto valido");
					 break;
	    }
		
	}while(opcao!=999);
	
	system("cls");
	printf("Resultado da eleicao:\n");
	printf("Candidato 1: %i votos\n", candidato1);
	printf("Candidato 2: %i votos\n", candidato2);
	printf("Candidato 3: %i votos\n", candidato3);
	printf("Candidato 4: %i votos\n", candidato4);
	printf("Voto nulo..: %i votos\n", nulo);
	printf("Voto Branco: %i votos\n", branco);
	
	if (candidato1 > candidato2 && candidato3 && candidato4){
		printf("O vencedor da eleicao foi o candidato1");
	}else if (candidato2 > candidato1 && candidato3 && candidato4){
		printf("O vencedor da eleicao foi o candidato2");
	}else if (candidato3 > candidato1 && candidato2 && candidato4){
		printf("O vencedor da eleicao foi o candidato3");
	}else if (candidato4 > candidato1 && candidato2 && candidato3){
		printf("O vencedor da eleicao foi o candidato4");
	}
	
	return 0;
}

