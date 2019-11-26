#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void jogo_vida(int definicoes[4], int geracoes, int modo){
	int x, soma, repeticao, tabuleiro[484], tabuleiro_copia[484];
	system("cls");
	switch(modo){
		case 1:{ // utilizador escolhe a demonstracao "bloco"
			for(x = 0; x < 484; x++){
	        	if(x == 230 || x == 231 || x == 252 || x == 253){ // as celulas necessárias são definidas para 1
	          		tabuleiro[x] = 1;}
	        	else{ // as celulas restantes são definidas para 0
	          		tabuleiro[x] = 0;}
	      		tabuleiro_copia[x] = tabuleiro[x];}
      		break;
      	}
	    case 2:{ // utilizador escolhe a demonstracao "colmeia"
	      for(x = 0; x < 484; x++){
	        	if(x == 230 || x == 231 || x == 254 || x == 251 || x == 274 || x == 275){ // as celulas necessárias são definidas para 1
	          		tabuleiro[x] = 1;}
	        	else{ // as celulas restantes são definidas para 0
	          		tabuleiro[x] = 0;}
	      		tabuleiro_copia[x] = tabuleiro[x];}
      		break;
      	}
	    case 3:{ // utilizador escolhe a demonstracao "pao"
	      for(x = 0; x < 484; x++){
	        	if(x == 208 || x == 209 || x == 229 || x == 232 || x == 252 || x == 254 || x == 275){ // as celulas necessárias são definidas para 1
	          		tabuleiro[x] = 1;}
	        	else{ // as celulas restantes são definidas para 0
	          		tabuleiro[x] = 0;}
	      		tabuleiro_copia[x] = tabuleiro[x];}
      		break;
      	}
	    case 4:{ // utilizador escolhe a demonstracao "barco"
	      for(x = 0; x < 484; x++){
	        	if(x == 207 || x == 208 || x == 229 || x == 231 || x == 252){ // as celulas necessárias são definidas para 1
	          		tabuleiro[x] = 1;}
	        	else{ // as celulas restantes são definidas para 0
	          		tabuleiro[x] = 0;}
	      		tabuleiro_copia[x] = tabuleiro[x];}
      		break;
      	}
	    case 5:{ // utilizador escolhe a demonstracao "tub"
	      for(x = 0; x < 484; x++){
	        	if(x == 208 || x == 229 || x == 231 || x == 252){ // as celulas necessárias são definidas para 1
	          		tabuleiro[x] = 1;}
	        	else{ // as celulas restantes são definidas para 0
	          		tabuleiro[x] = 0;}
	      		tabuleiro_copia[x] = tabuleiro[x];}
      		break;
      	}
	    case 6:{ // utilizador escolhe a demonstracao "blinker"
	      for(x = 0; x < 484; x++){
	        	if(x == 230 || x == 231 || x == 232){ // as celulas necessárias são definidas para 1
	          		tabuleiro[x] = 1;}
	        	else{ // as celulas restantes são definidas para 0
	          		tabuleiro[x] = 0;}
	      		tabuleiro_copia[x] = tabuleiro[x];}
      		break;
      	}
	    case 7:{ // utilizador escolhe a demonstracao "sapo"
	      for(x = 0; x < 484; x++){
	        	if(x == 230 || x == 231 || x == 232 || x == 251 || x == 252 || x == 253){ // as celulas necessárias são definidas para 1
	          		tabuleiro[x] = 1;}
	        	else{ // as celulas restantes são definidas para 0
	          		tabuleiro[x] = 0;}
	      		tabuleiro_copia[x] = tabuleiro[x];}
      		break;
      	}
	    case 8:{ // utilizador escolhe a demonstracao "farol"
	      for(x = 0; x < 484; x++){
	        	if(x == 209 || x == 210 || x == 232 || x == 251 || x == 273 || x == 274){ // as celulas necessárias são definidas para 1
	          		tabuleiro[x] = 1;}
	        	else{ // as celulas restantes são definidas para 0
	          		tabuleiro[x] = 0;}
	      		tabuleiro_copia[x] = tabuleiro[x];}
      		break;
      	}
	    case 9:{ // utilizador escolhe a demonstracao "pulsar"
	      for(x = 0; x < 484; x++){
	        	if(x == 94 || x == 95 || x == 96 || x == 100 || x == 101 || x == 102 || x == 136 || x == 141 || x == 143 || x == 148 || x == 158 || x == 163 || x == 165 || x == 170 || x == 180 || x == 185 || x == 187 || x == 192 || x == 204 || x == 205 || x == 206 || x == 210 || x == 211 || x == 212 || x == 248 || x == 249 || x == 250 || x == 254 || x == 255 || x == 256 || x == 268 || x == 273 || x == 275 || x == 280 || x == 290 || x == 295 || x == 297 || x == 302 || x == 312 || x == 317 || x == 319 || x == 324 || x == 358 || x == 359 || x == 360 || x == 364 || x == 365 || x == 366){ // as celulas necessárias são definidas para 1
	          		tabuleiro[x] = 1;}
	        	else{ // as celulas restantes são definidas para 0
	          		tabuleiro[x] = 0;}
	      		tabuleiro_copia[x] = tabuleiro[x];}
      		break;
      	}
	    case 10:{ // utilizador escolhe a demonstracao "pentadecatlo"
	      for(x = 0; x < 484; x++){
	        	if(x == 121 || x == 142 || x == 143 || x == 144 || x == 163 || x == 164 || x == 165 || x == 166 || x == 167 || x == 317 || x == 318 || x == 319 || x == 320 || x == 321 || x == 340 || x == 341 || x == 342 || x == 363){ // as celulas necessárias são definidas para 1
	          		tabuleiro[x] = 1;}
	        	else{ // as celulas restantes são definidas para 0
	          		tabuleiro[x] = 0;}
	      		tabuleiro_copia[x] = tabuleiro[x];}
      		break;
      	}
	    case 11:{ // utilizador escolhe a demonstracao "planador"
	      for(x = 0; x < 484; x++){
	        	if(x == 48 || x == 68 || x == 70 || x == 91 || x == 92){ // as celulas necessárias são definidas para 1
	          		tabuleiro[x] = 1;}
	        	else{ // as celulas restantes são definidas para 0
	          		tabuleiro[x] = 0;}
	      		tabuleiro_copia[x] = tabuleiro[x];}
      		break;
      	}
	    case 12:{ // utilizador escolhe a demonstracao "lwss"
	      for(x = 0; x < 484; x++){
	        	if(x == 201 || x == 202 || x == 221 || x == 222 || x == 224 || x == 225 || x == 243 || x == 244 || x == 245 || x == 246 || x == 266 || x == 267){ // as celulas necessárias são definidas para 1
	          		tabuleiro[x] = 1;}
	        	else{ // as celulas restantes são definidas para 0
	          		tabuleiro[x] = 0;}
	      		tabuleiro_copia[x] = tabuleiro[x];}
      		break;
      	}
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

  for(repeticao = 0; repeticao <= geracoes; repeticao++){
    for(x = 0; x < 484; x++){
      tabuleiro_copia[x] = tabuleiro[x]; //faz-se cópia do tabuleiro
  	}
    for(x = 0; x < 484; x++){ //apresenta o tabuleiro
    	if(tabuleiro[x] == 1)
      		printf("@ "); //se a célula for viva apresenta um @
    	else
    		printf("  "); //se a célula for morta apresenta um espaço vazio
    	if(((x+1) % 22) == 0){
        	printf("\n"); //se for a ultima celula de uma linha muda de linha
      }
    }
    printf("Geração %d de %d\n\n", repeticao, geracoes);
    
	if(repeticao != geracoes){ //se for a ultima repetição só é necessário apresentar o tabuleiro
		for(x = 0; x < 484; x++){
	      if(!(x <= 22 ||  x >= 461 || x % 22 == 0 || x % 22 == 21)){ //apenas as celulas interiores devem ser afetadas
	        soma = tabuleiro_copia[x-1] + tabuleiro_copia[x+1] + tabuleiro_copia[x-21] + tabuleiro_copia[x-22] + tabuleiro_copia[x-23] + tabuleiro_copia[x+21] + tabuleiro_copia[x+22] + tabuleiro_copia[x+23];
			if(tabuleiro_copia[x] == 1){ //aplicação das regras para células vivas
	          if(soma > definicoes[0] || soma < definicoes[1])
	            tabuleiro[x] = 0;
	          else
	            tabuleiro[x] = 1;
	        }
	        else if(tabuleiro_copia[x] == 0){ //aplicação das regras para células mortas
	        	if(soma <= definicoes[2] && soma >= definicoes[3])
	            	tabuleiro[x] = 1;
	        	else
	            	tabuleiro[x] = 0;
	        }
	      }
	    }
	}
    sleep(1);
    system("cls");
  }
}

void menu_demos(){
	int opcao, opcao2, definicoes[4] = {3,2,3,3};
	system("cls");
	printf("Escolha uma opção:\n 1 - Vidas paradas\n 2 - Osciladores\n 3 - Naves espaciais\n 4 - Voltar\n");
	scanf("%d", &opcao);
	switch(opcao){
		case 1:{
			system("cls");
			printf("Escolha uma opção:\n 1 - Bloco\n 2 - Colmeia\n 3 - Pão\n 4 - Barco\n 5 - Banheira\n 6 - Voltar\n");
			do{
				scanf("%d", &opcao2);
				switch(opcao2){
					case 1:{
						printf("%d", opcao2);
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
					case 6:{
						menu_demos();
						break;
					}
					default:{
						puts("Opção inválida");
						break;
					}
				}
			}
			while(opcao2 < 1 || opcao2 > 6);
			break;
		}
		case 2:{
			system("cls");
			printf("Escolha uma opção:\n 1 - Blinker (Periodo 2)\n 2 - Sapo (Periodo 2)\n 3 - Farol (Periodo 2)\n 4 - Pulsar (Periodo 3)\n 5 - Pentadecatlo (Periodo 15)\n 6 - Voltar\n");
			do{
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
						jogo_vida(definicoes, 15, 9);
						break;
					}
					case 5:{
						jogo_vida(definicoes, 50, 10);
						break;
					}
					case 6:{
						menu_demos();
						break;
					}
					default:{
						puts("Opção inválida");
						break;
					}
				}
			}
			while(opcao2 < 1 || opcao2 > 6);
			break;
		}
		case 3:{
			system("cls");
			printf("Escolha uma opção:\n 1 - Planador\n 2 - Nave leve\n 3 - Voltar\n");
			do{
				scanf("%d", &opcao2);
				switch(opcao2){
					case 1:{
						jogo_vida(definicoes, 50, 11);
						break;
					}
					case 2:{
						jogo_vida(definicoes, 30, 12);
						break;
					}
					case 3:{
						menu_demos();
						break;
					}
					default:{
						puts("Opção inválida");
						break;
					}
				}
			}
			while(opcao2 < 1 || opcao2 > 3);
			break;
		}
		case 4:{
			break;
		}
		default:{
			menu_demos();
			break;
		}
	}
}

void menu(int definicoes[4]){
	int opcao, opcao2, modo, geracoes, valor_introduzido;
	system("cls");
	printf("Escolha uma opção:\n 1 - Iniciar o jogo\n 2 - Demonstrações\n 3 - Definições\n 4 - Sair\n");
	scanf("%d", &opcao);

	switch(opcao){
		case 1:{
			printf("Insira o numero de gerações\n");
			scanf("%d", &geracoes);
			jogo_vida(definicoes, geracoes, 0);
			menu(definicoes);
			break;}

		case 2:{
			menu_demos();
			menu(definicoes);
			break;}

		case 3:{
			do{
				printf("Insira o numero maximo de vizinhos que a celula pode ter (atual: %d, padrão: 3):\n", definicoes[0]);
				scanf("%d", &valor_introduzido);
			}
			while(valor_introduzido < 0 || valor_introduzido >= 8);
			definicoes[0] = valor_introduzido;

			do{
				printf("Insira o numero minimo de vizinhos que a celula pode ter (atual: %d, padrão: 2):\n", definicoes[1]);
				scanf("%d", &valor_introduzido);
			}
			while(valor_introduzido < 0 || valor_introduzido >= 8);
			definicoes[1] = valor_introduzido;

			do{
				printf("Insira o numero maximo de vizinhos que a celula deve ter para nascer (atual: %d, padrão: 3):\n", definicoes[2]);
				scanf("%d", &valor_introduzido);
			}
			while(valor_introduzido < 0 || valor_introduzido >= 8);
			definicoes[2] = valor_introduzido;

			do{
				printf("Insira o numero minimo de vizinhos que a celula deve ter para nascer (atual: %d, padrão: 3):\n", definicoes[3]);
				scanf("%d", &valor_introduzido);
			}
			while(valor_introduzido < 0 || valor_introduzido >= 8);
			definicoes[3] = valor_introduzido;
			menu(definicoes);
			break;
		}
		case 4:{
			break;
		}
		default:{
			menu(definicoes);
			break;
		}

	}
}

void main(){
	setlocale(LC_ALL, "Portuguese");
	int definicoes[4] = {3,2,3,3};
	menu(definicoes);
}
