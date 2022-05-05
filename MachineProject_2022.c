#include <stdio.h>
#include <time.h>

#define Turn rand() % 4

void Greetings()
{
	char cStart;
	do {
		printf("\t\t\t      |--------------Enter X to continue--------------|\t\t\t\n");
		printf("\t\t\t\t\t           ");
		scanf(" %c", &cStart);
		system("cls");
	} while(cStart != 'X' && cStart != 'x' );
}

void EnemyMove(int *nEhp, int *nEdmg){
	
	int Random, i;
	
	for (i = 0; i < 5; i++){
		Random = Turn;
	}
		switch (Random){
	
			case 0:
				*nEdmg = 25;
				break;
			
			case 1:
				 *nEhp += 10;
				break;
			
			case 2:
				*nEdmg = 25;
				break;
				
			case 3:
			    *nEhp += 10;
				break;	
		}
}

void YourMove(int *nPhp, int *nPdmg, int nChoice, int *nSentinel){

		switch (nChoice){
	
			case 0:
				*nSentinel = 1;
				break;
			
			case 1:
				*nPhp += 10;
				break;
			
			case 2:
				*nPdmg = 25;
				break;
				
			case 3:
				*nPhp += 10;
				break;
			
			case 4:
				*nPdmg = 25;
				break;		
		}
}

int main(){
	int  nChoice, nSentinel = 0, nDefeat = 0, nRestart = 0;
	int nPhp = 100, nPdmg = 0, nEhp = 100, nEdmg = 0;
	char cStart, cConfirm;

		do{
			Greetings();
			do {
				nDefeat = 0;
				nSentinel = 0;
				srand(time(NULL));
	
				printf("HP: %d \n", nPhp);
				printf("Enemy HP: %d \n", nEhp);
				
				printf("Your Move \n>");
				scanf("%d", &nChoice);
				
				YourMove(&nPhp, &nPdmg, nChoice, &nSentinel);
				EnemyMove(&nEhp, &nEdmg);
			
				
				nPhp -= nEdmg;
				nEhp -= nPdmg;
				nEdmg = 0;
				nPdmg = 0;
				system("cls");
				if (nPhp <= 0) {
					printf("Enemy Wins"); 
					nDefeat = 1;
				}
				else if (nEhp <= 0)	{
					printf("You Win"); 
					nDefeat = 1;
				}
				
			} while (nDefeat == 0 && nSentinel == 0);

		printf("\t  ______                          _ _ \n");
		printf("\t |  ____|                        | | |\n");
		printf("\t | |__ __ _ _ __ _____      _____| | |\n");
		printf("\t |  __/ _` | '__/ _ \\ \\ /\\ / / _ \\ | |\n");
		printf("\t | | | (_| | | |  __/\\ V  V /  __/ | |\n");
		printf("\t |_|  \\__,_|_|  \\___| \\_/\\_/ \\___|_|_|\n\n");
		printf("------------------------------------------------------------------------\n");
					
		printf("\nPlay Again? 1 = Yes | 0 = No\n");
		printf("---> ");
		scanf("%d", &nRestart);
		system("cls");
	  } while (nRestart == 1);
}
