#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define Turn rand() % 4
#define Hit rand() % 2

//To Do: Tower Level 3/4/5/6 - final 

void Boss();
void Tower();
void Map();
void Shop();
void Levels();
void StoreItems();
void BattleChoices(int nPhp, int nEhp, int nPdmg, int nEdmg, int nPheal, int nEheal, int nStrike, int nCount);
void DisplayStats(int nLevel, int nXP, int nTxp, int nCurrentFloor);
void DisplayMoves(int nPhp, int nPdmg, int nHv, int nDMGv, int nDMGv2, int nHvP, int nDMGvP);
void BattleLayout(int nPhp, int nEhp, int nPdmg, int nEdmg, int nLevel, int nXP, int nTxp, int nCurrentFloor, int nStrike, int nCount, int nMphp, int nMehp, int nPheal, int nEheal);
void Greetings();
void DisplayItem (int nItemNo);
void EnemyMove(int *nEhp, int *nEdmg, int *nEheal, int nEnemy);
void YourMove(int *nCPhp, int nPhp, int *nPdmg, int *nPheal, int *nHv, int *nDMGv, int *nDMGv2, int *nHvP, int *nDMGvP, int nChoice, int *nDefeat);
int StrikeFirst(int nCount);
void LevelUp(int *nPhp, int nTxp, int *nLevel);
void Battle1 (int nDefeat, int *nPhp, int nPdmg, int *nLevel, int *nXP, int *nTxp, int nPheal, int nHv, int nDMGv, int nDMGv2, int nHvP, int nDMGvP, int *nCurrentFloor);
void Battle2 (int nDefeat, int *nPhp, int nPdmg, int *nLevel, int *nXP, int *nTxp, int nPheal, int nHv, int nDMGv, int nDMGv2, int nHvP, int nDMGvP, int *nCurrentFloor);
void Battle3 (int nDefeat, int *nPhp, int nPdmg, int *nLevel, int *nXP, int *nTxp, int nPheal, int nHv, int nDMGv, int nDMGv2, int nHvP, int nDMGvP, int *nCurrentFloor);
void Battle4 (int nDefeat, int *nPhp, int nPdmg, int *nLevel, int *nXP, int *nTxp, int nPheal, int nHv, int nDMGv, int nDMGv2, int nHvP, int nDMGvP, int *nCurrentFloor);
void Battle5 (int nDefeat, int *nPhp, int nPdmg, int *nLevel, int *nXP, int *nTxp, int nPheal, int nHv, int nDMGv, int nDMGv2, int nHvP, int nDMGvP, int *nCurrentFloor);
void Battle6 (int nDefeat, int *nPhp, int nPdmg, int *nLevel, int *nXP, int *nTxp, int nPheal, int nHv, int nDMGv, int nDMGv2, int nHvP, int nDMGvP, int *nCurrentFloor);
void TowerLevel(int *nPhp, int nPdmg, int nPheal, int nHv, int nDMGv, int nDMGv2, int nHvP, int nDMGvP, int *nLevel, int *nXP, int *nTxp, int *nCurrentFloor);
void Store(int *nPhp, int *nPdmg, int *nHv, int *nDMGv, int *nDMGv2, int *nHvP, int *nDMGvP, int nLevel, int *nXP, int nTxp, int nCurrentFloor);
void Moves(int nPhp, int nPdmg, int nHv, int nDMGv, int nDMGv2, int nHvP, int nDMGvP, int nLevel, int nXP, int nTxp, int nCurrentFloor);
void Options(int *nSentinel, int *nDefeat, int *nPhp, int *nPdmg, int *nPheal, int *nHv, int *nDMGv, int *nDMGv2, int *nHvP, int *nDMGvP, int *nLevel, int *nXP, int *nTxp, int *nCurrentFloor);

int main(){

	int nRestart = 0;

		do{
			int nSentinel = 0, nDefeat = 0, nLevel = 1, nPhp = 100, nPdmg = 0, nPheal = 0, nCurrentFloor = 1, nXP = 100,
		 		nTxp = 100, nHv = 10, nDMGv = 25, nDMGv2 = 50, nHvP = 10, nDMGvP = 15; 
		
			Greetings();
			do {
				nDefeat = 0;
				nSentinel = 0;
				srand(time(NULL));
				
				Options(&nSentinel, &nDefeat, &nPhp, &nPdmg, &nPheal, &nHv, &nDMGv, &nDMGv2, &nHvP, &nDMGvP, &nLevel, &nXP, &nTxp, &nCurrentFloor);
				
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

void Boss()
{
	printf("                      ____...                                  \n");
	printf("             .-''--''''.__    `.                               \n");
	printf("            |            `    |                                \n");
	printf("  (         `._....------.._.:          					   \n");
	printf("   )         .()''        ``().                                \n");
	printf("  '          () .=='  `===  `-.         					   \n");
	printf("   . )       (         g)                               	   \n");
	printf("    )         )     /        J          					   \n");
	printf("   (          |.   /      . (                                  \n");
	printf("   $$         (.  (_'.   , )|`                                 \n");
	printf("   ||         |\\`-....--'/  ' \\                              \n");
	printf("  /||.         \\ | | | /  /   \\.                             \n");
	printf(" //||(\\         \\`-===-'  '     \\o.                         \n");
	printf(".//7' |)         `. --   / (     OObaaaad888b.                 \n");
	printf("(<<. / |     .a888b`.__.'d\\     OO888888888888a.              \n");
	printf(" \\  Y' |    .8888888aaaa88POOOOOO888888888888888.             \n");
	printf("  \\  \\ |   .888888888888888888888888888888888888b            \n");
	printf("   |   |  .d88888P88888888888888888888888b8888888.             \n");
	printf("   b.--d .d88888P8888888888888888a:f888888|888888b             \n");
	printf("------------------------------------------------------------------------------------\n");
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
	printf("\t[7] Exit\n");
}

void StoreItems()
{
	Shop();
	printf("------------------------------------------------------------------------------------\n");
	printf("\t-Upgrades-			~What do you wish to upgrade?\n\n");
	printf("\t[1] Recover\n");
	printf("\t[2] Work Out\n");
	printf("\t[3] Surf\n");
	printf("\t[4] Hydro Pump\n\n");
	printf("\t[5] Exit\n");
}

void BattleChoices(int nPhp, int nEhp, int nPdmg, int nEdmg, int nPheal, int nEheal, int nStrike, int nCount)
{
	int nCheck = nStrike == 1;
	int nCheck2 = nPdmg == 0;
	int nCheck3 = nEdmg == 0;
	if (!(nCount == 1)){
		printf("------------------------------------------------------------------------------------\n");
		printf("\t[1] Revover				Turn %d: >Your monster %s %d units to %s!\n", nCount, nCheck2 ? "healed" : "dealth", nCheck2 ? nPheal : nPdmg, nCheck2 ? "itself" : "the Enemy");
		printf("\t[2] Work Out			   		>Enemy's monster %s %d units to %s!\n", nCheck3 ? "healed" : "dealth" , nCheck3 ? nEheal : nEdmg, nCheck3 ? "itself" : "to you");
		printf("\t[3] Surf           	                        >%s striked first!\n",nCheck ? "Enemy" : "You");
		printf("\t[4] Hydro Pump									  \n\n");
		printf("\t[0] Quit\n");
	}
	else {
		printf("------------------------------------------------------------------------------------\n");
		printf("\t[1] Recover				Turn %d: \n", nCount);
		printf("\t[2] Work Out				\n");
		printf("\t[3] Surf           	\n");
		printf("\t[4] Hydro Pump		  \n\n");
		printf("\t[0] Quit\n");
	}
}

void DisplayStats(int nLevel, int nXP, int nTxp, int nCurrentFloor)
{
	printf("------------------------------------------------------------------------------------\n");
	printf("\tLevel: %d\t\t\n", nLevel);
	printf("\tXP: %d\t\t\n", nXP);
	printf("\tTotal XP: %d\t\t\n", nTxp);
	if (nCurrentFloor <= 6) printf("\tCurrent Floor: Level %d\t\t\n", nCurrentFloor); else printf("\t~Battle Tower Tycoon~\t\t\n");
	printf("------------------------------------------------------------------------------------\n");
}

void DisplayMoves(int nPhp, int nPdmg, int nHv, int nDMGv, int nDMGv2, int nHvP, int nDMGvP)
{
	int nDemerit = nPhp * 0.25;

	printf("\t[1] Recover: Heal: %d\n", nHv);
	printf("\t[2] Work Out: +Heal: %d | +DMG: %d \n", nHvP, nDMGvP);
	printf("\t[3] Surf: DMG: %d\n", nDMGv);
	printf("\t[4] Hydro Pump: DMG: %d  | -HP: %d \n", nDMGv2, nDemerit);
	printf("------------------------------------------------------------------------------------\n");
}

void BattleLayout(int nPhp, int nEhp, int nPdmg, int nEdmg, int nLevel, int nXP, int nTxp, int nCurrentFloor, int nStrike, int nCount, int nMphp, int nMehp, int nPheal, int nEheal)
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
	BattleChoices(nPhp, nEhp, nPdmg, nEdmg, nPheal, nEheal, nStrike, nCount);
	DisplayStats(nLevel, nXP, nTxp, nCurrentFloor);
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

void EnemyMove(int *nEhp, int *nEdmg, int *nEheal, int nEnemy){
	
	int Random = 1, i;
	
	for (i = 0; i < 5; i++){
		Random = Turn;
	}

	switch (nEnemy)
	{
		case 1:
		{
			switch (Random)
			{
			
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
			break;
		}

		case 2:
		{
			switch (Random)
			{
			
				case 0:
					*nEdmg = 30;
					break;
					
				case 1:
					*nEheal = 20;
					break;
					
				case 2:
					*nEdmg = 30;
					break;
						
				case 3:
					*nEheal = 20;
					break;	
			}
			break;
		}

		case 3:
		{
			switch (Random)
			{
			
				case 0:
					*nEdmg = 40;
					break;
					
				case 1:
					*nEheal = 50;
					break;
					
				case 2:
					*nEdmg = 40;
					break;
						
				case 3:
					*nEdmg = 60;
					break;	
			}
			break;
		}

		case 4:
		{
			switch (Random)
			{
			
				case 0:
					*nEdmg = 50;
					break;
					
				case 1:
					*nEheal = 70;
					break;
					
				case 2:
					*nEdmg = 50;
					break;
						
				case 3:
					*nEdmg = 75;
					break;	
			}
			break;
		}

		case 5:
		{
			switch (Random)
			{
			
				case 0:
					*nEdmg = 60;
					break;
					
				case 1:
					*nEheal = 80;
					break;
					
				case 2:
					*nEdmg = 60;
					break;
						
				case 3:
					*nEdmg = 90;
					break;	
			}
			break;
		}

		case 6:
		{
			switch (Random)
			{
			
				case 0:
					*nEdmg = 100;
					break;
					
				case 1:
					*nEheal = 150;
					break;
					
				case 2:
					*nEdmg = 100;
					break;
						
				case 3:
					*nEdmg = 200;
					break;	
			}
			break;
		}
		default:
			break;
	}			
}

void YourMove(int *nCPhp, int nPhp, int *nPdmg, int *nPheal, int *nHv, int *nDMGv, int *nDMGv2, int *nHvP, int *nDMGvP, int nChoice, int *nDefeat){

		switch (nChoice){
	
			case 0:
				*nDefeat = 1;
				break;
			
			case 1:
				*nPheal += *nHv;
				break;
			
			case 2:
				*nHv += *nHvP; // make a new varaible for adding HV and DMGv
				*nDMGv += *nDMGvP;
				break;
				
			case 3:
				*nPdmg += *nDMGv; 
				break;
			
			case 4:
				*nPdmg += *nDMGv2; //make new value where it deals more but u hurt yourself | Hurtyourself  = different variable 
				*nCPhp -= nPhp * 0.25;
				break;		
		}
}

int StrikeFirst(int nCount)
{
	
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

				default: 
					break;
			}
	return 0;
}

void LevelUp(int *nPhp, int nTxp, int *nLevel){

	char cCont;

	if (nTxp >= 3000 * *nLevel){
		system("cls");
		do{
			*nLevel += 1;
			*nPhp += 25;
			printf(".      .                           .        .     .             /      .\n");
			printf(" |      /       ___  _   __   ___   |        /     / \\,___,      |      |\n");
			printf(" |      |     .'   ` |   /  .'   `  |        |     | |    \\      |      |\n");
			printf(" |      |     |----' `  /   |----'  |        |     | |    |      |      |\n");
			printf(" |      /---/ `.___,  \\/    `.___, /\\__       `._.'  |`---'      `      |\n");
			printf(" `                                                   \\           '      `\n");
			printf("------------------------------------------------------------------------------------\n");
			printf("\t\tLevel [%d]\n\t\t+25 HP\n", *nLevel);
			printf("\n\t\tInput X to continue \n");
			printf("\n\t\t>");
			scanf(" %c", &cCont);
			system("cls");
		} while(cCont != 'X' && cCont != 'x' );

	}

}

void Battle1 (int nDefeat, int *nPhp, int nPdmg, int *nLevel, int *nXP, int *nTxp, int nPheal, int nHv, int nDMGv, int nDMGv2, int nHvP, int nDMGvP, int *nCurrentFloor)
{ 

	int nCPhp, nCEhp, nCPdmg, nCEdmg, nStrike, nCount = 1, nMphp, nMehp, nCpheal, nCeheal, nEnemy = 1; 
	char cCont;

	if (*nCurrentFloor < 1) *nCurrentFloor = 1;
	nMphp = *nPhp;
	nMehp = 100;
	nCPhp = *nPhp;
	nCEhp = 100;
	nCPdmg = nPdmg;
	nCEdmg = 0;
	nCpheal = nPheal;
	nCeheal = 0; 

	do {
		srand(time(NULL));
		int nChoice = 0;
		nStrike = StrikeFirst(nCount);
	do {
		BattleLayout(nCPhp, nCEhp, nCPdmg, nCEdmg, *nLevel, *nXP, *nTxp, *nCurrentFloor, nStrike, nCount, nMphp, nMehp, nCpheal, nCeheal);
		nCPdmg = nPdmg; //Resets the values
		nCEdmg = 0;
		nCpheal = nPheal;
		nCeheal = 0;
		printf("\tYour Move \n\t>");
		scanf("%d", &nChoice);
		system("cls");
		if (nChoice < 0 || nChoice > 4) printf("Warning: Invalid Input \n--------------------------------------\n");
	} while (!(nChoice >= 0 && nChoice <= 4));

		YourMove(&nCPhp, *nPhp, &nCPdmg, &nCpheal, &nHv, &nDMGv, &nDMGv2, &nHvP, &nDMGvP, nChoice, &nDefeat);
		EnemyMove(&nCEhp, &nCEdmg, &nCeheal, nEnemy);
					
		nCPhp -= nCEdmg;
		nCEhp -= nCPdmg;
		nCount++;

		if (nCPhp < 0) nCPhp = 0;
		if (nCEhp < 0) nCEhp = 0;
		system("cls");


		switch (nStrike) {// *50/50 chance to whoever strikes first

			case 1:
				if (nCPhp <= 0 || nDefeat == 1) {
					do {
						if (*nCurrentFloor <= 1) *nCurrentFloor = 1;
						BattleLayout(nCPhp, nCEhp, nCPdmg, nCEdmg, *nLevel, *nXP, *nTxp, *nCurrentFloor, nStrike, nCount, nMphp, nMehp, nCpheal, nCeheal);
						printf("\n\t\tEnemy Wins");
						printf("\n\t\tInput X to continue \n");
						printf("\n\t\t>");
						scanf(" %c", &cCont);
						system("cls");
					} while(cCont != 'X' && cCont != 'x' );
					nDefeat = 1;
				}

				else if (nCEhp <= 0){
					do {
						*nXP += 100;
						*nTxp += 100;
						if (*nCurrentFloor <= 1) *nCurrentFloor = 2;
						BattleLayout(nCPhp, nCEhp, nCPdmg, nCEdmg, *nLevel, *nXP, *nTxp, *nCurrentFloor, nStrike, nCount, nMphp, nMehp, nCpheal, nCeheal);
						printf("\n\t\tYou Win!");
						printf("\n\t\t+100XP!");
						printf("\n\t\tInput X to continue \n");
						printf("\n\t\t>");
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
						*nTxp += 100;
						if (*nCurrentFloor <= 1) *nCurrentFloor = 2;
						BattleLayout(nCPhp, nCEhp, nCPdmg, nCEdmg, *nLevel, *nXP, *nTxp, *nCurrentFloor, nStrike, nCount, nMphp, nMehp, nCpheal, nCeheal);
						printf("\n\t\tYou Win!");
						printf("\n\t\t+100XP!");
						printf("\n\t\tInput X to continue \n");
						printf("\n\t\t>");
						scanf(" %c", &cCont);
						system("cls");
					} while(cCont != 'X' && cCont != 'x' );
					nDefeat = 1;
				}

				else if (nCPhp <= 0 || nDefeat == 1) {
					do {
						if (*nCurrentFloor <= 1) *nCurrentFloor = 1;
						BattleLayout(nCPhp, nCEhp, nCPdmg, nCEdmg, *nLevel, *nXP, *nTxp, *nCurrentFloor, nStrike, nCount, nMphp, nMehp, nCpheal, nCeheal);
						printf("\n\t\tEnemy Wins");
						printf("\n\t\tInput X to continue \n");
						printf("\n\t\t>");
						scanf(" %c", &cCont);
						system("cls");
					} while(cCont != 'X' && cCont != 'x' );
					nDefeat = 1;
				}
				break;
		}
		nCPhp += nCpheal;
		nCEhp += nCeheal;
		if (nMphp < nCPhp) nCPhp = nMphp;
		if (nMehp < nCEhp) nCEhp = nMehp;
	} while (nDefeat == 0);

	LevelUp(nPhp, *nTxp, nLevel);

}

void Battle2 (int nDefeat, int *nPhp, int nPdmg, int *nLevel, int *nXP, int *nTxp, int nPheal, int nHv, int nDMGv, int nDMGv2, int nHvP, int nDMGvP, int *nCurrentFloor)
{ 

	int nCPhp, nCEhp, nCPdmg, nCEdmg, nStrike, nCount = 1, nMphp, nMehp, nCpheal, nCeheal, nEnemy = 2; 
	char cCont;

	if (*nCurrentFloor < 2) *nCurrentFloor = 2;
	nMphp = *nPhp;
	nMehp = 150;
	nCPhp = *nPhp;
	nCEhp = 150;
	nCPdmg = nPdmg;
	nCEdmg = 0;
	nCpheal = nPheal;
	nCeheal = 0; 

	do {
		srand(time(NULL));
		int nChoice = 0;
		nStrike = StrikeFirst(nCount);
	do {
		BattleLayout(nCPhp, nCEhp, nCPdmg, nCEdmg, *nLevel, *nXP, *nTxp, *nCurrentFloor, nStrike, nCount, nMphp, nMehp, nCpheal, nCeheal);
		nCPdmg = nPdmg; //Resets the values
		nCEdmg = 0;
		nCpheal = nPheal;
		nCeheal = 0;
		printf("\tYour Move \n\t>");
		scanf("%d", &nChoice);
		system("cls");
		if (nChoice < 0 || nChoice > 4) printf("Warning: Invalid Input \n--------------------------------------\n");
	} while (!(nChoice >= 0 && nChoice <= 4));

		YourMove(&nCPhp, *nPhp, &nCPdmg, &nCpheal, &nHv, &nDMGv, &nDMGv2, &nHvP, &nDMGvP, nChoice, &nDefeat);
		EnemyMove(&nCEhp, &nCEdmg, &nCeheal, nEnemy);
					
		nCPhp -= nCEdmg;
		nCEhp -= nCPdmg;
		nCount++;

		if (nCPhp < 0) nCPhp = 0;
		if (nCEhp < 0) nCEhp = 0;
		system("cls");


		switch (nStrike) {// *50/50 chance to whoever strikes first

			case 1:
				if (nCPhp <= 0 || nDefeat == 1) {
					do {
						if (*nCurrentFloor <= 2) *nCurrentFloor = 2;
						BattleLayout(nCPhp, nCEhp, nCPdmg, nCEdmg, *nLevel, *nXP, *nTxp, *nCurrentFloor, nStrike, nCount, nMphp, nMehp, nCpheal, nCeheal);
						printf("\n\t\tEnemy Wins");
						printf("\n\t\tInput X to continue \n");
						printf("\n\t\t>");
						scanf(" %c", &cCont);
						system("cls");
					} while(cCont != 'X' && cCont != 'x' );
					nDefeat = 1;
				}

				else if (nCEhp <= 0){
					do {
						*nXP += 300;
						*nTxp += 300;
						if (*nCurrentFloor <= 2) *nCurrentFloor = 3;
						BattleLayout(nCPhp, nCEhp, nCPdmg, nCEdmg, *nLevel, *nXP, *nTxp, *nCurrentFloor, nStrike, nCount, nMphp, nMehp, nCpheal, nCeheal);
						printf("\n\t\tYou Win!");
						printf("\n\t\t+300XP!");
						printf("\n\t\tInput X to continue \n");
						printf("\n\t\t>");
						scanf(" %c", &cCont);
						system("cls");
					} while(cCont != 'X' && cCont != 'x' );
					nDefeat = 1;
				}
				break;

			case 2:
				if (nCEhp <= 0){
					do {
						*nXP += 300;
						*nTxp += 300;
						if (*nCurrentFloor <= 2) *nCurrentFloor = 3;
						BattleLayout(nCPhp, nCEhp, nCPdmg, nCEdmg, *nLevel, *nXP, *nTxp, *nCurrentFloor, nStrike, nCount, nMphp, nMehp, nCpheal, nCeheal);
						printf("\n\t\tYou Win!");
						printf("\n\t\t+300XP!");
						printf("\n\t\tInput X to continue \n");
						printf("\n\t\t>");
						scanf(" %c", &cCont);
						system("cls");
					} while(cCont != 'X' && cCont != 'x' );
					nDefeat = 1;
				}

				else if (nCPhp <= 0 || nDefeat == 1) {
					do {
						if (*nCurrentFloor <= 2) *nCurrentFloor = 2;
						BattleLayout(nCPhp, nCEhp, nCPdmg, nCEdmg, *nLevel, *nXP, *nTxp, *nCurrentFloor, nStrike, nCount, nMphp, nMehp, nCpheal, nCeheal);
						printf("\n\t\tEnemy Wins");
						printf("\n\t\tInput X to continue \n");
						printf("\n\t\t>");
						scanf(" %c", &cCont);
						system("cls");
					} while(cCont != 'X' && cCont != 'x' );
					nDefeat = 1;
				}
				break;
		}
		nCPhp += nCpheal;
		nCEhp += nCeheal;
		if (nMphp < nCPhp) nCPhp = nMphp;
		if (nMehp < nCEhp) nCEhp = nMehp;
	} while (nDefeat == 0);

	LevelUp(nPhp, *nTxp, nLevel);

}

void Battle3 (int nDefeat, int *nPhp, int nPdmg, int *nLevel, int *nXP, int *nTxp, int nPheal, int nHv, int nDMGv, int nDMGv2, int nHvP, int nDMGvP, int *nCurrentFloor)
{ 

	int nCPhp, nCEhp, nCPdmg, nCEdmg, nStrike, nCount = 1, nMphp, nMehp, nCpheal, nCeheal, nEnemy = 3; //change this for each battle
	char cCont;

	if (*nCurrentFloor < 3) *nCurrentFloor = 3; //change
	nMphp = *nPhp;
	nMehp = 200;
	nCPhp = *nPhp;
	nCEhp = 200;
	nCPdmg = nPdmg;
	nCEdmg = 0;
	nCpheal = nPheal;
	nCeheal = 0; 

	do {
		srand(time(NULL));
		int nChoice = 0;
		nStrike = StrikeFirst(nCount);
	do {
		BattleLayout(nCPhp, nCEhp, nCPdmg, nCEdmg, *nLevel, *nXP, *nTxp, *nCurrentFloor, nStrike, nCount, nMphp, nMehp, nCpheal, nCeheal);
		nCPdmg = nPdmg; //Resets the values
		nCEdmg = 0;
		nCpheal = nPheal;
		nCeheal = 0;
		printf("\tYour Move \n\t>");
		scanf("%d", &nChoice);
		system("cls");
		if (nChoice < 0 || nChoice > 4) printf("Warning: Invalid Input \n--------------------------------------\n");
	} while (!(nChoice >= 0 && nChoice <= 4));

		YourMove(&nCPhp, *nPhp, &nCPdmg, &nCpheal, &nHv, &nDMGv, &nDMGv2, &nHvP, &nDMGvP, nChoice, &nDefeat);
		EnemyMove(&nCEhp, &nCEdmg, &nCeheal, nEnemy);
					
		nCPhp -= nCEdmg;
		nCEhp -= nCPdmg;
		nCount++;

		if (nCPhp < 0) nCPhp = 0;
		if (nCEhp < 0) nCEhp = 0;
		system("cls");


		switch (nStrike) {// *50/50 chance to whoever strikes first

			case 1:
				if (nCPhp <= 0 || nDefeat == 1) {
					do {
						if (*nCurrentFloor <= 3) *nCurrentFloor = 3;//change
						BattleLayout(nCPhp, nCEhp, nCPdmg, nCEdmg, *nLevel, *nXP, *nTxp, *nCurrentFloor, nStrike, nCount, nMphp, nMehp, nCpheal, nCeheal);
						printf("\n\t\tEnemy Wins");
						printf("\n\t\tInput X to continue \n");
						printf("\n\t\t>");
						scanf(" %c", &cCont);
						system("cls");
					} while(cCont != 'X' && cCont != 'x' );
					nDefeat = 1;
				}

				else if (nCEhp <= 0){
					do {
						*nXP += 600;
						*nTxp += 600;
						if (*nCurrentFloor <= 3) *nCurrentFloor = 4;
						BattleLayout(nCPhp, nCEhp, nCPdmg, nCEdmg, *nLevel, *nXP, *nTxp, *nCurrentFloor, nStrike, nCount, nMphp, nMehp, nCpheal, nCeheal);
						printf("\n\t\tYou Win!");
						printf("\n\t\t+300XP!");
						printf("\n\t\tInput X to continue \n");
						printf("\n\t\t>");
						scanf(" %c", &cCont);
						system("cls");
					} while(cCont != 'X' && cCont != 'x' );
					nDefeat = 1;
				}
				break;

			case 2:
				if (nCEhp <= 0){
					do {
						*nXP += 300;
						*nTxp += 300;
						if (*nCurrentFloor <= 3) *nCurrentFloor = 4;
						BattleLayout(nCPhp, nCEhp, nCPdmg, nCEdmg, *nLevel, *nXP, *nTxp, *nCurrentFloor, nStrike, nCount, nMphp, nMehp, nCpheal, nCeheal);
						printf("\n\t\tYou Win!");
						printf("\n\t\t+300XP!");
						printf("\n\t\tInput X to continue \n");
						printf("\n\t\t>");
						scanf(" %c", &cCont);
						system("cls");
					} while(cCont != 'X' && cCont != 'x' );
					nDefeat = 1;
				}

				else if (nCPhp <= 0 || nDefeat == 1) {
					do {
						if (*nCurrentFloor <= 3) *nCurrentFloor = 3;
						BattleLayout(nCPhp, nCEhp, nCPdmg, nCEdmg, *nLevel, *nXP, *nTxp, *nCurrentFloor, nStrike, nCount, nMphp, nMehp, nCpheal, nCeheal);
						printf("\n\t\tEnemy Wins");
						printf("\n\t\tInput X to continue \n");
						printf("\n\t\t>");
						scanf(" %c", &cCont);
						system("cls");
					} while(cCont != 'X' && cCont != 'x' );
					nDefeat = 1;
				}
				break;
		}
		nCPhp += nCpheal;
		nCEhp += nCeheal;
		if (nMphp < nCPhp) nCPhp = nMphp;
		if (nMehp < nCEhp) nCEhp = nMehp;
	} while (nDefeat == 0);

	LevelUp(nPhp, *nTxp, nLevel);

}

void Battle4 (int nDefeat, int *nPhp, int nPdmg, int *nLevel, int *nXP, int *nTxp, int nPheal, int nHv, int nDMGv, int nDMGv2, int nHvP, int nDMGvP, int *nCurrentFloor)
{ 

	int nCPhp, nCEhp, nCPdmg, nCEdmg, nStrike, nCount = 1, nMphp, nMehp, nCpheal, nCeheal, nEnemy = 4; //change this for each battle
	char cCont;

	if (*nCurrentFloor < 4) *nCurrentFloor = 4; //change
	nMphp = *nPhp;
	nMehp = 250;
	nCPhp = *nPhp;
	nCEhp = 250;
	nCPdmg = nPdmg;
	nCEdmg = 0;
	nCpheal = nPheal;
	nCeheal = 0; 

	do {
		srand(time(NULL));
		int nChoice = 0;
		nStrike = StrikeFirst(nCount);
	do {
		BattleLayout(nCPhp, nCEhp, nCPdmg, nCEdmg, *nLevel, *nXP, *nTxp, *nCurrentFloor, nStrike, nCount, nMphp, nMehp, nCpheal, nCeheal);
		nCPdmg = nPdmg; //Resets the values
		nCEdmg = 0;
		nCpheal = nPheal;
		nCeheal = 0;
		printf("\tYour Move \n\t>");
		scanf("%d", &nChoice);
		system("cls");
		if (nChoice < 0 || nChoice > 4) printf("Warning: Invalid Input \n--------------------------------------\n");
	} while (!(nChoice >= 0 && nChoice <= 4));

		YourMove(&nCPhp, *nPhp, &nCPdmg, &nCpheal, &nHv, &nDMGv, &nDMGv2, &nHvP, &nDMGvP, nChoice, &nDefeat);
		EnemyMove(&nCEhp, &nCEdmg, &nCeheal, nEnemy);
					
		nCPhp -= nCEdmg;
		nCEhp -= nCPdmg;
		nCount++;

		if (nCPhp < 0) nCPhp = 0;
		if (nCEhp < 0) nCEhp = 0;
		system("cls");


		switch (nStrike) {// *50/50 chance to whoever strikes first

			case 1:
				if (nCPhp <= 0 || nDefeat == 1) {
					do {
						if (*nCurrentFloor <= 4) *nCurrentFloor = 4;//change
						BattleLayout(nCPhp, nCEhp, nCPdmg, nCEdmg, *nLevel, *nXP, *nTxp, *nCurrentFloor, nStrike, nCount, nMphp, nMehp, nCpheal, nCeheal);
						printf("\n\t\tEnemy Wins");
						printf("\n\t\tInput X to continue \n");
						printf("\n\t\t>");
						scanf(" %c", &cCont);
						system("cls");
					} while(cCont != 'X' && cCont != 'x' );
					nDefeat = 1;
				}

				else if (nCEhp <= 0){
					do {
						*nXP += 800;
						*nTxp += 800;
						if (*nCurrentFloor <= 4) *nCurrentFloor = 5;
						BattleLayout(nCPhp, nCEhp, nCPdmg, nCEdmg, *nLevel, *nXP, *nTxp, *nCurrentFloor, nStrike, nCount, nMphp, nMehp, nCpheal, nCeheal);
						printf("\n\t\tYou Win!");
						printf("\n\t\t+300XP!");
						printf("\n\t\tInput X to continue \n");
						printf("\n\t\t>");
						scanf(" %c", &cCont);
						system("cls");
					} while(cCont != 'X' && cCont != 'x' );
					nDefeat = 1;
				}
				break;

			case 2:
				if (nCEhp <= 0){
					do {
						*nXP += 800;
						*nTxp += 800;
						if (*nCurrentFloor <= 4) *nCurrentFloor = 5;
						BattleLayout(nCPhp, nCEhp, nCPdmg, nCEdmg, *nLevel, *nXP, *nTxp, *nCurrentFloor, nStrike, nCount, nMphp, nMehp, nCpheal, nCeheal);
						printf("\n\t\tYou Win!");
						printf("\n\t\t+300XP!");
						printf("\n\t\tInput X to continue \n");
						printf("\n\t\t>");
						scanf(" %c", &cCont);
						system("cls");
					} while(cCont != 'X' && cCont != 'x' );
					nDefeat = 1;
				}

				else if (nCPhp <= 0 || nDefeat == 1) {
					do {
						if (*nCurrentFloor <= 4) *nCurrentFloor = 4;
						BattleLayout(nCPhp, nCEhp, nCPdmg, nCEdmg, *nLevel, *nXP, *nTxp, *nCurrentFloor, nStrike, nCount, nMphp, nMehp, nCpheal, nCeheal);
						printf("\n\t\tEnemy Wins");
						printf("\n\t\tInput X to continue \n");
						printf("\n\t\t>");
						scanf(" %c", &cCont);
						system("cls");
					} while(cCont != 'X' && cCont != 'x' );
					nDefeat = 1;
				}
				break;
		}
		nCPhp += nCpheal;
		nCEhp += nCeheal;
		if (nMphp < nCPhp) nCPhp = nMphp;
		if (nMehp < nCEhp) nCEhp = nMehp;
	} while (nDefeat == 0);

	LevelUp(nPhp, *nTxp, nLevel);

}

void Battle5 (int nDefeat, int *nPhp, int nPdmg, int *nLevel, int *nXP, int *nTxp, int nPheal, int nHv, int nDMGv, int nDMGv2, int nHvP, int nDMGvP, int *nCurrentFloor)
{ 

	int nCPhp, nCEhp, nCPdmg, nCEdmg, nStrike, nCount = 1, nMphp, nMehp, nCpheal, nCeheal, nEnemy = 5; //change this for each battle
	char cCont;

	if (*nCurrentFloor < 5) *nCurrentFloor = 5; //change
	nMphp = *nPhp;
	nMehp = 300;
	nCPhp = *nPhp;
	nCEhp = 300;
	nCPdmg = nPdmg;
	nCEdmg = 0;
	nCpheal = nPheal;
	nCeheal = 0; 

	do {
		srand(time(NULL));
		int nChoice = 0;
		nStrike = StrikeFirst(nCount);
	do {
		BattleLayout(nCPhp, nCEhp, nCPdmg, nCEdmg, *nLevel, *nXP, *nTxp, *nCurrentFloor, nStrike, nCount, nMphp, nMehp, nCpheal, nCeheal);
		nCPdmg = nPdmg; //Resets the values
		nCEdmg = 0;
		nCpheal = nPheal;
		nCeheal = 0;
		printf("\tYour Move \n\t>");
		scanf("%d", &nChoice);
		system("cls");
		if (nChoice < 0 || nChoice > 4) printf("Warning: Invalid Input \n--------------------------------------\n");
	} while (!(nChoice >= 0 && nChoice <= 4));

		YourMove(&nCPhp, *nPhp, &nCPdmg, &nCpheal, &nHv, &nDMGv, &nDMGv2, &nHvP, &nDMGvP, nChoice, &nDefeat);
		EnemyMove(&nCEhp, &nCEdmg, &nCeheal, nEnemy);
					
		nCPhp -= nCEdmg;
		nCEhp -= nCPdmg;
		nCount++;

		if (nCPhp < 0) nCPhp = 0;
		if (nCEhp < 0) nCEhp = 0;
		system("cls");


		switch (nStrike) {// *50/50 chance to whoever strikes first

			case 1:
				if (nCPhp <= 0 || nDefeat == 1) {
					do {
						if (*nCurrentFloor <= 5) *nCurrentFloor = 5;//change
						BattleLayout(nCPhp, nCEhp, nCPdmg, nCEdmg, *nLevel, *nXP, *nTxp, *nCurrentFloor, nStrike, nCount, nMphp, nMehp, nCpheal, nCeheal);
						printf("\n\t\tEnemy Wins");
						printf("\n\t\tInput X to continue \n");
						printf("\n\t\t>");
						scanf(" %c", &cCont);
						system("cls");
					} while(cCont != 'X' && cCont != 'x' );
					nDefeat = 1;
				}

				else if (nCEhp <= 0){
					do {
						*nXP += 1000;
						*nTxp += 1000;
						if (*nCurrentFloor <= 5) *nCurrentFloor = 6;
						BattleLayout(nCPhp, nCEhp, nCPdmg, nCEdmg, *nLevel, *nXP, *nTxp, *nCurrentFloor, nStrike, nCount, nMphp, nMehp, nCpheal, nCeheal);
						printf("\n\t\tYou Win!");
						printf("\n\t\t+300XP!");
						printf("\n\t\tInput X to continue \n");
						printf("\n\t\t>");
						scanf(" %c", &cCont);
						system("cls");
					} while(cCont != 'X' && cCont != 'x' );
					nDefeat = 1;
				}
				break;

			case 2:
				if (nCEhp <= 0){
					do {
						*nXP += 1000;
						*nTxp += 1000;
						if (*nCurrentFloor <= 5) *nCurrentFloor = 6;
						BattleLayout(nCPhp, nCEhp, nCPdmg, nCEdmg, *nLevel, *nXP, *nTxp, *nCurrentFloor, nStrike, nCount, nMphp, nMehp, nCpheal, nCeheal);
						printf("\n\t\tYou Win!");
						printf("\n\t\t+300XP!");
						printf("\n\t\tInput X to continue \n");
						printf("\n\t\t>");
						scanf(" %c", &cCont);
						system("cls");
					} while(cCont != 'X' && cCont != 'x' );
					nDefeat = 1;
				}

				else if (nCPhp <= 0 || nDefeat == 1) {
					do {
						if (*nCurrentFloor <= 5) *nCurrentFloor = 5;
						BattleLayout(nCPhp, nCEhp, nCPdmg, nCEdmg, *nLevel, *nXP, *nTxp, *nCurrentFloor, nStrike, nCount, nMphp, nMehp, nCpheal, nCeheal);
						printf("\n\t\tEnemy Wins");
						printf("\n\t\tInput X to continue \n");
						printf("\n\t\t>");
						scanf(" %c", &cCont);
						system("cls");
					} while(cCont != 'X' && cCont != 'x' );
					nDefeat = 1;
				}
				break;
		}
		nCPhp += nCpheal;
		nCEhp += nCeheal;
		if (nMphp < nCPhp) nCPhp = nMphp;
		if (nMehp < nCEhp) nCEhp = nMehp;
	} while (nDefeat == 0);

	LevelUp(nPhp, *nTxp, nLevel);

}

void Battle6 (int nDefeat, int *nPhp, int nPdmg, int *nLevel, int *nXP, int *nTxp, int nPheal, int nHv, int nDMGv, int nDMGv2, int nHvP, int nDMGvP, int *nCurrentFloor)
{ 

	int nCPhp, nCEhp, nCPdmg, nCEdmg, nStrike, nCount = 1, nMphp, nMehp, nCpheal, nCeheal, nEnemy = 6; //change this for each battle
	char cCont;

	if (*nCurrentFloor < 6) *nCurrentFloor = 6; //change
	nMphp = *nPhp;
	nMehp = 1000;
	nCPhp = *nPhp;
	nCEhp = 1000;
	nCPdmg = nPdmg;
	nCEdmg = 0;
	nCpheal = nPheal;
	nCeheal = 0; 

	if (*nCurrentFloor <= 6) {
		do {
		Boss();
		printf("\nCongratulations for making it here!...Now face me, your final trial, and prove to me you can be this tower's tycoon!");
		printf("\nInput X to continue >");
		scanf(" %c", &cCont);
		system("cls");
		} while(cCont != 'X' && cCont != 'x' );
	}
	do {
		srand(time(NULL));
		int nChoice = 0;
		nStrike = StrikeFirst(nCount);
	do {
		BattleLayout(nCPhp, nCEhp, nCPdmg, nCEdmg, *nLevel, *nXP, *nTxp, *nCurrentFloor, nStrike, nCount, nMphp, nMehp, nCpheal, nCeheal);
		nCPdmg = nPdmg; //Resets the values
		nCEdmg = 0;
		nCpheal = nPheal;
		nCeheal = 0;
		printf("\tYour Move \n\t>");
		scanf("%d", &nChoice);
		system("cls");
		if (nChoice < 0 || nChoice > 4) printf("Warning: Invalid Input \n--------------------------------------\n");
	} while (!(nChoice >= 0 && nChoice <= 4));

		YourMove(&nCPhp, *nPhp, &nCPdmg, &nCpheal, &nHv, &nDMGv, &nDMGv2, &nHvP, &nDMGvP, nChoice, &nDefeat);
		EnemyMove(&nCEhp, &nCEdmg, &nCeheal, nEnemy);
					
		nCPhp -= nCEdmg;
		nCEhp -= nCPdmg;
		nCount++;

		if (nCPhp < 0) nCPhp = 0;
		if (nCEhp < 0) nCEhp = 0;
		system("cls");


		switch (nStrike) {// *50/50 chance to whoever strikes first

			case 1:
				if (nCPhp <= 0 || nDefeat == 1) {
					do {
						if (*nCurrentFloor <= 6) *nCurrentFloor = 6;//change
						BattleLayout(nCPhp, nCEhp, nCPdmg, nCEdmg, *nLevel, *nXP, *nTxp, *nCurrentFloor, nStrike, nCount, nMphp, nMehp, nCpheal, nCeheal);
						printf("\n\t\tEnemy Wins");
						printf("\n\t\tNice Try kid");
						printf("\n\t\tInput X to continue \n");
						printf("\n\t\t>");
						scanf(" %c", &cCont);
						system("cls");
					} while(cCont != 'X' && cCont != 'x' );
					nDefeat = 1;
				}

				else if (nCEhp <= 0){
					do {
						*nXP += 2000;
						*nTxp += 2000;
						BattleLayout(nCPhp, nCEhp, nCPdmg, nCEdmg, *nLevel, *nXP, *nTxp, *nCurrentFloor, nStrike, nCount, nMphp, nMehp, nCpheal, nCeheal);
						printf("\n\t\tYou Win!");
						printf("\n\t\tWell then...");
						printf("\n\t\t+300XP!");
						printf("\n\t\tInput X to continue \n");
						printf("\n\t\t>");
						scanf(" %c", &cCont);
						system("cls");
					} while(cCont != 'X' && cCont != 'x' );

					if (*nCurrentFloor <= 6) {
						do {
							if (*nCurrentFloor <= 6) *nCurrentFloor = 7;
							Boss();
							printf("\nDamn....Well played kid, the tower is all yours! but if you ever want to fight to me again just drop by.\n");
							printf("\nInput X to continue > ");
							scanf(" %c", &cCont);
							system("cls");
						} while(cCont != 'X' && cCont != 'x' );
					}
					nDefeat = 1;	
				}
				break;

			case 2:
				if (nCEhp <= 0){
					do {
						*nXP += 2000;
						*nTxp += 2000;
						BattleLayout(nCPhp, nCEhp, nCPdmg, nCEdmg, *nLevel, *nXP, *nTxp, *nCurrentFloor, nStrike, nCount, nMphp, nMehp, nCpheal, nCeheal);
						printf("\n\t\tYou Win!");
						printf("\n\t\tWell then...");
						printf("\n\t\t+300XP!");
						printf("\n\t\tInput X to continue \n");
						printf("\n\t\t>");
						scanf(" %c", &cCont);
						system("cls");
					} while(cCont != 'X' && cCont != 'x' );

					if (*nCurrentFloor <= 6) {
						do {
							if (*nCurrentFloor <= 6) *nCurrentFloor = 7;
							Boss();
							printf("\nDamn....Well played kid, the tower is all yours! but if you ever want to fight to me again just drop by.\n");
							printf("\nInput X to continue > ");
							scanf(" %c", &cCont);
							system("cls");
						} while(cCont != 'X' && cCont != 'x' );
					}
					nDefeat = 1;
				}	
				else if (nCPhp <= 0 || nDefeat == 1) {
					do {
						if (*nCurrentFloor <= 6) *nCurrentFloor = 6;
						BattleLayout(nCPhp, nCEhp, nCPdmg, nCEdmg, *nLevel, *nXP, *nTxp, *nCurrentFloor, nStrike, nCount, nMphp, nMehp, nCpheal, nCeheal);
						printf("\n\t\tEnemy Wins");
						printf("\n\t\tNice Try kid");
						printf("\n\t\tInput X to continue \n");
						printf("\n\t\t>");
						scanf(" %c", &cCont);
						system("cls");
					} while(cCont != 'X' && cCont != 'x' );

					nDefeat = 1;
				}
				break;
		}
		nCPhp += nCpheal;
		nCEhp += nCeheal;
		if (nMphp < nCPhp) nCPhp = nMphp;
		if (nMehp < nCEhp) nCEhp = nMehp;
	} while (nDefeat == 0);

	LevelUp(nPhp, *nTxp, nLevel);
}

 
void TowerLevel(int *nPhp, int nPdmg, int nPheal, int nHv, int nDMGv, int nDMGv2, int nHvP, int nDMGvP, int *nLevel, int *nXP, int *nTxp, int *nCurrentFloor)
{
	int nDefeat = 0;
	int nChoice = 0;

	do {
		system("cls");
		if (nChoice > *nCurrentFloor) printf("Beat the previous level to proceed\n");
		Levels();
		DisplayStats(*nLevel, *nXP, *nTxp, *nCurrentFloor);
		printf("Choose a Level"); 
		printf("---> ");
		scanf("%d", &nChoice);
		} while (!(nChoice == 1 || nChoice == 2 || nChoice == 3 || nChoice == 4 || nChoice == 5 || nChoice == 6 || nChoice == 7) || (nChoice > *nCurrentFloor && !(nChoice == 7))); ; 
			//last argument makes sure that even when nCurrentFloor is 0, it will sitll allow it to do level 1

		switch(nChoice) {
	        case 1: system("cls"); Battle1(nDefeat, nPhp, nPdmg, nLevel, nXP, nTxp, nPheal, nHv, nDMGv, nDMGv2, nHvP, nDMGvP, nCurrentFloor); break; 
	        case 2: system("cls"); Battle2(nDefeat, nPhp, nPdmg, nLevel, nXP, nTxp, nPheal, nHv, nDMGv, nDMGv2, nHvP, nDMGvP, nCurrentFloor); break; 
	        case 3: system("cls"); Battle3(nDefeat, nPhp, nPdmg, nLevel, nXP, nTxp, nPheal, nHv, nDMGv, nDMGv2, nHvP, nDMGvP, nCurrentFloor); break; 
	        case 4: system("cls"); Battle4(nDefeat, nPhp, nPdmg, nLevel, nXP, nTxp, nPheal, nHv, nDMGv, nDMGv2, nHvP, nDMGvP, nCurrentFloor); break; 
	        case 5: system("cls"); Battle5(nDefeat, nPhp, nPdmg, nLevel, nXP, nTxp, nPheal, nHv, nDMGv, nDMGv2, nHvP, nDMGvP, nCurrentFloor); break; 
	        case 6: system("cls"); Battle6(nDefeat, nPhp, nPdmg, nLevel, nXP, nTxp, nPheal, nHv, nDMGv, nDMGv2, nHvP, nDMGvP, nCurrentFloor); break; 
	        case 7: system("cls"); break;	       
    }
}

void Store(int *nPhp, int *nPdmg, int *nHv, int *nDMGv, int *nDMGv2, int *nHvP, int *nDMGvP, int nLevel, int *nXP, int nTxp, int nCurrentFloor)
{
	int nItemNo = 0, nBuy = 0, nPrice = 0;;
	char cConfirm;
	
    do {
        do {
        	StoreItems();
			DisplayStats(nLevel, *nXP, nTxp, nCurrentFloor);
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
			DisplayStats(nLevel, *nXP, nTxp, nCurrentFloor);
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
						*nHv += nBuy * 10;
						break;
		
					case 2:
						*nDMGvP += nBuy * 15;
						*nHvP += nBuy * 10;
						break;
		
					case 3: 
						*nDMGv += nBuy * 15;
						break;
		
					case 4:
						*nDMGv2 += nBuy * 20;//bigger attack but demerits your next attak
						break;
				}	
	  	   		*nXP -= nPrice;
	    	}
      	}
      	else printf("WARNING -------> Insufficient XP\n"); 
      }
	} while (nItemNo != 5);
} 

void Moves(int nPhp, int nPdmg, int nHv, int nDMGv, int nDMGv2, int nHvP, int nDMGvP, int nLevel, int nXP, int nTxp, int nCurrentFloor){
	char cChoice;
	 
	do {
	printf(" __   __                                 \n");
	printf(" |    |    __.  _   __   ___    ____     \n");
	printf(" |\\  /|  .'   \\ |   /  .'   `  (         \n");
	printf(" | \\/ |  |    | `  /   |----'  `--.      \n");
	printf(" /    /   `._.'  \\/    `.___, \\___.'     \n");
		DisplayStats(nLevel, nXP, nTxp, nCurrentFloor);
		DisplayMoves(nPhp, nPdmg, nHv, nDMGv, nDMGv2, nHvP, nDMGvP);
		printf("\nPress [X] to go back\n");
		printf("--->");
		scanf(" %c", &cChoice);
		system("cls");
	} while (cChoice != 'X' && cChoice != 'x');
}

void Options(int *nSentinel, int *nDefeat, int *nPhp, int *nPdmg, int *nPheal, int *nHv, int *nDMGv, int *nDMGv2, int *nHvP, int *nDMGvP, int *nLevel, int *nXP, int *nTxp, int *nCurrentFloor)
{
	char cOptions;
	
	do {
		system("cls");
		Map();
		DisplayStats(*nLevel, *nXP, *nTxp, *nCurrentFloor);
		printf("[B]attle\t[S]tore\t\t[M]oves\t\t[Q]uit\n\n"); 
		printf("---> ");
			scanf(" %c", &cOptions);
	} while (!( cOptions == 'B' || cOptions == 'S' || cOptions == 'M' || cOptions == 'Q' || 
				cOptions == 'b' || cOptions == 's' || cOptions == 'm' || cOptions == 'q' )); 
	
	switch(cOptions) {
        case 'B': 
        case 'b': system("cls"); TowerLevel(nPhp, *nPdmg, *nPheal, *nHv, *nDMGv, *nDMGv2, *nHvP, *nDMGvP, nLevel, nXP, nTxp, nCurrentFloor); break;
        case 'S': 
        case 's': system("cls"); Store(nPhp, nPdmg, nHv, nDMGv, nDMGv2, nHvP, nDMGvP, *nLevel, nXP, *nTxp, *nCurrentFloor); break;
        case 'M': 
        case 'm': system("cls"); Moves(*nPhp, *nPdmg, *nHv, *nDMGv, *nDMGv2, *nHvP, *nDMGvP, *nLevel, *nXP, *nTxp, *nCurrentFloor); break;
        case 'Q': 
        case 'q': system("cls"); *nSentinel = 1; break;
    }
}
