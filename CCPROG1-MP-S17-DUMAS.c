#include<stdio.h>

/*
	Description: <Inspired by the book series, Game of thrones, this program takes the player into the kingdom of Westeros, 
	where the objective is to do your best in improving the economic growth of the Six Kingsdoms through trading. 
	Given only 2000 Golden Dragon (GD) and 15 days, it is up to the player decide on how the game will end.> 
	Programmed by: <Francisco Emmanuel T. Dumas> <S17B>
	Last modified: <February 07, 2022>
	[Acknowledgments: YT: thenewboston]
*/

//The PRICES of each item in each kingdom is defined here

#define WINTERFELL_SWEET_BEET 180.00
#define WINTERFELL_TIMBER 200.00
#define WINTERFELL_INTRICATE_LACE 380.00
#define WINTERFELL_INTOXICATING_PERFUME 480.00
#define WINTERFELL_PALE_AMBER_WINE 580.00
#define WINTERFELL_MYRISH_EYE 680.00
#define WINTERFELL_QOHORIK_TAPESTRY 780.00
#define WINTERFELL_VALYRIAN_STEEL 880.00

#define LYS_SWEET_BEET 183.00
#define LYS_TIMBER 280.00
#define LYS_INTRICATE_LACE 383.00
#define LYS_INTOXICATING_PERFUME 400.00
#define LYS_PALE_AMBER_WINE 584.00
#define LYS_MYRISH_EYE 682.00
#define LYS_QOHORIK_TAPESTRY 785.00
#define LYS_VALYRIAN_STEEL 883.00

#define MYR_SWEET_BEET 195.00
#define MYR_TIMBER 295.00
#define MYR_INTRICATE_LACE 350.00
#define MYR_INTOXICATING_PERFUME 493.00
#define MYR_PALE_AMBER_WINE 597.00
#define MYR_MYRISH_EYE 650.00
#define MYR_QOHORIK_TAPESTRY 796.00
#define MYR_VALYRIAN_STEEL 898.00

#define PENTOS_SWEET_BEET 190.00
#define PENTOS_TIMBER 289.00
#define PENTOS_INTRICATE_LACE 391.00
#define PENTOS_INTOXICATING_PERFUME 487.00
#define PENTOS_PALE_AMBER_WINE 550.00
#define PENTOS_MYRISH_EYE 692.00
#define PENTOS_QOHORIK_TAPESTRY 789.00
#define PENTOS_VALYRIAN_STEEL 888.00

#define QOHOR_SWEET_BEET 193.00
#define QOHOR_TIMBER 294.00
#define QOHOR_INTRICATE_LACE 388.00
#define QOHOR_INTOXICATING_PERFUME 485.00
#define QOHOR_PALE_AMBER_WINE 597.00
#define QOHOR_MYRISH_EYE 688.00
#define QOHOR_QOHORIK_TAPESTRY 700.00
#define QOHOR_VALYRIAN_STEEL 800.00

#define VOLANTIS_SWEET_BEET 100.00
#define VOLANTIS_TIMBER 299.00
#define VOLANTIS_INTRICATE_LACE 397.00
#define VOLANTIS_INTOXICATING_PERFUME 494.00
#define VOLANTIS_PALE_AMBER_WINE 580.00
#define VOLANTIS_MYRISH_EYE 699.00
#define VOLANTIS_QOHORIK_TAPESTRY 792.00
#define VOLANTIS_VALYRIAN_STEEL 887.00


//	<This function displays the WINTERFELL Interface, which includes the players inventory and the prices of all the items >

 

void Winterfell(int nSweetBeet, int nTimber, int nIntricateLace, int nIntoxicatingPerfume,
					    int nPaleAmberWine, int nMyrishEye, int nQohorikTapestry, int nValyrianSteel)
{
	printf("------------------------------------------------------------------------\n");
	printf(" __      __          ___       _             __     _ _        __\n");
	printf(" \\ \\     \\ \\        / (_)     | |           / _|   | | |      / /\n");
	printf("  \\ \\     \\ \\  /\\  / / _ _ __ | |_ ___ _ __| |_ ___| | |     / / \n");
	printf("   \\ \\     \\ \\/  \\/ / | | '_ \\| __/ _ \\ '__|  _/ _ \\ | |    / /  \n");
	printf("    \\ \\     \\  /\\  /  | | | | | ||  __/ |  | ||  __/ | |   / /   \n");
	printf("     \\_\\     \\/  \\/   |_|_| |_|\\__\\___|_|  |_| \\___|_|_|  /_/    \n");
	printf("------------------------------------------------------------------------\n");
	printf("ITEM\t WARES AND GOODS\t SELLING/BUYING PRICE\t      INVENTORY\n");
	printf("------------------------------------------------------------------------\n");
	printf("[1]\t Sweet Beet\t\t\t%2.f\t\t\t %d\n", WINTERFELL_SWEET_BEET, nSweetBeet);
	printf("[2]\t Timber\t\t\t\t%2.f [Special Item]\t %d\n", WINTERFELL_TIMBER, nTimber);
	printf("[3]\t Intricate Lace\t\t\t%2.f\t\t\t %d\n", WINTERFELL_INTRICATE_LACE, nIntricateLace);
	printf("[4]\t Intoxicating Perfume\t\t%2.f\t\t\t %d\n", WINTERFELL_INTOXICATING_PERFUME, nIntoxicatingPerfume);
	printf("[5]\t Pale Amber Wine\t\t%2.f\t\t\t %d\n", WINTERFELL_PALE_AMBER_WINE, nPaleAmberWine);
	printf("[6]\t Myrish Eye\t\t\t%2.f\t\t\t %d\n", WINTERFELL_MYRISH_EYE, nMyrishEye);
	printf("[7]\t Qohorik Tapestry\t\t%2.f\t\t\t %d\n", WINTERFELL_QOHORIK_TAPESTRY, nQohorikTapestry);
	printf("[8]\t Valyrian Steel\t\t\t%2.f\t\t\t %d\n", WINTERFELL_VALYRIAN_STEEL, nValyrianSteel);
	printf("------------------------------------------------------------------------\n");
}


//	<This function displays the LYS Interface, which includes the players inventory and the prices of all the items >


void Lys(int nSweetBeet, int nTimber, int nIntricateLace, int nIntoxicatingPerfume,
					    int nPaleAmberWine, int nMyrishEye, int nQohorikTapestry, int nValyrianSteel)
{
	printf("------------------------------------------------------------------------\n");
	printf("\t\t__       _                     __\n");
	printf("\t\t\\ \\     | |                   / /\n");
	printf("\t\t \\ \\    | |    _   _ ___     / / \n");
	printf("\t\t  \\ \\   | |   | | | / __|   / /  \n");
	printf("\t\t   \\ \\  | |___| |_| \\__ \\  / /   \n");
	printf("\t\t    \\_\\ |______\\__, |___/ /_/    \n");
	printf("\t\t                __/ |            \n");
	printf("\t\t               |___/             \n");
	printf("------------------------------------------------------------------------\n");
	printf("ITEM\t WARES AND GOODS\t SELLING/BUYING PRICE\t      INVENTORY\n");
	printf("------------------------------------------------------------------------\n");
	printf("[1]\t Sweet Beet\t\t\t%2.f\t\t\t %d\n", LYS_SWEET_BEET, nSweetBeet);
	printf("[2]\t Timber\t\t\t\t%2.f \t\t\t %d\n", LYS_TIMBER, nTimber);
	printf("[3]\t Intricate Lace\t\t\t%2.f\t\t\t %d\n", LYS_INTRICATE_LACE, nIntricateLace);
	printf("[4]\t Intoxicating Perfume\t\t%2.f [Special Item]       %d\n", LYS_INTOXICATING_PERFUME, nIntoxicatingPerfume);
	printf("[5]\t Pale Amber Wine\t\t%2.f\t\t\t %d\n", LYS_PALE_AMBER_WINE, nPaleAmberWine);
	printf("[6]\t Myrish Eye\t\t\t%2.f\t\t\t %d\n", LYS_MYRISH_EYE, nMyrishEye);
	printf("[7]\t Qohorik Tapestry\t\t%2.f\t\t\t %d\n", LYS_QOHORIK_TAPESTRY, nQohorikTapestry);
	printf("[8]\t Valyrian Steel\t\t\t%2.f\t\t\t %d\n", LYS_VALYRIAN_STEEL, nValyrianSteel);
	printf("------------------------------------------------------------------------\n");
}


//	<This function displays the MYR Interface, which includes the players inventory and the prices of all the items >


void Myr(int nSweetBeet, int nTimber, int nIntricateLace, int nIntoxicatingPerfume,
					    int nPaleAmberWine, int nMyrishEye, int nQohorikTapestry, int nValyrianSteel)
{
	printf("------------------------------------------------------------------------\n");
	printf("\t\t __        __  __                  __\n");
	printf("\t\t \\ \\      |  \\/  |                / /\n");
	printf("\t\t  \\ \\     | \\  / |_   _ _ __     / / \n");
	printf("\t\t   \\ \\    | |\\/| | | | | '__|   / /  \n");
	printf("\t\t    \\ \\   | |  | | |_| | |     / /   \n");
	printf("\t\t     \\_\\  |_|  |_|\\__, |_|    /_/    \n");
	printf("\t\t                   __/ |             \n");
	printf("\t\t                  |___/              \n");
	printf("------------------------------------------------------------------------\n");
	printf("ITEM\t WARES AND GOODS\t SELLING/BUYING PRICE\t      INVENTORY\n");
	printf("------------------------------------------------------------------------\n");
	printf("[1]\t Sweet Beet\t\t\t%2.f\t\t\t %d\n", MYR_SWEET_BEET, nSweetBeet);
	printf("[2]\t Timber\t\t\t\t%2.f \t\t\t %d\n", MYR_TIMBER, nTimber);
	printf("[3]\t Intricate Lace\t\t\t%2.f [Special Item]\t %d\n", MYR_INTRICATE_LACE, nIntricateLace);
	printf("[4]\t Intoxicating Perfume\t\t%2.f\t\t\t %d\n", MYR_INTOXICATING_PERFUME, nIntoxicatingPerfume);
	printf("[5]\t Pale Amber Wine\t\t%2.f\t\t\t %d\n", MYR_PALE_AMBER_WINE, nPaleAmberWine);
	printf("[6]\t Myrish Eye\t\t\t%2.f [Special Item]\t %d\n", MYR_MYRISH_EYE, nMyrishEye);
	printf("[7]\t Qohorik Tapestry\t\t%2.f\t\t\t %d\n", MYR_QOHORIK_TAPESTRY, nQohorikTapestry);
	printf("[8]\t Valyrian Steel\t\t\t%2.f\t\t\t %d\n", MYR_VALYRIAN_STEEL, nValyrianSteel);
	printf("------------------------------------------------------------------------\n");
}


//	<This function displays the PESTOS Interface, which includes the players inventory and the prices of all the items >


void Pentos(int nSweetBeet, int nTimber, int nIntricateLace, int nIntoxicatingPerfume,
					    int nPaleAmberWine, int nMyrishEye, int nQohorikTapestry, int nValyrianSteel)
{
	printf("------------------------------------------------------------------------\n");
	printf("\t __       _____           _                  __\n");
	printf("\t \\ \\     |  __ \\         | |                / /\n");
	printf("\t  \\ \\    | |__) |__ _ __ | |_ ___  ___     / / \n");
	printf("\t   \\ \\   |  ___/ _ \\ '_ \\| __/ _ \\/ __|   / /  \n");
	printf("\t    \\ \\  | |  |  __/ | | | || (_) \\__ \\  / /   \n");
	printf("\t     \\_\\ |_|   \\___|_| |_|\\__\\___/|___/ /_/    \n");
	printf("------------------------------------------------------------------------\n");
	printf("ITEM\t WARES AND GOODS\t SELLING/BUYING PRICE\t      INVENTORY\n");
	printf("------------------------------------------------------------------------\n");
	printf("[1]\t Sweet Beet\t\t\t%2.f\t\t\t %d\n", PENTOS_SWEET_BEET, nSweetBeet);
	printf("[2]\t Timber\t\t\t\t%2.f \t\t\t %d\n", PENTOS_TIMBER, nTimber);
	printf("[3]\t Intricate Lace\t\t\t%2.f\t\t\t %d\n", PENTOS_INTRICATE_LACE, nIntricateLace);
	printf("[4]\t Intoxicating Perfume\t\t%2.f\t\t\t %d\n", PENTOS_INTOXICATING_PERFUME, nIntoxicatingPerfume);
	printf("[5]\t Pale Amber Wine \t\t%2.f [Special Item]\t %d\n", PENTOS_PALE_AMBER_WINE, nPaleAmberWine);
	printf("[6]\t Myrish Eye\t\t\t%2.f\t\t\t %d\n", PENTOS_MYRISH_EYE, nMyrishEye);
	printf("[7]\t Qohorik Tapestry\t\t%2.f\t\t\t %d\n", PENTOS_QOHORIK_TAPESTRY, nQohorikTapestry);
	printf("[8]\t Valyrian Steel\t\t\t%2.f\t\t\t %d\n", PENTOS_VALYRIAN_STEEL, nValyrianSteel);
	printf("------------------------------------------------------------------------\n");
}


//	<This function displays the QOHOR Interface, which includes the players inventory and the prices of all the items >


void Qohor(int nSweetBeet, int nTimber, int nIntricateLace, int nIntoxicatingPerfume,
					    int nPaleAmberWine, int nMyrishEye, int nQohorikTapestry, int nValyrianSteel)
{
	printf("------------------------------------------------------------------------\n");
	printf("\t   __        ____        _                      __\n");
	printf("\t   \\ \\      / __ \\      | |                    / /\n");
	printf("\t    \\ \\    | |  | | ___ | |__   ___  _ __     / / \n");
	printf("\t     \\ \\   | |  | |/ _ \\| '_ \\ / _ \\| '__|   / /  \n");
	printf("\t      \\ \\  | |__| | (_) | | | | (_) | |     / /   \n");
	printf("\t       \\_\\  \\___\\_\\\\___/|_| |_|\\___/|_|    /_/    \n");
	printf("------------------------------------------------------------------------\n");
	printf("ITEM\t WARES AND GOODS\t SELLING/BUYING PRICE\t      INVENTORY\n");
	printf("------------------------------------------------------------------------\n");
	printf("[1]\t Sweet Beet\t\t\t%2.f\t\t\t %d\n", QOHOR_SWEET_BEET, nSweetBeet);
	printf("[2]\t Timber\t\t\t\t%2.f\t\t\t %d\n", QOHOR_TIMBER, nTimber);
	printf("[3]\t Intricate Lace\t\t\t%2.f\t\t\t %d\n", QOHOR_INTRICATE_LACE, nIntricateLace);
	printf("[4]\t Intoxicating Perfume\t\t%2.f\t\t\t %d\n", QOHOR_INTOXICATING_PERFUME, nIntoxicatingPerfume);
	printf("[5]\t Pale Amber Wine\t\t%2.f\t\t\t %d\n", QOHOR_PALE_AMBER_WINE, nPaleAmberWine);
	printf("[6]\t Myrish Eye\t\t\t%2.f\t\t\t %d\n", QOHOR_MYRISH_EYE, nMyrishEye);
	printf("[7]\t Qohorik Tapestry\t\t%2.f [Special Item]\t %d\n", QOHOR_QOHORIK_TAPESTRY, nQohorikTapestry);
	printf("[8]\t Valyrian Steel\t\t\t%2.f [Special Item]\t %d\n", QOHOR_VALYRIAN_STEEL, nValyrianSteel);
	printf("------------------------------------------------------------------------\n");
}

//	<This function displays the VOLANTIS Interface, which includes the players inventory and the prices of all the items >

void Volantis(int nSweetBeet, int nTimber, int nIntricateLace, int nIntoxicatingPerfume,
					    int nPaleAmberWine, int nMyrishEye, int nQohorikTapestry, int nValyrianSteel)
{
	printf("------------------------------------------------------------------------\n");
	printf("\t __      __      __   _             _   _            __\n");
	printf("\t \\ \\     \\ \\    / /  | |           | | (_)          / /\n");
	printf("\t  \\ \\     \\ \\  / /__ | | __ _ _ __ | |_ _ ___      / / \n");
	printf("\t   \\ \\     \\ \\/ / _ \\| |/ _` | '_ \\| __| / __|    / /  \n");
	printf("\t    \\ \\     \\  / (_) | | (_| | | | | |_| \\__ \\   / /   \n");
	printf("\t     \\_\\     \\/ \\___/|_|\\__,_|_| |_|\\__|_|___/  /_/    \n");
	printf("------------------------------------------------------------------------\n");
	printf("ITEM\t WARES AND GOODS\t SELLING/BUYING PRICE\t      INVENTORY\n");
	printf("------------------------------------------------------------------------\n");
	printf("[1]\t Sweet Beet\t\t\t%2.f [Special Item]\t %d\n", VOLANTIS_SWEET_BEET, nSweetBeet);
	printf("[2]\t Timber\t\t\t\t%2.f \t\t\t %d\n", VOLANTIS_TIMBER, nTimber);
	printf("[3]\t Intricate Lace\t\t\t%2.f\t\t\t %d\n", VOLANTIS_INTRICATE_LACE, nIntricateLace);
	printf("[4]\t Intoxicating Perfume\t\t%2.f\t\t\t %d\n", VOLANTIS_INTOXICATING_PERFUME, nIntoxicatingPerfume);
	printf("[5]\t Pale Amber Wine\t\t%2.f\t\t\t %d\n", VOLANTIS_PALE_AMBER_WINE, nPaleAmberWine);
	printf("[6]\t Myrish Eye\t\t\t%2.f\t\t\t %d\n", VOLANTIS_MYRISH_EYE, nMyrishEye);
	printf("[7]\t Qohorik Tapestry\t\t%2.f\t\t\t %d\n", VOLANTIS_QOHORIK_TAPESTRY, nQohorikTapestry);
	printf("[8]\t Valyrian Steel\t\t\t%2.f\t\t\t %d\n", VOLANTIS_VALYRIAN_STEEL, nValyrianSteel);
	printf("------------------------------------------------------------------------\n");
}

/*
	<This function displays the starting menu of the game and will only display when the game starts or restarts>

*/

void Greetings()
{
	char cStart;
	do {
		printf("\t\t       __       _____                   _______            _            __\n");
		printf("\t\t       \\ \\     |_   _|                 |__   __|          | |          / /\n");
		printf("\t\t        \\ \\      | |  _ __ ___  _ __      | |_ __ __ _  __| | ___     / / \n");
		printf("\t\t         \\ \\     | | | '__/ _ \\| '_ \\     | | '__/ _` |/ _` |/ _ \\   / /  \n");
		printf("\t\t          \\ \\   _| |_| | | (_) | | | |    | | | | (_| | (_| |  __/  / /   \n");
		printf("\t\t           \\_\\ |_____|_|  \\___/|_| |_|    |_|_|  \\__,_|\\__,_|\\___| /_/    \n\n");
		printf("\t\t\t\t\t    ---TRADING GAME---\n");
		printf("\t------------------------------------------------------------------------------------------\n");	
		printf("\t| After being handed the Iron Throne, King Bran of House Stark, decided to devise a      |\n");
		printf("\t| strategic plan to improve the economic growth of the Six Kingdoms. The Royal Treasury  |\n");
		printf("\t| currently has 2,000 Golden Dragons (GD) only. To accomplish this task, he instructed   |\n");
		printf("\t| this Hand, Lord Tyrion Lannister, and his Master of Coin, Lord Bronn of the Blackwater |\n");
		printf("\t| to go to trade with other kingdoms in Westeros and other free cities in Essos.         |\n");
		printf("\t------------------------------------------------------------------------------------------\n\n");
		printf("\t\t\t      |--------------Enter X to continue--------------|\t\t\t\n");
		printf("\t\t\t\t\t           ");
		scanf(" %c", &cStart);
		system("cls");
	} while(cStart != 'X' && cStart != 'x' );
}

/*
	<This function is only initiated when nRand lands on the values of 0 to 9, where nRand can get a value of 0 to 99, 
	giving it a 10/100 chance. When initiated, a merchant will offer a deal of increased capacity for 200 Golden Dragon; 
	the user is given the choice to eithe accecpt or decline the offer>
	
	@param	nRand is the variable that will determine the chance
	@param	nSentinel is the the sentinel value
	@param	*fGD is the currency of the game
	@param	*nCapacity is the max capacity of the user
*/

void Merchant(float *fGD, int *nCapacity, int *Sentinel)
{		
	int nRand = 0;
	char cConfirm;
	nRand = rand() % 100; // gives nRand a value of 0 - 99
		
		if (nRand >= 0 && nRand <= 9){
			do{
				system("cls");
				printf("        -Merchant \n");
				printf("\t---------\n");	
				printf("\t|  ___\t|\n");
				printf("\t| (._.)\t|\n");
				printf("\t|  <|>\t|\n");
				printf("        | _/\\_\t|\n");
				printf("\t---------\n\n");
				printf("Merchent: Hello my good sir, for ~200~ Golden Dragons do you wish to increase your storage for your goods?  [Y | N]\n");
				printf("--->");
				scanf(" %c", &cConfirm);
				system("cls");
				if (*fGD < 200){
				printf("Merchant: Ahhh...it seems you do not have enough Golden Dragons...now\n");
				printf("------------------------------------------------------------------------\n");
			    }
			} while (!(cConfirm == 'Y' || cConfirm == 'y' || cConfirm == 'N' || cConfirm == 'n') || *fGD < 200 && (cConfirm == 'Y' || cConfirm == 'y')); 
		}
			if (cConfirm == 'Y' || cConfirm == 'y' ){
				*nCapacity += 50;
				*fGD -= 200;		
		    }
			system("cls");	
}

/*
	<This function prints the current item the user is buying or selling>

	Precondition: nItemNo should hold a value ranging from 1 to 6

	@param nItemNo is the integer value/condition for the swtich statement
*/

void DisplayItem (int nItemNo)
{
	switch(nItemNo){
			
		case 1: 
			printf("Sweet Beet");
			break;
		
		case 2:
			printf("Timber");
			break;
		
		case 3:
			printf("Intricate Lace");
			break;
		
		case 4:
			printf("Intoxicating Perfume");
			break;
		
		case 5:
			printf("Pale Amber Wine");
			break;
		
		case 6:
			printf("Myrish Eye");
			break;
			
		case 7:
			printf("Qohorik Tapestry");
			break;
			
		case 8:
			printf("Valyrian Steel");
			break;
	}
}

//	<This function displays the different STATS of the game such as the DAYS, GOLDEN DRAGON, DEBT, SAVING, CAPACITY of the user>

void DisplayStats(int nDays, float fGD, int nCapacity, float fDebt, float fSavings, int nSweetBeet, int nTimber, int nIntricateLace, int nIntoxicatingPerfume,
				    int nPaleAmberWine, int nMyrishEye, int nQohorikTapestry, int nValyrianSteel)
{
	printf("\n");
	printf("\tDays Remaining: %d\t\t\n", nDays);
	printf("\tGD: %.2f\t\t\t\n",fGD);
	printf("\tDebt: %.2f\t\t\t\n", fDebt);
	printf("\tSavings: %.2f\t\t\n", fSavings);
	printf("\tCapacity: %d / %d\t\t\n\n", TotalInventory(nSweetBeet, nTimber, nIntricateLace, nIntoxicatingPerfume, nPaleAmberWine, nMyrishEye, nQohorikTapestry, nValyrianSteel), nCapacity);
	printf("------------------------------------------------------------------------\n");
} 

// <This function displays the Trading Partner Screen Interface alongside the DisplayStats function>

void ChooseTradingPartnerScreen(int nDays, float *fGD, int *nCapacity, int *nSentinel, float fDebt, float fSavings ,int nSweetBeet, int nTimber, int nIntricateLace, int nIntoxicatingPerfume,
				    int nPaleAmberWine, int nMyrishEye, int nQohorikTapestry, int nValyrianSteel)
{
	
	printf(" __       _____                   _______            _            __\n");
	printf(" \\ \\     |_   _|                 |__   __|          | |          / /\n");
	printf("  \\ \\      | |  _ __ ___  _ __      | |_ __ __ _  __| | ___     / / \n");
	printf("   \\ \\     | | | '__/ _ \\| '_ \\     | | '__/ _` |/ _` |/ _ \\   / /  \n");
	printf("    \\ \\   _| |_| | | (_) | | | |    | | | | (_| | (_| |  __/  / /   \n");
	printf("     \\_\\ |_____|_|  \\___/|_| |_|    |_|_|  \\__,_|\\__,_|\\___| /_/    \n");
	printf("------------------------------------------------------------------------\n");
	printf("\t[1] Winterfell\n");
	printf("\t[2] Lys\n");
	printf("\t[3] Myr\n");
	printf("\t[4] Pentos\n");
	printf("\t[5] Qohor\n");
	printf("\t[6] Volantis\n\n");
	printf("\t[7] Quit\n");
	printf("------------------------------------------------------------------------\n");
	DisplayStats(nDays, *fGD, *nCapacity, fDebt, fSavings, nSweetBeet, nTimber, nIntricateLace, nIntoxicatingPerfume,
				    nPaleAmberWine, nMyrishEye, nQohorikTapestry, nValyrianSteel);
}

/*
	<This function displays the current city the user is in>
	
	Precondition: nCityNum should hold a value raning from 1 to 6
	
	@param nCityNum is the integer value/condition for the swtich statement
*/

void DisplayCurrentCity(int nCityNum, int nSweetBeet, int nTimber, int nIntricateLace, int nIntoxicatingPerfume,
				    int nPaleAmberWine, int nMyrishEye, int nQohorikTapestry, int nValyrianSteel)
{
	switch(nCityNum){
			
		case 1: 
			Winterfell(nSweetBeet, nTimber, nIntricateLace, nIntoxicatingPerfume, 
		nPaleAmberWine, nMyrishEye, nQohorikTapestry, nValyrianSteel);
			break;
		
		case 2:
			Lys(nSweetBeet, nTimber, nIntricateLace, nIntoxicatingPerfume, 
		nPaleAmberWine, nMyrishEye, nQohorikTapestry, nValyrianSteel);
			break;
		
		case 3:
			Myr(nSweetBeet, nTimber, nIntricateLace, nIntoxicatingPerfume, 
		nPaleAmberWine, nMyrishEye, nQohorikTapestry, nValyrianSteel);
			break;
		
		case 4:
			Pentos(nSweetBeet, nTimber, nIntricateLace, nIntoxicatingPerfume, 
		nPaleAmberWine, nMyrishEye, nQohorikTapestry, nValyrianSteel);
			break;
		
		case 5:
			Qohor(nSweetBeet, nTimber, nIntricateLace, nIntoxicatingPerfume, 
		nPaleAmberWine, nMyrishEye, nQohorikTapestry, nValyrianSteel);
			break;
		
		case 6:
			Volantis(nSweetBeet, nTimber, nIntricateLace, nIntoxicatingPerfume, 
		nPaleAmberWine, nMyrishEye, nQohorikTapestry, nValyrianSteel);
			break;
	}
} 

void SellScreen(float *fGD, int *nCapacity, int nCityNum, int *nSweetBeet, int *nTimber, int *nIntricateLace, int *nIntoxicatingPerfume,
				    int *nPaleAmberWine, int *nMyrishEye, int *nQohorikTapestry, int *nValyrianSteel)
{
    float fPrice = 0;
	int nItemNo = 0, nSell = 0, nCurrentItem = 0;
	char cConfirm;
	
    do {
        do {
        	DisplayCurrentCity(nCityNum, *nSweetBeet, *nTimber, *nIntricateLace, *nIntoxicatingPerfume, 
		*nPaleAmberWine, *nMyrishEye, *nQohorikTapestry, *nValyrianSteel);
        	
        	printf("GD:%.2f\t\tCapacity: %d / %d \n\n", *fGD, TotalInventory(*nSweetBeet, *nTimber, *nIntricateLace, *nIntoxicatingPerfume, *nPaleAmberWine, *nMyrishEye, *nQohorikTapestry, *nValyrianSteel), *nCapacity);
        	printf("Enter 0 on both to exit \n\n");
        	printf("What Item will you sell: ");
            	scanf("%d", &nItemNo);
            printf("How many will you sell: ");
            	scanf("%d", &nSell);
            nCurrentItem = CurrentItem(nItemNo, *nSweetBeet, *nTimber, *nIntricateLace, *nIntoxicatingPerfume, *nPaleAmberWine, *nMyrishEye, *nQohorikTapestry, *nValyrianSteel);
        	system("cls");
        	if (nItemNo < 0 || nItemNo > 8 || nSell <= 0) 
				printf("WARNING -------> Invalid Input \n");
        	
        	else if (nSell > nCurrentItem ){
				if (nItemNo > 0 && nItemNo <= 8 && nSell > 0){
        		printf("WARNING -------> Insufficient number of ");
        		DisplayItem(nItemNo);
        		printf("\n");
        	    }       	
			}	
		} while(nItemNo < 0 || nItemNo > 8 || nSell < 0 || nSell > nCurrentItem );
	if(nItemNo != 0 && nSell != 0){	
		do {
     	DisplayCurrentCity(nCityNum, *nSweetBeet, *nTimber, *nIntricateLace, *nIntoxicatingPerfume, 
		*nPaleAmberWine, *nMyrishEye, *nQohorikTapestry, *nValyrianSteel);
        	
        printf("GD:%.2f\t\tCapacity: %d / %d \n\n", *fGD, TotalInventory(*nSweetBeet, *nTimber, *nIntricateLace, *nIntoxicatingPerfume, *nPaleAmberWine, *nMyrishEye, *nQohorikTapestry, *nValyrianSteel), *nCapacity);
        printf("Enter 0 on both exit \n\n");		
		printf("What Item will you sell: %d\n", nItemNo);
        printf("How many will you sell: %d\n\n", nSell);
    	
		switch(nCityNum) {
	  		case 1:	{
        		switch(nItemNo)	{
			
				case 1: 
					fPrice = nSell * WINTERFELL_SWEET_BEET;
					break;

				case 2:
					fPrice = nSell * WINTERFELL_TIMBER;
					break;
		
				case 3:
					fPrice = nSell * WINTERFELL_INTRICATE_LACE;
					break;
		
				case 4:
					fPrice = nSell * WINTERFELL_INTOXICATING_PERFUME;
					break;
		
				case 5:
					fPrice = nSell * WINTERFELL_PALE_AMBER_WINE;
					break;
		
				case 6:
					fPrice = nSell * WINTERFELL_MYRISH_EYE;
					break;
			
				case 7:
					fPrice = nSell * WINTERFELL_QOHORIK_TAPESTRY;
					break;
			
				case 8:
					fPrice = nSell * WINTERFELL_VALYRIAN_STEEL;
					break;
			
				case 0:
					fPrice = 0;
				}
				break;
			}
			case 2: {
				switch(nItemNo) {
			
				case 1: 
					fPrice = nSell * LYS_SWEET_BEET;
					break;
		
				case 2:
					fPrice = nSell * LYS_TIMBER;
					break;
		
				case 3:
					fPrice = nSell * LYS_INTRICATE_LACE;
					break;
		
				case 4:
					fPrice = nSell * LYS_INTOXICATING_PERFUME;
					break;
		
				case 5:
					fPrice = nSell * LYS_PALE_AMBER_WINE;
					break;
		
				case 6:
					fPrice = nSell * LYS_MYRISH_EYE;
					break;
			
				case 7:
					fPrice = nSell * LYS_QOHORIK_TAPESTRY;
					break;
			
				case 8:
					fPrice = nSell * LYS_VALYRIAN_STEEL;
					break;
			
				case 0:
					fPrice = 0;
				}
				break;
			}
			case 3: {
				switch(nItemNo) {
				case 1: 
					fPrice = nSell * MYR_SWEET_BEET;
					break;
		
				case 2:
					fPrice = nSell * MYR_TIMBER;
					break;
		
				case 3:
					fPrice = nSell * MYR_INTRICATE_LACE;
					break;
		
				case 4:
					fPrice = nSell * MYR_INTOXICATING_PERFUME;
					break;
		
				case 5:
					fPrice = nSell * MYR_PALE_AMBER_WINE;
					break;
		
				case 6:
					fPrice = nSell * MYR_MYRISH_EYE;
					break;
			
				case 7:
					fPrice = nSell * MYR_QOHORIK_TAPESTRY;
					break;
			
				case 8:
					fPrice = nSell * MYR_VALYRIAN_STEEL;
					break;
			
				case 0:
					fPrice = 0;
				}
				break;
			}
			case 4: {
				switch(nItemNo){
				case 1: 
					fPrice = nSell * PENTOS_SWEET_BEET;
					break;
		
				case 2:
					fPrice = nSell * PENTOS_TIMBER;
					break;
		
				case 3:
					fPrice = nSell * PENTOS_INTRICATE_LACE;
					break;
		
				case 4:
					fPrice = nSell * PENTOS_INTOXICATING_PERFUME;
					break;
		
				case 5:
					fPrice = nSell * PENTOS_PALE_AMBER_WINE;
					break;
		
				case 6:
					fPrice = nSell * PENTOS_MYRISH_EYE;
					break;
			
				case 7:
					fPrice = nSell * PENTOS_QOHORIK_TAPESTRY;
					break;
			
				case 8:
					fPrice = nSell * PENTOS_VALYRIAN_STEEL;
					break;
			
				case 0:
					fPrice = 0;		
				}
				break;
			}
			case 5: {
				switch(nItemNo) {
			
				case 1: 
					fPrice = nSell * QOHOR_SWEET_BEET;
					break;
		
				case 2:
					fPrice = nSell * QOHOR_TIMBER;
					break;
		
				case 3:
					fPrice = nSell * QOHOR_INTRICATE_LACE;
					break;
		
				case 4:
					fPrice = nSell * QOHOR_INTOXICATING_PERFUME;
					break;
		
				case 5:
					fPrice = nSell * QOHOR_PALE_AMBER_WINE;
					break;
		
				case 6:
					fPrice = nSell * QOHOR_MYRISH_EYE;
					break;
			
				case 7:
					fPrice = nSell * QOHOR_QOHORIK_TAPESTRY;
					break;
			
				case 8:
					fPrice = nSell * QOHOR_VALYRIAN_STEEL;
					break;
			
				case 0:
					fPrice = 0;
				}
				break;
			}
			case 6: {
				switch(nItemNo) {
				case 1: 
					fPrice = nSell * VOLANTIS_SWEET_BEET;
					break;
		
				case 2:
					fPrice = nSell * VOLANTIS_TIMBER;
					break;
		
				case 3:
					fPrice = nSell * VOLANTIS_INTRICATE_LACE;
					break;
		
				case 4:
					fPrice = nSell * VOLANTIS_INTOXICATING_PERFUME;
					break;
		
				case 5:
					fPrice = nSell * VOLANTIS_PALE_AMBER_WINE;
					break;
		
				case 6:
					fPrice = nSell * VOLANTIS_MYRISH_EYE;
					break;
			
				case 7:
					fPrice = nSell * VOLANTIS_QOHORIK_TAPESTRY;
					break;
			
				case 8:
					fPrice = nSell * VOLANTIS_VALYRIAN_STEEL;
					break;
			
				case 0:
					fPrice = 0;
				}
				break;
			}
		}

			printf("You are Selling %d ", nSell);
			DisplayItem(nItemNo);
			printf(" for %.2f \n", fPrice);
			printf("Proceed with trade? Y | N \n");
			printf("--->");
			scanf(" %c", &cConfirm);
			system ("cls");
		   } while(!( cConfirm == 'Y' || cConfirm == 'N' || cConfirm == 'y' || cConfirm == 'n'));
	
		if(cConfirm == 'Y' || cConfirm == 'y') {
		
			switch(nItemNo){
			
					case 1: 
						*nSweetBeet -= nSell;
						break;
		
					case 2:
						*nTimber -= nSell;
						break;
		
					case 3:
						*nIntricateLace -= nSell;
						break;
		
					case 4:
						*nIntoxicatingPerfume -= nSell;
						break;
		
					case 5:
						*nPaleAmberWine -= nSell;
						break;
		
					case 6:
						*nMyrishEye -= nSell;
						break;
						
					case 7:
						*nQohorikTapestry -= nSell;
						break;
						
					case 8:
						*nValyrianSteel -= nSell;
						break;	
			}
	  	   *fGD += fPrice;
	    }
	  } 
    } while (nItemNo != 0) ;
}

void BuyScreen(float *fGD, int *nCapacity, int nCityNum, int *nSweetBeet, int *nTimber, int *nIntricateLace, int *nIntoxicatingPerfume,
				    int *nPaleAmberWine, int *nMyrishEye, int *nQohorikTapestry, int *nValyrianSteel)
{
    float fPrice = 0;
	int nItemNo = 0, nBuy = 0;
	char cConfirm;
	
    do {
        do {
        	DisplayCurrentCity(nCityNum, *nSweetBeet, *nTimber, *nIntricateLace, *nIntoxicatingPerfume, *nPaleAmberWine, *nMyrishEye, *nQohorikTapestry, *nValyrianSteel);
        	
			printf("GD:%.2f\t\tCapacity: %d / %d \n\n", *fGD, TotalInventory(*nSweetBeet, *nTimber, *nIntricateLace, *nIntoxicatingPerfume, *nPaleAmberWine, *nMyrishEye, *nQohorikTapestry, *nValyrianSteel), *nCapacity);
        	printf("Enter 0 to exit \n\n");
        	printf("What Item will you buy: ");
            	scanf("%d", &nItemNo);
            printf("How many will you buy: ");
            	scanf("%d", &nBuy);
        	system("cls");
        	if (nItemNo < 0 || nItemNo > 8 || nBuy <= 0 )
				 printf("WARNING -------> Invalid Input \n");
        	else if ( TotalInventory(*nSweetBeet, *nTimber, *nIntricateLace, *nIntoxicatingPerfume, *nPaleAmberWine, *nMyrishEye, *nQohorikTapestry, *nValyrianSteel) + nBuy > *nCapacity ){ 
					if (nItemNo >= 0 && nItemNo <= 8 && nBuy >= 0); printf("WARNING -------> Exceeds max capacity \n");
			}
		} while(nItemNo < 0 || nItemNo > 8 || nBuy < 0 || TotalInventory(*nSweetBeet, *nTimber, *nIntricateLace, *nIntoxicatingPerfume, *nPaleAmberWine, *nMyrishEye, *nQohorikTapestry, *nValyrianSteel) + nBuy > *nCapacity);	
		switch(nCityNum) {
			
	  	case 1: {
        	switch(nItemNo) {
			case 1: 
				fPrice = nBuy * WINTERFELL_SWEET_BEET;
				break;
		
			case 2:
				fPrice = nBuy * WINTERFELL_TIMBER;
				break;
		
			case 3:
				fPrice = nBuy * WINTERFELL_INTRICATE_LACE;
				break;
		
			case 4:
				fPrice = nBuy * WINTERFELL_INTOXICATING_PERFUME;
				break;
		
			case 5:
				fPrice = nBuy * WINTERFELL_PALE_AMBER_WINE;
				break;
		
			case 6:
				fPrice = nBuy * WINTERFELL_MYRISH_EYE;
				break;
			
			case 7:
				fPrice = nBuy * WINTERFELL_QOHORIK_TAPESTRY;
				break;
			
			case 8:
				fPrice = nBuy * WINTERFELL_VALYRIAN_STEEL;
				break;
			
			case 0:
				fPrice = 0;	
			}
			break;
		}
		case 2: {
			switch(nItemNo) {
			
			case 1: 
				fPrice = nBuy * LYS_SWEET_BEET;
				break;
		
			case 2:
				fPrice = nBuy * LYS_TIMBER;
				break;
		
			case 3:
				fPrice = nBuy * LYS_INTRICATE_LACE;
				break;
		
			case 4:
				fPrice = nBuy * LYS_INTOXICATING_PERFUME;
				break;
		
			case 5:
				fPrice = nBuy * LYS_PALE_AMBER_WINE;
				break;
		
			case 6:
				fPrice = nBuy * LYS_MYRISH_EYE;
				break;
			
			case 7:
				fPrice = nBuy * LYS_QOHORIK_TAPESTRY;
				break;
			
			case 8:
				fPrice = nBuy * LYS_VALYRIAN_STEEL;
				break;
	
			case 0:
				fPrice = 0;
			}
			break;
		}
		case 3: {
			switch(nItemNo) {
			
			case 1: 
				fPrice = nBuy * MYR_SWEET_BEET;
				break;
		
			case 2:
				fPrice = nBuy * MYR_TIMBER;
				break;
		
			case 3:
				fPrice = nBuy * MYR_INTRICATE_LACE;
				break;
		
			case 4:
				fPrice = nBuy * MYR_INTOXICATING_PERFUME;
				break;
		
			case 5:
				fPrice = nBuy * MYR_PALE_AMBER_WINE;
				break;
		
			case 6:
				fPrice = nBuy * MYR_MYRISH_EYE;
				break;
			
			case 7:
				fPrice = nBuy * MYR_QOHORIK_TAPESTRY;
				break;
			
			case 8:
				fPrice = nBuy * MYR_VALYRIAN_STEEL;
				break;
			
			case 0:
				fPrice = 0;
				
			}
			break;
		}
		case 4: {
			switch(nItemNo) {
			
			case 1: 
				fPrice = nBuy * PENTOS_SWEET_BEET;
				break;
		
			case 2:
				fPrice = nBuy * PENTOS_TIMBER;
				break;
		
			case 3:
				fPrice = nBuy * PENTOS_INTRICATE_LACE;
				break;
		
			case 4:
				fPrice = nBuy * PENTOS_INTOXICATING_PERFUME;
				break;
		
			case 5:
				fPrice = nBuy * PENTOS_PALE_AMBER_WINE;
				break;
		
			case 6:
				fPrice = nBuy * PENTOS_MYRISH_EYE;
				break;
			
			case 7:
				fPrice = nBuy * PENTOS_QOHORIK_TAPESTRY;
				break;
			
			case 8:
				fPrice = nBuy * PENTOS_VALYRIAN_STEEL;
				break;
			
			case 0:
				fPrice = 0;
			}
			break;
		}
		case 5: {
			switch(nItemNo) {
			case 1: 
				fPrice = nBuy * QOHOR_SWEET_BEET;
				break;
		
			case 2:
				fPrice = nBuy * QOHOR_TIMBER;
				break;
		
			case 3:
				fPrice = nBuy * QOHOR_INTRICATE_LACE;
				break;
		
			case 4:
				fPrice = nBuy * QOHOR_INTOXICATING_PERFUME;
				break;
		
			case 5:
				fPrice = nBuy * QOHOR_PALE_AMBER_WINE;
				break;
		
			case 6:
				fPrice = nBuy * QOHOR_MYRISH_EYE;
				break;
			
			case 7:
				fPrice = nBuy * QOHOR_QOHORIK_TAPESTRY;
				break;
			
			case 8:
				fPrice = nBuy * QOHOR_VALYRIAN_STEEL;
				break;
			
			case 0:
				fPrice = 0;
			}
			break;
		}
		case 6: {
			switch(nItemNo) {
			case 1: 
				fPrice = nBuy * VOLANTIS_SWEET_BEET;
				break;
		
			case 2:
				fPrice = nBuy * VOLANTIS_TIMBER;
				break;
		
			case 3:
				fPrice = nBuy * VOLANTIS_INTRICATE_LACE;
				break;
		
			case 4:
				fPrice = nBuy * VOLANTIS_INTOXICATING_PERFUME;
				break;
		
			case 5:
				fPrice = nBuy * VOLANTIS_PALE_AMBER_WINE;
				break;
		
			case 6:
				fPrice = nBuy * VOLANTIS_MYRISH_EYE;
				break;
			
			case 7:
				fPrice = nBuy * VOLANTIS_QOHORIK_TAPESTRY;
				break;
			
			case 8:
				fPrice = nBuy * VOLANTIS_VALYRIAN_STEEL;
				break;
			
			case 0:
				fPrice = 0;
			}
			break;
		}
    }
	if(nItemNo != 0 && nBuy != 0){
		if (*fGD >= fPrice) {
			do {
     		DisplayCurrentCity(nCityNum, *nSweetBeet, *nTimber, *nIntricateLace, *nIntoxicatingPerfume, *nPaleAmberWine, *nMyrishEye, *nQohorikTapestry, *nValyrianSteel);
        	
        		printf("GD:%.2f\t\tCapacity: %d / %d \n\n", *fGD, TotalInventory(*nSweetBeet, *nTimber, *nIntricateLace, *nIntoxicatingPerfume, *nPaleAmberWine, *nMyrishEye, *nQohorikTapestry, *nValyrianSteel), *nCapacity);
        		printf("Enter 0 to exit \n\n");		
				printf("What Item will you buy: %d\n", nItemNo);
        		printf("How many will you buy: %d\n\n", nBuy);
				printf("You are buying %d ", nBuy);
				DisplayItem(nItemNo);
				printf(" for %.2f \n", fPrice);
				printf("Proceed with trade? Y | N \n");
				printf("--->");
				scanf(" %c", &cConfirm);
				system ("cls");
			
		   	 } while(!( cConfirm == 'Y' || cConfirm == 'N' || cConfirm == 'y' || cConfirm == 'n' ));
	
			if(cConfirm == 'Y' || cConfirm == 'y'){
				switch(nItemNo){
			
					case 1: 
						*nSweetBeet += nBuy;
						break;
		
					case 2:
						*nTimber += nBuy;
						break;
		
					case 3:
						*nIntricateLace += nBuy;
						break;
		
					case 4:
						*nIntoxicatingPerfume += nBuy;
						break;
		
					case 5:
						*nPaleAmberWine += nBuy;
						break;
		
					case 6:
						*nMyrishEye += nBuy;
						break;
						
					case 7:
						*nQohorikTapestry += nBuy;
						break;
						
					case 8:
						*nValyrianSteel += nBuy;
						break;	
				}	
	  	   		*fGD -= fPrice;
	    	}
      	}
      	else printf("WARNING -------> Insufficient funds\n"); 
      }
	} while (nItemNo != 0);
} 


//	<This function inititalizes the inventory interface, where the items and their total amount are present>


void DisplayInventory(int nSweetBeet, int nTimber, int nIntricateLace, int nIntoxicatingPerfume,
					    int nPaleAmberWine, int nMyrishEye, int nQohorikTapestry, int nValyrianSteel){
	printf("\t ITEMS\t\t\t\t    INVENTORY\n");
	printf("------------------------------------------------------------------------\n");
	printf("[1]\t Sweet Beet\t\t\t\t%d\n", nSweetBeet);
	printf("[2]\t Timber\t\t\t\t\t%d\n", nTimber);
	printf("[3]\t Intricate Lace\t\t\t\t%d\n", nIntricateLace);
	printf("[4]\t Intoxicating Perfume\t\t\t%d\n", nIntoxicatingPerfume);
	printf("[5]\t Pale Amber Wine\t\t\t%d\n", nPaleAmberWine);
	printf("[6]\t Myrish Eye\t\t\t\t%d\n", nMyrishEye);
	printf("[7]\t Qohorik Tapestry\t\t\t%d\n", nQohorikTapestry);
	printf("[8]\t Valyrian Steel\t\t\t\t%d\n", nValyrianSteel);
	printf("------------------------------------------------------------------------\n");
}

void WheelHouse(int *nDayOver, int *nSweetBeet, int *nTimber, int *nIntricateLace, int *nIntoxicatingPerfume,
					int *nPaleAmberWine, int *nMyrishEye, int *nQohorikTapestry, int *nValyrianSteel){
	char cChoice;
	 
	do {
	printf(" __      __          ___               _   _    _                             __\n");
	printf(" \\ \\     \\ \\        / / |             | | | |  | |                           / /\n");
	printf("  \\ \\     \\ \\  /\\  / /| |__   ___  ___| | | |__| | ___  _   _ ___  ___      / / \n");
	printf("   \\ \\     \\ \\/  \\/ / | '_ \\ / _ \\/ _ \\ | |  __  |/ _ \\| | | / __|/ _ \\    / /  \n");
	printf("    \\ \\     \\  /\\  /  | | | |  __/  __/ | | |  | | (_) | |_| \\__ \\  __/   / /   \n");
	printf("     \\_\\     \\/  \\/   |_| |_|\\___|\\___|_| |_|  |_|\\___/ \\__,_|___/\\___|  /_/    \n");
	printf("------------------------------------------------------------------------\n");
		DisplayInventory(*nSweetBeet, *nTimber, *nIntricateLace, *nIntoxicatingPerfume, 
		*nPaleAmberWine, *nMyrishEye, *nQohorikTapestry, *nValyrianSteel);
		printf("\nConfirm leaving the city? [Y/N]\n");
		printf("--->");
		scanf(" %c", &cChoice);
		system("cls");
	} while (cChoice != 'Y' && cChoice != 'y' && cChoice != 'N' && cChoice != 'n');
	

	switch (cChoice) {
	case 'Y':
	case 'y': *nDayOver = 1; break;
	default: *nDayOver = 0;
	}
}

void IronBankScreen(float* fGD, int* nCapacity, int nCityNum, int* nSweetBeet, int* nTimber, int* nIntricateLace, int* nIntoxicatingPerfume,
	int* nPaleAmberWine, int* nMyrishEye, int* nQohorikTapestry, int* nValyrianSteel, float *fDebt, float *fSavings, int nDays)
{
	int nBankChoice = 0;
	int nMoney = 0;
	do{
		do {
			DisplayCurrentCity(nCityNum, *nSweetBeet, *nTimber, *nIntricateLace, *nIntoxicatingPerfume, *nPaleAmberWine, *nMyrishEye, *nQohorikTapestry, *nValyrianSteel);
			DisplayStats(nDays, *fGD, *nCapacity, *fDebt, *fSavings, *nSweetBeet, *nTimber, *nIntricateLace, *nIntoxicatingPerfume,
				    	*nPaleAmberWine, *nMyrishEye, *nQohorikTapestry, *nValyrianSteel);

			printf("[1] Deposit\t\t[2] Withdraw\t\t[3] Loan\t\t[4] Quit\n\n");
			printf("What is your choice of banking? \n");
			printf("---> ");
				scanf(" %d", &nBankChoice);
				nMoney = 0;
			if(nBankChoice >= 1 && nBankChoice < 4){
				printf("\nHow much? \n");
				printf("---> ");
					scanf("%d", &nMoney);
			system("cls");
				if (*fGD < nMoney && nBankChoice == 1 || nMoney > *fSavings && nBankChoice == 2)
					printf("WARNING -------> Insufficient Funds\n");
				else if (nBankChoice < 1 || nBankChoice > 4 || nMoney < 0 )
					printf("WARNING -------> Invalid Input \n");
			}
			else if (nBankChoice < 1 || nBankChoice > 4)
			system ("cls");
		 } while (nBankChoice < 1 || nBankChoice > 4 || *fGD < nMoney && nBankChoice == 1 || nMoney < 0 || nMoney > *fSavings && nBankChoice == 2);	
			
		switch (nBankChoice) {
				
		case 1:
			*fGD -= nMoney;
			*fSavings += nMoney;
			break;
		
		case 2:
			*fGD += nMoney;
			*fSavings -= nMoney;
			break;
		
		case 3:
			*fGD += nMoney;
			*fDebt += nMoney;
			break;
		
		case 4:
			break;
		}
     
   } while (nBankChoice != 4);
   	printf("You are transacting %d ", nMoney);
}
/*
	<This function makes the user choose what kingdom to visit, which then gives nCityNum a value that represents the kingdom for 
	future validation, alongside displaying the interface of the function>
		
	Precondition : All variables here are preconditioned to 0 
	@param	*nTradingPartnerNumber is the respective trading partner number
	@param	nDays is the current amount of Days
	@param	fGoldenDragons is the amount of Golden Dragons
	@param	nStorage is the capacity
	@param  *nSV is the sentinel value 
	@param	fDebt is the current amount of Debt
	@param	fSavings is the curren amount of Savings
	@param	nSweetBeet is the amount of Sweet Beet
	@param	nTimber is the amount of Timber
	@param	nIntricateLace is the amount of Intricate Lace
	@param	nIntoxicatingPerfume is the amount of Intoxicating Perfume
	@param	nValyrianSteel is the amount of Myrish Eye
	@param	nPaleAmberWine is the amount of Pale Amber Wine
	@param	nMyrishEye is the amount of Qohorik Tapestry
	
*/
int ChooseTradingPartners(int *nCityNum, int nDays, float *fGD, int *nCapacity, int *nSentinel, int nSweetBeet, int nTimber, int nIntricateLace, int nIntoxicatingPerfume,
				    int nPaleAmberWine, int nMyrishEye, int nQohorikTapestry, int nValyrianSteel, float fDebt, float fSavings)
{
	int nTradingPartner = 0;
	
	Merchant(fGD, nCapacity, nSentinel);
	do {
		ChooseTradingPartnerScreen(nDays, fGD, nCapacity, nSentinel, fDebt, fSavings ,nSweetBeet, nTimber, nIntricateLace, nIntoxicatingPerfume,
				    nPaleAmberWine, nMyrishEye, nQohorikTapestry, nValyrianSteel);
		
		printf("---> ");	
			scanf("%d", &nTradingPartner);

		system("cls");
		
		switch(nTradingPartner) {
			
		case 1: 
			system("cls");
			*nCityNum = 1;
			Winterfell(nSweetBeet, nTimber, nIntricateLace, nIntoxicatingPerfume, nPaleAmberWine, nMyrishEye, nQohorikTapestry, nValyrianSteel);
			break;
		
		case 2:
			system("cls");
			*nCityNum = 2;
			Lys(nSweetBeet, nTimber, nIntricateLace, nIntoxicatingPerfume, nPaleAmberWine, nMyrishEye, nQohorikTapestry, nValyrianSteel);
			break;
		
		case 3:
			system("cls");
			*nCityNum = 3;
			Myr(nSweetBeet, nTimber, nIntricateLace, nIntoxicatingPerfume, nPaleAmberWine, nMyrishEye, nQohorikTapestry, nValyrianSteel);
			break;
		
		case 4:
			system("cls");
			*nCityNum = 4;
			Pentos(nSweetBeet, nTimber, nIntricateLace, nIntoxicatingPerfume, nPaleAmberWine, nMyrishEye, nQohorikTapestry, nValyrianSteel);
			break;
		
		case 5:
			system("cls");
			*nCityNum = 5;
			Qohor(nSweetBeet, nTimber, nIntricateLace, nIntoxicatingPerfume, nPaleAmberWine, nMyrishEye, nQohorikTapestry, nValyrianSteel);
			break;
		
		case 6:
			system("cls");
			*nCityNum = 6;
			Volantis(nSweetBeet, nTimber, nIntricateLace, nIntoxicatingPerfume, nPaleAmberWine, nMyrishEye, nQohorikTapestry, nValyrianSteel);
			break;
		
		case 7:
			system("cls");
			return *nSentinel = 1;
			break;
		}

	} while (nTradingPartner < 1 || nTradingPartner > 7);
	
}

/*
	<This function transfers the value of the current item being used to a temporary variable which will be used for validation

	Precondition : All variables here are preconditioned as 0
	@param	nProductNumber is the product number
	@param	nSweetBeet is the amount of Sweet Beet
	@param	nTimber is the amount of Timber
	@param	nIntricateLace is the amount of Intricate Lace
	@param	nIntoxicatingPerfume is the amount of Intoxicating Perfume
	@param	nValyrianSteel is the amount of Myrish Eye
	@param	nPaleAmberWine is the amount of Pale Amber Wine
	@param	nMyrishEye is the amount of Qohorik Tapestry

	@return nCurrentItem 
*/

int CurrentItem(int nItemNo, int nSweetBeet, int nTimber, int nIntricateLace, int nIntoxicatingPerfume,
				    int nPaleAmberWine, int nMyrishEye, int nQohorikTapestry, int nValyrianSteel)
{
	int nCurrentItem = 0;
	
		switch(nItemNo){
			
		case 1: 
			nCurrentItem = nSweetBeet;
			break;
		
		case 2:
			nCurrentItem = nTimber;
			break;
		
		case 3:
			nCurrentItem = nIntricateLace;
			break;
		
		case 4:
			nCurrentItem = nIntoxicatingPerfume;
			break;
		
		case 5:
			nCurrentItem = nPaleAmberWine;
			break;
		
		case 6:
			nCurrentItem = nMyrishEye;
			break;
			
		case 7:
			nCurrentItem = nQohorikTapestry;
			break;
			
		case 8:
			nCurrentItem = nValyrianSteel;
			break;
	}
	
	return nCurrentItem;
		    	
}
/*
	<This function returns the total amount of the users inventory>

	Precondition: All varaibles here are preconditioned as 0

	@param	nSweetBeet is the amount of Sweet Beet
	@param	nTimber is the amount of Timber
	@param	nIntricateLace is the amount of Intricate Lace
	@param	nIntoxicatingPerfume is the amount of Intoxicating Perfume
	@param	nValyrianSteel is the amount of Myrish Eye
	@param	nPaleAmberWine is the amount of Pale Amber Wine
	@param	nMyrishEye is the amount of Qohorik Tapestry
	@param	nQohorikTapestry is the amount of Valyrian Steel

	@return	nTotalAmount
*/	    

int TotalInventory(int nSweetBeet, int nTimber, int nIntricateLace, int nIntoxicatingPerfume,
				    int nPaleAmberWine, int nMyrishEye, int nQohorikTapestry, int nValyrianSteel){
	int nTotal = 0;
	
	nTotal = nTotal + nSweetBeet + nTimber + nIntricateLace + nIntoxicatingPerfume +
				    nPaleAmberWine + nMyrishEye + nQohorikTapestry + nValyrianSteel;
			
	return 	nTotal;
}

void Options(int nCityNum, int nDays, float *fGD, int *nCapacity, int *nSentinel, 
				int *nDayOver, int *nSweetBeet, int *nTimber, int *nIntricateLace, int *nIntoxicatingPerfume,
				    int *nPaleAmberWine, int *nMyrishEye, int *nQohorikTapestry, int *nValyrianSteel, float *fDebt, float *fSavings)
{
	char cOptions;
	
	do {
		system("cls");
		DisplayCurrentCity(nCityNum, *nSweetBeet, *nTimber, *nIntricateLace, *nIntoxicatingPerfume, *nPaleAmberWine, *nMyrishEye, *nQohorikTapestry, *nValyrianSteel);
		DisplayStats(nDays, *fGD, *nCapacity, *fDebt, *fSavings, *nSweetBeet, *nTimber, *nIntricateLace, *nIntoxicatingPerfume,
				    *nPaleAmberWine, *nMyrishEye, *nQohorikTapestry, *nValyrianSteel);
		printf("[B]uy\t\t[S]ell\t\t[W]heelhouse\t\t[I]ron Bank\t\t[Q]uit\n\n"); 
		printf("---> ");
			scanf(" %c", &cOptions);
	} while (!( cOptions == 'B' || cOptions == 'S' || cOptions == 'W' || cOptions == 'I' || cOptions == 'Q' || 
				cOptions == 'b' || cOptions == 's' || cOptions == 'w' || cOptions == 'i' || cOptions == 'q' )); 
	
	switch(cOptions) {
        case 'B': 
        case 'b': system("cls"); BuyScreen(fGD, nCapacity, nCityNum, nSweetBeet, nTimber, nIntricateLace, nIntoxicatingPerfume, 
			nPaleAmberWine, nMyrishEye, nQohorikTapestry, nValyrianSteel); break;
        case 'S': 
        case 's': system("cls"); SellScreen(fGD, nCapacity, nCityNum, nSweetBeet, nTimber, nIntricateLace, nIntoxicatingPerfume, 
			nPaleAmberWine, nMyrishEye, nQohorikTapestry, nValyrianSteel); break;
        case 'W': 
        case 'w': system("cls"); WheelHouse(nDayOver, nSweetBeet, nTimber, nIntricateLace, nIntoxicatingPerfume, 
			nPaleAmberWine, nMyrishEye, nQohorikTapestry, nValyrianSteel); break;
        case 'I': 
        case 'i': system("cls"); IronBankScreen(fGD, nCapacity, nCityNum, nSweetBeet, nTimber, nIntricateLace, 
			nIntoxicatingPerfume, nPaleAmberWine, nMyrishEye, nQohorikTapestry, nValyrianSteel, fDebt, fSavings, nDays); break;
        case 'Q': 
        case 'q':system("cls"); *nSentinel = 1; break;
    }
}

int main()
{
	int nCityNum, nCapacity = 50, nSentinel = 0, nDays = 15, nDayOver,
					nSweetBeet = 0, nTimber = 0, nIntricateLace = 0, nIntoxicatingPerfume = 0,
					    nPaleAmberWine = 0, nMyrishEye = 0, nQohorikTapestry = 0, nValyrianSteel = 0, nRand = 0, nRestart = 0;
	float fGD = 50000, fDebt = 0.0, fSavings = 0.0;
	char cStart, cConfirm;

		do{
			Greetings();
			do {
				nDayOver = 0;
				nSentinel = 0;
				ChooseTradingPartners(&nCityNum, nDays, &fGD, &nCapacity, &nSentinel, nSweetBeet, nTimber, nIntricateLace, nIntoxicatingPerfume,
						    nPaleAmberWine, nMyrishEye, nQohorikTapestry, nValyrianSteel, fDebt, fSavings);
		
				if (nSentinel == 0) {
					DisplayStats(nDays, fGD, nCapacity, fDebt, fSavings ,nSweetBeet, nTimber, nIntricateLace, nIntoxicatingPerfume,
						    nPaleAmberWine, nMyrishEye, nQohorikTapestry, nValyrianSteel);

					do Options(nCityNum, nDays, &fGD, &nCapacity, &nSentinel, &nDayOver, &nSweetBeet, &nTimber, &nIntricateLace, &nIntoxicatingPerfume,
							    &nPaleAmberWine, &nMyrishEye, &nQohorikTapestry, &nValyrianSteel, &fDebt, &fSavings); while (nSentinel == 0 && nDayOver == 0);
				    
					fSavings += fSavings * 0.1;
					fDebt += fDebt * 0.05;
				if (nSentinel == 0) nDays--;
				}
			} while (nDays >= 1 && nSentinel == 0);

		printf("\t  ______                          _ _ \n");
		printf("\t |  ____|                        | | |\n");
		printf("\t | |__ __ _ _ __ _____      _____| | |\n");
		printf("\t |  __/ _` | '__/ _ \\ \\ /\\ / / _ \\ | |\n");
		printf("\t | | | (_| | | |  __/\\ V  V /  __/ | |\n");
		printf("\t |_|  \\__,_|_|  \\___| \\_/\\_/ \\___|_|_|\n\n");
		printf("------------------------------------------------------------------------\n");
		DisplayStats(nDays, fGD, nCapacity, fDebt, fSavings, nSweetBeet, nTimber, nIntricateLace, nIntoxicatingPerfume,
					    nPaleAmberWine, nMyrishEye, nQohorikTapestry, nValyrianSteel);
		DisplayInventory(nSweetBeet, nTimber, nIntricateLace, nIntoxicatingPerfume, 
					nPaleAmberWine, nMyrishEye, nQohorikTapestry, nValyrianSteel);
					
		printf("\nPlay Again? 1 = Yes | 0 = No\n");
		printf("---> ");
		scanf("%d", &nRestart);
		system("cls");
	  } while (nRestart == 1);	
}

