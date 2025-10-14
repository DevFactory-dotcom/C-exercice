#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Player{
    char name[50];
    int pvm;
    int pv;
}Player;

typedef struct Dragon{
    int pvm;
    int pv;
}Dragon;

void display_player(Player P1);
void display_dragon(Dragon dragon);
void init_characters(Player *P1, Dragon *dragon);
int roll_dice(int size);
int roll_dices(int number, int size);
int player_attack();
int dragon_attack();
void gameturn(Player *P1, Dragon *dragon);

void display_player(Player P1){
    printf("Joueur \n");
    printf("Nom: %s \n",P1.name);
    printf("HP: %d/%d\n",P1.pv, P1.pvm);
}

void display_dragon(Dragon dragon){
    printf("Dragon \n");
    printf("HP: %d/%d\n",dragon.pv, dragon.pvm);
}

void init_characters(Player *P1, Dragon *dragon){
    printf("Entrez le nom de votre personnage: ");
    scanf("%s", P1->name);
    P1->pv = 100;
    P1->pvm = 100;

    dragon->pv = 100;
    dragon->pvm = 100;

    display_player(*P1);
    printf("\n");
    display_dragon(*dragon);
}

int roll_dice(int size){
    int dice_face = rand() % size + 1;
    return dice_face;
}

int roll_dices(int number, int size){
    int sum = 0;
    for (int i = 0; i < number;i++){
        sum += roll_dice(size);
    }
    return sum;
}

int player_attack(){
    int attack = roll_dices(3,6);
    return attack;
}

int dragon_attack(){
    int attack = roll_dices(3,6);
    return attack;
}

void gameturn(Player *P1,Dragon *dragon){
    int player_dice = roll_dice(6);
    int dragon_dice = roll_dice(6);

    if (player_dice > dragon_dice){
        int att_P = player_attack();
        dragon->pv -= att_P;
        printf("Le joueur attaque avec %d points de dégat, vie restante du dragon : %d \n", att_P,dragon->pv);
    }else {
        int att_D = dragon_attack();
        P1->pv -= att_D;
        printf("Le dragon attaque avec %d points de dégat, vie restante du joueur : %d \n", att_D,P1->pv);
    }
}

int main(){
    srand(time(NULL));
    Player P1;
    Dragon dragon;

    init_characters(&P1,&dragon);
    while (P1.pv > 0 && dragon.pv > 0){
        gameturn(&P1,&dragon);
    }
    if (P1.pv <= 0){
        printf("Vous avez perdu !\n");
    } else if (dragon.pv <= 0){
        printf("Vous avez gagnez ! \n");
    }
}