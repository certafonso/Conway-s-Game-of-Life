#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void jogo_vida(int definicoes[4], int geracoes, int modo){
	int x, soma, repeticao, tabuleiro[484], tabuleiro_copia[484];
	system("cls");
	switch(modo){
		case 1:{ // utilizador escolhe a demonstracao "bloco"
			int tabuleiro[484] = {0,1,2,3,4}, tabuleiro_copia[484] = {0,1,2,3,4};
      		break;}

	    case 2:{ // utilizador escolhe a demonstracao "colmeia"
	      int tabuleiro[484] = {0,1,2,3,4}, tabuleiro_copia[484] = {0,1,2,3,4};
	      break;}
	
	    case 3:{ // utilizador escolhe a demonstracao "pao"
	      int tabuleiro[484] = {0,1,2,3,4}, tabuleiro_copia[484] = {0,1,2,3,4};
	      break;}
	
	    case 4:{ // utilizador escolhe a demonstracao "barco"
	      int tabuleiro[484] = {0,1,2,3,4}, tabuleiro_copia[484] = {0,1,2,3,4};
	      break;}
	
	    case 5:{ // utilizador escolhe a demonstracao "tub"
	      int tabuleiro[484] = {0,1,2,3,4}, tabuleiro_copia[484] = {0,1,2,3,4};
	      break;}
	
	    case 6:{ // utilizador escolhe a demonstracao "blinker"
	      int tabuleiro[484] = {0,1,2,3,4}, tabuleiro_copia[484] = {0,1,2,3,4};
	      break;}
	
	    case 7:{ // utilizador escolhe a demonstracao "sapo"
	      int tabuleiro[484] = {0,1,2,3,4}, tabuleiro_copia[484] = {0,1,2,3,4};
	      break;}
	
	    case 8:{ // utilizador escolhe a demonstracao "beacon"
	      int tabuleiro[484] = {0,1,2,3,4}, tabuleiro_copia[484] = {0,1,2,3,4};
	      break;}
	
	    case 9:{ // utilizador escolhe a demonstracao "pulsar"
	      int tabuleiro[484] = {0,1,2,3,4}, tabuleiro_copia[484] = {0,1,2,3,4};
	      break;}
	
	    case 10:{ // utilizador escolhe a demonstracao "pentadecatlo"
	      int tabuleiro[484] = {0,1,2,3,4}, tabuleiro_copia[484] = {0,1,2,3,4};
	      break;}
	
	    case 11:{ // utilizador escolhe a demonstracao "planador"
	      int tabuleiro[484] = {0,1,2,3,4}, tabuleiro_copia[484] = {0,1,2,3,4};
	      break;}
	
	    case 12:{ // utilizador escolhe a demonstracao "lwss"
	      int tabuleiro[484] = {0,1,2,3,4}, tabuleiro_copia[484] = {0,1,2,3,4};
	      break;}
	
	    default:{ // se nenhuma demonstracao foi selecionada usa-se o padrao 20x20
			for(x = 0; x < 484; x++){
	        	if(x <= 22 ||  x >= 461 || x % 22 == 0 || x % 22 == 21){ // o quadrado de 20x20 e cercado por celulas mortas
	          		tabuleiro[x] = 0;}
	        	else{ // as celulas dentro do quadrado podem estar mortas ou vivas
	          		tabuleiro[x] = rand() % 2;}
	      	tabuleiro_copia[x] = tabuleiro[x];
	      	}
		}
  	}

  for(repeticao = 1; repeticao <= geracoes; repeticao++){
    for(x = 0; x < 484; x++){
      if(!(x <= 22 ||  x >= 461 || x % 22 == 0 || x % 22 == 21)){
        soma = tabuleiro_copia[x-1] + tabuleiro_copia[x+1] + tabuleiro_copia[x-21] + tabuleiro_copia[x-22] + tabuleiro_copia[x-23] + tabuleiro_copia[x+21] + tabuleiro_copia[x+22] + tabuleiro_copia[x+23];
        if(tabuleiro_copia[x] == 1){
          if(soma > definicoes[0] || soma < definicoes[1])
            tabuleiro[x] = 0;
          else
            tabuleiro[x] = 1;
        }
        else if(tabuleiro_copia[x] == 0){
          if(soma > definicoes[2] || soma < definicoes[3])
            tabuleiro[x] = 0;
          else
            tabuleiro[x] = 1;
        }
      }
    }
    for(x = 0; x < 484; x++){
      tabuleiro_copia[x] = tabuleiro[x];
  	}
    for(x = 0; x < 484; x++){
      printf("%d ", tabuleiro[x]);
      if(((x+1) % 22) == 0){
        printf("\n");
      }
    }
    printf("Geracao %d de %d\n\n", repeticao, geracoes);
    sleep(1);
    system("cls");
  }
}

void menu_demos(){
	int opcao, opcao2, definicoes[4] = {2,3,3,3};
	printf("Escolha uma opção:\n 1 - Vidas paradas\n 2 - Osciladores\n 3 - Naves espaciais\n");
	scanf("%d", &opcao);
	switch(opcao){
		case 1:{
			printf("Escolha uma opção:\n 1 - Bloco\n 2 - Colmeia\n 3 - Pão\n 4 - Barco\n 5 - Banheira\n");
			scanf("%d", &opcao2);
			switch(opcao2){
				case 1:{
					jogo_vida(definicoes, 10, 1);
					break;
				}
				case 2:{
					jogo_vida(definicoes, 10, 2);
					break;
				}
				case 3:{
					jogo_vida(definicoes, 10, 3);
					break;
				}
				case 4:{
					jogo_vida(definicoes, 10, 4);
					break;
				}
				case 5:{
					jogo_vida(definicoes, 10, 5);
					break;
				}
			}
			break;
		}
		case 2:{
			printf("Escolha uma opção:\n 1 - Blinker (Periodo 2)\n 2 - Sapo (Periodo 2)\n 3 - Beacon (Periodo 2)\n 4 - Pulsar (Periodo 3)\n 5 - Pentadecatlo (Periodo 15)\n");
			scanf("%d", &opcao2);
			switch(opcao2){
				case 1:{
					jogo_vida(definicoes, 10, 6);
					break;
				}
				case 2:{
					jogo_vida(definicoes, 10, 7);
					break;
				}
				case 3:{
					jogo_vida(definicoes, 10, 8);
					break;
				}
				case 4:{
					jogo_vida(definicoes, 10, 9);
					break;
				}
				case 5:{
					jogo_vida(definicoes, 10, 10);
					break;
				}
			}
			break;
		case 3:{
			printf("Escolha uma opção:\n 1 - Planador\n 2 - Nave leve\n");
			scanf("%d", &opcao2);
			switch(opcao2){
				case 1:{
					jogo_vida(definicoes, 10, 11);
					break;
				}
				case 2:{
					jogo_vida(definicoes, 10, 12);
					break;
				}
			}
			break;
		}
	}
}

void menu(){
	int opcao, opcao2, modo, definicoes[4] = {2,3,3,3}, geracoes, valor_introduzido;
	system("cls");
	printf("Escolha uma opção:\n 1 - Entrar padrão\n 2 - Demonstrações\n 3 - Definições\n 4 - Sair\n");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1:{
			printf("Insira o numero de gerações\n");
			scanf("%d", &geracoes);
			jogo_vida(definicoes, geracoes, 0);
			menu();
			break;}
			
		case 2:{
			menu_demos();
			break;}
			
		case 3:{
			do{
				printf("Insira o numero maximo de vizinhos que a celula pode ter (atual: %d, padrão: 2):\n", definicoes[0]);
				scanf("%d", &valor_introduzido);
			}
			while(valor_introduzido < 0 || valor_introduzido > 8);
			definicoes[0] = valor_introduzido;
			
			do{
				printf("Insira o numero minimo de vizinhos que a celula pode ter (atual: %d, padrão: 3):\n", definicoes[1]);
				scanf("%d", &valor_introduzido);
			}
			while(valor_introduzido < 0 || valor_introduzido > 8);
			definicoes[1] = valor_introduzido;
			
			do{
				printf("Insira o numero maximo de vizinhos que a celula deve ter para nascer (atual: %d, padrão: 3):\n", definicoes[2]);
				scanf("%d", &valor_introduzido);
			}
			while(valor_introduzido < 0 || valor_introduzido > 8);
			definicoes[2] = valor_introduzido;
			
			do{
				printf("Insira o numero minimo de vizinhos que a celula deve ter para nascer (atual: %d, padrão: 3):\n", definicoes[3]);
				scanf("%d", &valor_introduzido);
			}
			while(valor_introduzido < 0 || valor_introduzido > 8);
			definicoes[3] = valor_introduzido;
			menu();
			break;
		}
		case 4:{
			break;
		}
	
	}
}

main(){
	setlocale(LC_ALL, "Portuguese");
	menu();
	system("pause");
}
