#include <stdio.h>
#include <time.h>

#define Turn rand() % 4

//To Do: XP system and levels
void Levels()
{
		printf(" __       _____                   _______            _            __\n");
		printf(" \\ \\     |_   _|                 |__   __|          | |          / /\n");
		printf("  \\ \\      | |  _ __ ___  _ __      | |_ __ __ _  __| | ___     / / \n");
		printf("   \\ \\     | | | '__/ _ \\| '_ \\     | | '__/ _` |/ _` |/ _ \\   / /  \n");
		printf("    \\ \\   _| |_| | | (_) | | | |    | | | | (_| | (_| |  __/  / /   \n");
		printf("     \\_\\ |_____|_|  \\___/|_| |_|    |_|_|  \\__,_|\\__,_|\\___| /_/    \n");
		printf("------------------------------------------------------------------------\n");
		printf("\t[1] Level 1\n");
		printf("\t[2] Level 2\n");
		printf("\t[3] Level 3\n");
		printf("\t[4] Level 4\n");
		printf("\t[5] Level 5\n");
		printf("\t[6] Level 6\n\n");
		printf("\t[7] Quit\n");
		printf("------------------------------------------------------------------------\n");
}

void BattleChoices()
{
	//switch cases
	printf("--------------------------------------\n");
	printf("\t[1] Heal\n");
	printf("\t[2] Attack\n");
	printf("\t[3] Heal\n");
	printf("\t[4] Attack\n\n");
	printf("\t[0] Exit\n");
	printf("--------------------------------------\n");
}

void DisplayStats(int nXP, int nCurrentFloor)
{
	printf("\tTotal XP: %d\t\t\n", nXP);
	printf("\tCurrent Floor: %d\t\t\n", nCurrentFloor);
	printf("--------------------------------------\n");
}  

void BattleLayout(int nPhp, int nEhp, int nXP, int nCurrentFloor)
{
	printf("\t\t\t __  _      ____           .     .     .          / /     _   __\n");
	printf("\t\t\t |  /       /   \\    ___  _/_   _/_    |     ___  | |      \\   |\n");
	printf("\t\t\t | _|       |,_-<   /   `  |     |     |   .'   ` | |      |_  |\n");
	printf("\t\t\t |  |       |    ` |    |  |     |     |   |----' | |      |   |\n");
	printf("\t\t\t |  \\_      `----' `.__/|  \\__/  \\__/ /\\__ `.___, ` `     _/   |\n");
	printf("\t\t\t --                                               ' '         --\n");
	printf("\t______________________________________________________________________________________________\n");
	printf("\t|                                                                                            |\n");
	printf("\t                                                                       Enemy: %d/100        \n", nEhp);
	printf("\t|                                                                                            |\n");
	printf("\t|                                                                                            |\n");
	printf("\t       HP: %d/100                                                                           \n", nPhp);
	printf("\t|____________________________________________________________________________________________|\n");
	BattleChoices();
	DisplayStats(nXP, nCurrentFloor);
}

void Greetings()
{
	char cStart;
	do {
		printf("\t______________________________________________________________________________________________\n");
		printf("\t\t ____           .     .     .                _______\n");
		printf("\t\t /   \\    ___  _/_   _/_    |     ___       '   /      __.  ,  _  /   ___  .___ \n");
		printf("\t\t |,_-<   /   `  |     |     |   .'   `          |    .'   \\ |  |  | .'   ` /   \\ \n");
		printf("\t\t |    ` |    |  |     |     |   |----'          |    |    | `  ^  ' |----' |   '\n");
		printf("\t\t `----' `.__/|  \\__/  \\__/ /\\__ `.___,          /     `._.'  \\/ \\/  `.___, /    \n");
		printf("\t______________________________________________________________________________________________\n");
		/*printf("\t------------------------------------------------------------------------------------------\n");	
		printf("\t| After being handed the Iron Throne, King Bran of House Stark, decided to devise a      |\n");
		printf("\t| strategic plan to improve the economic growth of the Six Kingdoms. The Royal Treasury  |\n");
		printf("\t| currently has 2,000 Golden Dragons (GD) only. To accomplish this task, he instructed   |\n");
		printf("\t| this Hand, Lord Tyrion Lannister, and his Master of Coin, Lord Bronn of the Blackwater |\n");
		printf("\t| to go to trade with other kingdoms in Westeros and other free cities in Essos.         |\n");
		printf("\t------------------------------------------------------------------------------------------\n\n");*/
		printf("\t\t\t\t\t\t ---TURN BASED---\n");
		printf("\t\t\t         |--------------Enter X to continue--------------|\t\t\t\n");
		printf("\t\t\t\t\t              ");
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

void YourMove(int *nPhp, int *nPdmg, int nChoice, int *nDefeat){

		switch (nChoice){
	
			case 0:
				*nDefeat = 1;
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

void Battle (int nDefeat, int *nPhp, int *nEhp, int *nPdmg, int *nEdmg, int *nXP, int nCurrentFloor){
	
	do {
		srand(time(NULL));
		int nChoice;
	do {
		BattleLayout(*nPhp, *nEhp, *nXP, nCurrentFloor);
		printf("\tYour Move \n\t>");
		scanf("%d", &nChoice);
		system("cls");
		if (nChoice < 0 || nChoice > 4) printf("Warning: Invalid Input \n--------------------------------------\n");
	} while (!(nChoice >= 0 && nChoice <= 4));
		YourMove(nPhp, nPdmg, nChoice, &nDefeat);
		EnemyMove(nEhp, nEdmg);
					
		*nPhp -= *nEdmg;
		*nEhp -= *nPdmg;
		*nEdmg = 0;
		*nPdmg = 0;
		system("cls");
		
		if (*nPhp <= 0) {
			printf("Enemy Wins \n");
			nXP -= 100; 
			nDefeat = 1;
		}
		else if (*nEhp <= 0)	{
			printf("You Win \n");
			nXP += 100;
			nDefeat = 1;
		}
		
	} while (nDefeat == 0);
	*nPhp = 100;
	*nEhp = 100;
}

void TowerLevel(int *nPhp, int *nPdmg, int *nEhp, int *nEdmg, int *nXP, int nCurrentFloor)
{
	int nDefeat = 0;
	
	int nChoice = 0;
	do {
		system("cls");
		Levels();
		DisplayStats(*nXP, nCurrentFloor);
		printf("Choose a Level"); 
		printf("---> ");
		scanf("%d", &nChoice);
		} while (!(nChoice == 1 || nChoice == 2 || nChoice == 3 || nChoice == 4 || nChoice == 5 || nChoice == 6 || nChoice == 7)); 
		
		switch(nChoice) {
	        case 1: 
	        case 2: 
	        case 3: 
	        case 4: 
	        case 5: 
	        case 6: system("cls"); Battle(nDefeat, nPhp, nEhp, nPdmg, nEdmg, nXP, nCurrentFloor); break; 
	        case 7: system("cls"); printf("You Quit"); break;	       
    }
}

void Options(int *nSentinel, int *nDefeat, int *nPhp, int *nPdmg, int *nEhp, int *nEdmg, int *nXP, int *nCurrentFloor)
{
	char cOptions;
	
	do {
		system("cls");
		DisplayStats(*nXP, *nCurrentFloor);
		printf("[B]attle\t[S]tore\t\t[M]oves\t\t[Q]uit\n\n"); 
		printf("---> ");
			scanf(" %c", &cOptions);
	} while (!( cOptions == 'B' || cOptions == 'S' || cOptions == 'M' || cOptions == 'Q' || 
				cOptions == 'b' || cOptions == 's' || cOptions == 'm' || cOptions == 'q' )); 
	
	switch(cOptions) {
        case 'B': 
        case 'b': system("cls"); TowerLevel(nPhp, nPdmg, nEhp, nEdmg, nXP, *nCurrentFloor); break;
        case 'S': 
        case 's': system("cls"); *nSentinel = 1; break;
        case 'M': 
        case 'm': system("cls"); *nSentinel = 1; break;
        case 'Q': 
        case 'q':system("cls"); *nSentinel = 1; break;
    }
}

int main(){
	int  nSentinel = 0, nDefeat = 0, nRestart = 0;
	int nPhp = 100, nPdmg = 0, nEhp = 100, nEdmg = 0;
	int nXP = 0, nCurrentFloor = 0;
	char cStart, cConfirm;

		do{
			Greetings();
			do {
				nDefeat = 0;
				nSentinel = 0;
				srand(time(NULL));
				
			Options(&nSentinel, &nDefeat, &nPhp, &nPdmg, &nEhp, &nEdmg, &nXP, &nCurrentFloor);
				
			} while (nSentinel == 0);

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
