#플레이어 관리 및 게임의 주요 동작 흐름 실현 
//
//  main.c
//  SMMarble
//
//  Created by EUNSEON SUH on 2023/12/21.
//

#include <time.h>
#include <string.h>
#include "smm_object.h"
#include "smm_database.h"
#include "smm_common.h"

#define BOARDFILEPATH "marbleBoardConfig.txt"
#define FOODFILEPATH "marbleFoodConfig.txt"
#define FESTFILEPATH "marbleFestivalConfig.txt"


//board configuration parameters
static int board_nr;
static int food_nr;
static int festival_nr;



//function prototypes
#if 0
int isGraduated(void); //check if any player is graduated
void generatePlayers(int n, int initEnergy); //generate a new player
void printGrades(int player); //print grade history of the player
void goForward(int player, int step); //make player go "step" steps on the board (check if player is graduated)
void inputPlayerNames(int numPlayers, struct Player players[])
void printPlayerStatus(void); //print all player status at the beginning of each turn
float calcAverageGrade(int player); //calculate average grade of the player
smmGrade_e takeLecture(int player, char *lectureName, int credit); //take the lecture (insert a grade of the player)
void* findGrade(int player, char *lectureName); //find the grade from the player's grade history
void printGrades(int player); //print all the grade history of the player
 
#endif




int rolldie(int player)
{
    char c;
    printf(" Press any key to roll a die (press g to see grade): ");
    c = getchar();
    fflush(stdin);
    
#if 0
    if (c == 'g')
        printGrades(player);
#endif
    
    return (rand()%MAX_DIE + 1);
}


//action code when a player stays at a node
void actionNode(int player)
{
    switch(type)
    {
        //case lecture:
        default:
            break;
    }
}

// 플레이어 생성 함수
void generatePlayers(int n, int initEnergy) {
	struct Player players[MAX_PLAYER];
	
	// 플레이어 이름 입력
	inputPlayerNames(n, players);
	
	// 플레이어 초기 에너지 설정
	for (int i=0; i<n; ++i) {
		players[i].energy = initEnergy;
	}
}


// 플레이어 이름을 입력받는 함수
void inputPlayerNames(int numPlayers, struct Player players[]) {
    for (int i = 0; i < numPlayers; ++i) {
        printf("Input player %d name :", i);
        fgets(players[i].name, MAX_CHARNAME, stdin);

        // 개행 문자를 제거
        size_t len = strlen(players[i].name);
        if (len > 0 && players[i].name[len - 1] == '\n') {
            players[i].name[len - 1] = '\0';
        }
    }
}


int main(int argc, const char * argv[]) {
    
    FILE* fp;
    char name[MAX_CHARNAME];
    int type;
    int credit;
    int energy;
    
    board_nr = 0;
    food_nr = 0;
    festival_nr = 0;
    
    srand(time(NULL));
    
    
    //1. import parameters ---------------------------------------------------------------------------------
    //1-1. boardConfig 
    if ((fp = fopen(BOARDFILEPATH,"r")) == NULL)
    {
        printf("[ERROR] failed to open %s. This file should be in the same directory of SMMarble.exe.\n", BOARDFILEPATH);
        getchar();
        return -1;
    }
    
    printf("Reading board component......\n");
    while () //read a node parameter set
    {
        //store the parameter set
    }
    fclose(fp);
    printf("Total number of board nodes : %i\n", board_nr);
    
    
    
    //2. food card config 
    if ((fp = fopen(FOODFILEPATH,"r")) == NULL)
    {
        printf("[ERROR] failed to open %s. This file should be in the same directory of SMMarble.exe.\n", FOODFILEPATH);
        return -1;
    }
    
    printf("\n\nReading food card component......\n");
    while () //read a food parameter set
    {
        //store the parameter set
    }
    fclose(fp);
    printf("Total number of food cards : %i\n", food_nr);
    
    
    
    //3. festival card config 
    if ((fp = fopen(FESTFILEPATH,"r")) == NULL)
    {
        printf("[ERROR] failed to open %s. This file should be in the same directory of SMMarble.exe.\n", FESTFILEPATH);
        return -1;
    }
    
    printf("\n\nReading festival card component......\n");
    while () //read a festival card string
    {
        //store the parameter set
    }
    fclose(fp);
    printf("Total number of festival cards : %i\n", festival_nr);
    
    
    
    //2. Player configuration ---------------------------------------------------------------------------------
    /*
    
    generatePlayers();
    */
    int numPlayers;
	char playerNames[MAX_PALYER][MAX_CHARNAME] 
    do {
        printf("Input No. of players (1~%d): ", MAX_PLAYER); // MAX_PLAYER 통해 플레이어 수 제한 
        scanf("%d", &numPlayers);
        getchar();  // scanf에 의해 남겨진 개행 문자 소비함 

        if (numPlayers < 1 || numPlayers > MAX_PLAYER) {
            printf("Invalid number of players. Please input a number between 1 and %d.\n", MAX_PLAYER);
        }
    } while (numPlayers < 1 || numPlayers > MAX_PLAYER);
    
    
    //3. SM Marble game starts ---------------------------------------------------------------------------------
    while () //is anybody graduated?
    {
        int die_result;
        
        //4-1. initial printing
        //printPlayerStatus();
        
        //4-2. die rolling (if not in experiment)
        
        
        //4-3. go forward
        //goForward();

		//4-4. take action at the destination node of the board
        //actionNode();
        
        //4-5. next turn
        
    }
    
    return 0;
}
