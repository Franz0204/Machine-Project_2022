#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define Turn rand() % 4
#define Hit rand() % 2

//To Do: levels

void Tower();
void Map();
void Shop();
void Levels();
void StoreItems();
void BattleChoices(int nPhp, int nEhp, int nPdmg, int nEdmg, int nStrike, int nCount);
void DisplayStats(int nXP, int nCurrentFloor);
void BattleLayout(int nPhp, int nEhp, int nPdmg, int nEdmg, int nXP, int nCurrentFloor, int nStrike, int nCount, int nMphp, int nMehp);
void Greetings();
void DisplayItem (int nItemNo);
void DisplaySide (int nStrike);
void EnemyMove(int *nEhp, int *nEdmg, int *nEheal);
int StrikeFirst(int nCount);
void YourMove(int *nPhp, int *nPdmg, int *nPheal, int nChoice, int *nDefeat);
void Battle (int nDefeat, int *nPhp, int *nEhp, int *nPdmg, int *nEdmg, int *nXP, int *nPheal, int *nEheal, int nCurrentFloor);
void TowerLevel(int *nPhp, int *nPdmg, int *nEhp, int *nEdmg, int *nPheal, int *nEheal, int *nXP, int nCurrentFloor);
void Store(int *nPhp, int *nPdmg, int *nEhp, int *nEdmg, int *nXP, int nCurrentFloor);
void Options(int *nSentinel, int *nDefeat, int *nPhp, int *nPdmg, int *nEhp, int *nEdmg, int *nPheal, int *nEheal, int *nXP, int *nCurrentFloor);

int main(){
	int nSentinel = 0, nDefeat = 0, nRestart = 0, nPhp = 100, nPdmg = 0, nEhp = 100, nEdmg = 0, nPheal = 0, nEheal = 0 , nXP = 10000, nCurrentFloor = 0;
	char cStart, cConfirm;

		do{
			Greetings();
			do {
				nDefeat = 0;
				nSentinel = 0;
				srand(time(NULL));
				
			Options(&nSentinel, &nDefeat, &nPhp, &nPdmg, &nEhp, &nEdmg, &nXP, &nPheal, &nEheal, &nCurrentFloor);
				
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

	  return 0;
}

void Tower()
{
	printf("                                                |>>>\n");
	printf("                                                |\n");
	printf("                                            _  _|_  _\n");
	printf("                                           |;|_|;|_|;|\n");
	printf("                                           \\.    .  /\n");
	printf("                                            \\:  .  /\n");
	printf("                                             ||:   |\n");
	printf("                                             ||:.  |\n");
	printf("                                             ||:  .|\n");
	printf("                                             ||:   |       \\,/\n");
	printf("                                             ||: , |            /`\\\n");
	printf("                                             ||:   |\n");
	printf("              __                            _||_   |\n");
	printf("     ____--`~    '--~~__            __ ----~    ~`---,              ___\n");
	printf("-~--~                   ~---__ ,--~'                  ~~----_____-~'   `~----~~|\n");
}

void Map()
{
	printf("                       .|                           \n");
	printf("                       | |                          \n");
	printf("                       |'|            ._____        \n");
	printf("               ___    |  |            |.   |' .---'|\n");
	printf("       _    .-'   '-. |  |     .--'|  ||   | _|    |\n");
	printf("    .-'|  _.|  |    ||   '-__  |   |  |    ||      |\n");
	printf("    |' | |.    |    ||       | |   |  |    ||      |\n");
	printf(" ___|  '-'     '    ""       '-'   '-.'    '`      |____\n");
	//printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}

void Shop()
{
	printf("\t  ____||____    |      _                                 \n");
	printf("\t ///////////\\   |     | |                                \n");
	printf("\t///////////  \\  |  ___| |__   ___  _ __  ___ \n");
	printf("\t|    _    |  |  | / __| '_ \\ / _ \\| '_ \\/ __|\n");
	printf("\t|[] | | []|[]|  | \\__ \\ | | | (_) | |_) \\__ \\\n");
	printf("\t|   | |   |  |  | |___/_| |_|\\___/| .__/|___/\n");
	printf("\t|   | |   |  |  |                 | |        \n");
	printf("\t|   | |   |  |  |                 |_|        \n");
}

void Levels()
{
	Tower();
	printf("------------------------------------------------------------------------------------\n");
	printf("\t[1] Level 1\n");
	printf("\t[2] Level 2\n");
	printf("\t[3] Level 3\n");
	printf("\t[4] Level 4\n");
	printf("\t[5] Level 5\n");
	printf("\t[6] Level 6\n\n");
	printf("\t[7] Quit\n");
}

void StoreItems()
{
	Shop();
	printf("~What do you wish to upgrade?\n");
	printf("------------------------------------------------------------------------------------\n");
	printf("\t-Upgrades-\n\n");
	printf("\t[1] Healing\n");
	printf("\t[2] Self Buffs\n");
	printf("\t[3] Attacking 1\n");
	printf("\t[4] Attacking 2\n\n");
	printf("\t[5] Quit\n");
}

void BattleChoices(int nPhp, int nEhp, int nPdmg, int nEdmg, int nStrike, int nCount)
{
	if (!(nCount == 1)){
		printf("------------------------------------------------------------------------------------\n");
		printf("\t[1] Heal				Turn %d: >You did %d DMG to the Enemy!\n", nCount, nPdmg);
		printf("\t[2] Buff			   		>Enemy did %d DMG to you!\n", nEdmg);
		printf("\t[3] Attack           	                        >");DisplaySide(nStrike); printf(" striked first!\n");
		printf("\t[4] Attack									  \n\n");
		printf("\t[0] Exit\n");
	}
	else {
		printf("------------------------------------------------------------------------------------\n");
		printf("\t[1] Heal				Turn %d: \n", nCount);
		printf("\t[2] Buff				\n");
		printf("\t[3] Attack           	\n");
		printf("\t[4] Attack		  \n\n");
		printf("\t[0] Exit\n");
	}
}

void DisplayStats(int nXP, int nCurrentFloor)
{
	printf("------------------------------------------------------------------------------------\n");
	printf("\tTotal XP: %d\t\t\n", nXP);
	printf("\tCurrent Floor: Level %d\t\t\n", nCurrentFloor);
	printf("------------------------------------------------------------------------------------\n");
}  

void BattleLayout(int nPhp, int nEhp, int nPdmg, int nEdmg, int nXP, int nCurrentFloor, int nStrike, int nCount, int nMphp, int nMehp)
{
	printf("\t\t\t __  _      ____           .     .     .          / /     _   __\n");
	printf("\t\t\t |  /       /   \\    ___  _/_   _/_    |     ___  | |      \\   |\n");
	printf("\t\t\t | _|       |,_-<   /   `  |     |     |   .'   ` | |      |_  |\n");
	printf("\t\t\t |  |       |    ` |    |  |     |     |   |----' | |      |   |\n");
	printf("\t\t\t |  \\_      `----' `.__/|  \\__/  \\__/ /\\__ `.___, ` `     _/   |\n");
	printf("\t\t\t --                                               ' '         --\n");
	printf("\t______________________________________________________________________________________________\n");
	printf("\t|                                                                                            |\n");
	printf("\t                                                                       Enemy: %d/%d        \n", nEhp, nMehp);
	printf("\t|                                                                                            |\n");
	printf("\t|                                                                                            |\n");
	printf("\t       HP: %d/%d                                                                           \n", nPhp, nMphp);
	printf("\t|____________________________________________________________________________________________|\n");
	BattleChoices(nPhp, nEhp, nPdmg, nEdmg, nStrike, nCount);
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
		printf("\t----------------------------------------------------------------------------------------------\n");	
		printf("\t|       Battle Tower is a turn-based game where players climb the levels by defeating        |\n");
		printf("\t|     each floors enemy as they use their monsters to fight one on one battles to level      |\n");
		printf("\t|     up, and eventually reach the very top and to claim the title as the tower's tycoon!    |\n");
		printf("\t----------------------------------------------------------------------------------------------\n\n");
		printf("\t                                      ---TURN BASED---                                        \n");
		printf("\t                      |--------------Enter X to continue--------------|                      \n");
		printf("\t\t\t\t\t             "); 
		scanf(" %c", &cStart);
		system("cls");
	} while(cStart != 'X' && cStart != 'x' );
}

void DisplayItem (int nItemNo)
{
	switch(nItemNo){
			
		case 1: 
			printf("Healing");
			break;
		
		case 2:
			printf("Self Buffs");
			break;
		
		case 3:
			printf("Attacking 1");
			break;
		
		case 4:
			printf("Attacking 2");
			break;
	}
}

void DisplaySide (int nStrike)
{
	switch(nStrike){
			
		case 1: 
			printf("Enemy");
			break;
		
		case 2:
			printf("You");
			break;
	}
}

void EnemyMove(int *nEhp, int *nEdmg, int *nEheal){
	
	int Random = 1, i;
	
	for (i = 0; i < 5; i++){
		Random = Turn;
	}
		switch (Random){
	
			case 0:
				*nEdmg = 25;
				break;
			
			case 1:
				*nEheal = 10;
				break;
			
			case 2:
				*nEdmg = 25;
				break;
				
			case 3:
			    *nEheal = 10;
				break;	
		}
}

int StrikeFirst(int nCount){
	
	int Random, i;

		for (i = 0; i < 5; i++){
			Random = Hit;
		}
			switch (Random){
		
				case 0:
					return 1;
					break;
				
				case 1:
					return 2;
					break;
			}
}

void YourMove(int *nPhp, int *nPdmg, int *nPheal, int nChoice, int *nDefeat){

		switch (nChoice){
	
			case 0:
				*nDefeat = 1;
				break;
			
			case 1:
				*nPheal = 10;
				break;
			
			case 2:
				*nPdmg = 25;
				break;
				
			case 3:
				*nPheal = 10;
				break;
			
			case 4:
				*nPdmg = 25;
				break;		
		}
}

void Battle (int nDefeat, int *nPhp, int *nEhp, int *nPdmg, int *nEdmg, int *nXP, int *nPheal, int *nEheal, int nCurrentFloor){ 
	
	int nCPhp, nCEhp, nCPdmg, nCEdmg, nStrike, nCount = 1, nMphp, nMehp, nCpheal, nCeheal;
	char cCont;

	nCurrentFloor = 1;
	nMphp = *nPhp;
	nMehp = *nEhp;
	nCPhp = *nPhp;
	nCEhp = *nEhp;
	nCPdmg = 0;
	nCEdmg = 0;
	nCpheal = 0;
	nCeheal = 0; 

	do {
		srand(time(NULL));
		int nChoice = 0;
		nStrike = StrikeFirst(nCount);
	do {
		if (!(nCount == 1)){
		YourMove(&nCPhp, &nCPdmg, &nCpheal, nChoice, &nDefeat);
		EnemyMove(&nCEhp, &nCEdmg, &nCeheal);
		}
		BattleLayout(nCPhp, nCEhp, nCPdmg, nCEdmg, *nXP, nCurrentFloor, nStrike, nCount, nMphp, nMehp);
		printf("\tYour Move \n\t>");
		scanf("%d", &nChoice);
		system("cls");
		if (nChoice < 0 || nChoice > 4) printf("Warning: Invalid Input \n--------------------------------------\n");
	} while (!(nChoice >= 0 && nChoice <= 4));

		YourMove(&nCPhp, &nCPdmg, &nCpheal, nChoice, &nDefeat);
		EnemyMove(&nCEhp, &nCEdmg, &nCeheal);
					
		nCPhp -= nCEdmg;
		nCEhp -= nCPdmg;
		nCPhp += nCpheal;
		nCEhp += nCeheal;

		nCPdmg = 0;
		nCEdmg = 0;
		nCpheal = 0;
		nCeheal = 0;

		if (nCPhp < 0) nCPhp = 0;
		if (nCEhp < 0) nCEhp = 0;
		system("cls");


		switch (nStrike) {// *50/50 chance to whoever strikes first

			case 1:
				if (nCPhp <= 0 || nDefeat == 1) {
					do {
						BattleLayout(nCPhp, nCEhp, nCPdmg, nCEdmg, *nXP, nCurrentFloor, nStrike, nCount, nMphp, nMehp);
						printf("\n\t\tEnemy Wins");
						printf("\n\t\tInput X to continue \n");
						scanf(" %c", &cCont);
						system("cls");
					} while(cCont != 'X' && cCont != 'x' );
					nDefeat = 1;
				}

				else if (nCEhp <= 0){
					do {
						*nXP += 100;
						BattleLayout(nCPhp, nCEhp, nCPdmg, nCEdmg, *nXP, nCurrentFloor, nStrike, nCount, nMphp, nMehp);
						printf("\n\t\tYou Win!");
						printf("\n\t\t+100XP!");
						printf("\n\t\tInput X to continue \n");
						scanf(" %c", &cCont);
						system("cls");
					} while(cCont != 'X' && cCont != 'x' );
					nDefeat = 1;
				}
				break;

			case 2:
				if (nCEhp <= 0){
					do {
						*nXP += 100;
						BattleLayout(nCPhp, nCEhp, nCPdmg, nCEdmg, *nXP, nCurrentFloor, nStrike, nCount, nMphp, nMehp);
						printf("\n\t\tYou Win!");
						printf("\n\t\t+100XP!");
						printf("\n\t\tInput X to continue \n");
						scanf(" %c", &cCont);
						system("cls");
					} while(cCont != 'X' && cCont != 'x' );
					nDefeat = 1;
				}

				else if (nCPhp <= 0 || nDefeat == 1) {
					do {
						BattleLayout(nCPhp, nCEhp, nCPdmg, nCEdmg, *nXP, nCurrentFloor, nStrike, nCount, nMphp, nMehp);
						printf("\n\t\tEnemy Wins");
						printf("\n\t\tInput X to continue \n");
						scanf(" %c", &cCont);
						system("cls");
					} while(cCont != 'X' && cCont != 'x' );
					nDefeat = 1;
				}
				break;
		}
		nCount++;
	} while (nDefeat == 0);
}

void TowerLevel(int *nPhp, int *nPdmg, int *nEhp, int *nEdmg, int *nPheal, int *nEheal, int *nXP, int nCurrentFloor)
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
	        case 6: system("cls"); Battle(nDefeat, nPhp, nEhp, nPdmg, nEdmg, nXP, nPheal, nEheal, nCurrentFloor); break; 
	        case 7: system("cls"); break;	       
    }
}

void Store(int *nPhp, int *nPdmg, int *nEhp, int *nEdmg, int *nXP, int nCurrentFloor)
{
	int nItemNo = 0, nBuy = 0, nPrice = 0;;
	char cConfirm;
	
    do {
        do {
        	StoreItems();
			DisplayStats(*nXP, nCurrentFloor);
        	printf("What Upgrade will you buy: ");
            	scanf("%d", &nItemNo);
			if (nItemNo != 5){
				printf("How many will you buy: ");
					scanf("%d", &nBuy);
				system("cls");
				if (nItemNo < 0 || nItemNo > 5 || nBuy <= 0 )
					printf("WARNING -------> Invalid Input \n");
			}
		} while(nItemNo < 0 || nItemNo > 5 || nBuy < 0 );	
        switch(nItemNo) {
			case 1: 
				nPrice = nBuy * 500;
				break;
		
			case 2:
				nPrice = nBuy * 500;
		
			case 3:
				nPrice = nBuy * 500;
				break;
		
			case 4:
				nPrice = nBuy * 500;
				break;
		
			case 5:
				nPrice = 0;	
				break;
			}
	if(nItemNo != 5 && nBuy != 0){
		if (*nXP >= nPrice) {
			do {
     		StoreItems();
			DisplayStats(*nXP, nCurrentFloor);
				printf("What Item will you buy: %d\n", nItemNo);
        		printf("How many will you buy: %d\n\n", nBuy);
				printf("You are upgrading ");
				DisplayItem(nItemNo);
				printf(" %d times for %d \n", nBuy, nPrice);
				printf("Proceed with trade? Y | N \n");
				printf("--->");
				scanf(" %c", &cConfirm);
				system ("cls");
			
		   	 } while(!( cConfirm == 'Y' || cConfirm == 'N' || cConfirm == 'y' || cConfirm == 'n' ));
	
			if(cConfirm == 'Y' || cConfirm == 'y'){
				switch(nItemNo){
			
					case 1: 
						*nPhp += nBuy * 10;
						break;
		
					case 2:
						*nPdmg += nBuy * 10;
						break;
		
					case 3: 
						*nPhp += nBuy * 10;
						break;
		
					case 4:
						*nPdmg += nBuy * 10;
						break;
				}	
	  	   		*nXP -= nPrice;
	    	}
      	}
      	else printf("WARNING -------> Insufficient XP\n"); 
      }
	} while (nItemNo != 5);
} 


void Options(int *nSentinel, int *nDefeat, int *nPhp, int *nPdmg, int *nEhp, int *nEdmg, int *nPheal, int *nEheal, int *nXP, int *nCurrentFloor)
{
	char cOptions;
	
	do {
		system("cls");
		Map();
		DisplayStats(*nXP, *nCurrentFloor);
		printf("[B]attle\t[S]tore\t\t[M]oves\t\t[Q]uit\n\n"); 
		printf("---> ");
			scanf(" %c", &cOptions);
	} while (!( cOptions == 'B' || cOptions == 'S' || cOptions == 'M' || cOptions == 'Q' || 
				cOptions == 'b' || cOptions == 's' || cOptions == 'm' || cOptions == 'q' )); 
	
	switch(cOptions) {
        case 'B': 
        case 'b': system("cls"); TowerLevel(nPhp, nPdmg, nEhp, nEdmg, nPheal, nEheal, nXP, *nCurrentFloor); break;
        case 'S': 
        case 's': system("cls"); Store(nPhp, nPdmg, nEhp, nEdmg, nXP, *nCurrentFloor); break;
        case 'M': 
        case 'm': system("cls"); *nSentinel = 1; break;
        case 'Q': 
        case 'q':system("cls"); *nSentinel = 1; break;
    }
}
