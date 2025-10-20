#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void create_table( int number[4][4]);
void print_Tab2d( int number[4][4] );
void print_format_matrice(int number[4][4]);
int sum_table( int number[4][4]);
void print_format_matrice_malloc(int** number, int size);
void print_Tab2d_malloc( int** number, int size );
int sum_table_malloc( int** number, int size);
int** malloc_Tab2d(int N);

void create_table( int number[4][4]){
    int compt = 1;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            number[i][j] = compt;
            compt++;
        }
    }
}

void print_Tab2d( int number[4][4] ){
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            printf("Ligne %d et colonne %d = %d\n",i,j,number[i][j]);
        }
    }
}

void print_format_matrice(int number[4][4]){
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%2d ", number[i][j]);
        }
        printf("\n");
    }  
}

int sum_table( int number[4][4]){
    int compt = 0;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            compt += number[i][j] ;
        }
    }
    return compt;
}

void print_format_matrice_malloc(int** number, int size){
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%2d ", number[i][j]);
        }
        printf("\n");
    }
}

void print_Tab2d_malloc( int** number, int size ){
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            printf("Ligne %d et colonne %d = %d\n",i,j,number[i][j]);
        }
    }
}

int sum_table_malloc( int** number, int size){
    int compt = 0;
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            compt += number[i][j] ;
        }
    }
    return compt;
}

int** malloc_Tab2d(int N){
    int** number;
    number = malloc(N * sizeof(int*));
    for (int i = 0; i < N; i++){
        number[i] = (int *)malloc(N * sizeof(int));
    }
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            number[i][j] = (i + 1) * (j + 1);
        }
    }
    return number;
}



void print_tab_morp(char **tab, int size);
char** create_table_morp(int size);

void print_tab_morp(char **tab, int size) {
    for (int i=0;i<size;i++) {
        for (int j=0;j<size;j++) {
            printf(" %c ", tab[i][j]);
            if (j < size - 1){
                printf("|");
            }
        }
        printf("\n");

        if(i < size - 1){
            for (int k = 0; k < size; k++){
                printf("---");
                if (k < size - 1){
                    printf("|");
                }
            }

        }
        printf("\n");
    }
}

char** create_table_morp(int size) {
    char **array = malloc(size * sizeof(char *));

    for (int m=0;m<size;m++) {
        array[m] = (char *)malloc(size * sizeof(char));
    }

    for (int i=0;i<size;i++) {
        for (int j=0;j<size;j++) {
            array[i][j] = ' ';
        }
    }
    print_tab_morp(array, size);

    return array;

}

void player_round_X(char **tab, int size){
    char player = 'X';
    int x;
    int y;

    printf("Veuillez entrez la position de votre jeu (x) : ");
    scanf("%d",&x);
    printf("Veuillez entrez la position de votre jeu (y) : ");
    scanf("%d",&y);

    if(tab[x - 1][y - 1] == ' '){
        tab[x - 1][y - 1] = 'X';
        print_tab_morp(tab, size);
    }else {
        printf("La case aux coordonnée x = %d et y = %d est déjà prise !\n",x,y);
        player_round_X(tab,size);
    }

}

void player_round_O(char **tab, int size){
    int x = rand() % 3 + 1;
    int y = rand() % 3 + 1;

    if(tab[x - 1][y - 1] == ' '){
        tab[x - 1][y - 1] = 'O';
        print_tab_morp(tab, 3);
    }else {
        player_round_O(tab,size);
    }

}

int compt_(char** array, int size){
    int compt = 0;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (array[i][j] == ' '){
                compt++;
            }
        }
    }
    return compt;
}

int compare_morp(char** tab, int i, char sym){
    if (tab[i][0] == sym && tab[i][1] == sym && tab[i][2] == sym){
        return 1;
    }
    return 0;
}

int check_win(char** tab) {
    for (int i=0;i<3;i++) {
        for (int j=0;j<3;j++) {
            if (compare_morp(tab,i,'X') == 1) {
                return 1;
            } else if (compare_morp(tab,i,'O') == 1) {
                return 2;
            }

            if (tab[0][j] == 'X' && tab[1][j] == 'X' && tab[2][j] == 'X') {
                return 1;
            } else if (tab[0][j] == 'O' && tab[1][j] == 'O' && tab[2][j] == 'O') {
                return 2;
            }

            if (tab[0][0] == 'X' && tab[1][1] == 'X' && tab[2][2] == 'X') {
                return 1;
            } else if (tab[0][0] == 'O' && tab[1][1] == 'O' && tab[2][2] == 'O') {
                return 2;
            }

            if (tab[0][2] == 'X' && tab[1][1] == 'X' && tab[2][0] == 'X') {
                return 1;
            } else if (tab[0][2] == 'O' && tab[1][1] == 'O' && tab[2][0] == 'O') {
                return 2;
            }
            
        }
    }
    return 0;
}
int main(){
    // int number[4][4];
    // int N = 4;
    // create_table(number);
    // print_Tab2d(number);
    // printf("%d\n", sum_table(number));
    // int** numbers = malloc_Tab2d(N);
    // print_format_matrice_malloc(numbers, N);
    // printf("%d\n", sum_table_malloc(numbers, N));
    // print_Tab2d_malloc(numbers, N);


    srand(time(NULL));
    char** array = create_table_morp(3);
    int compt = compt_(array, 3);

    while (compt > 0) {
        printf("Points restants : %d\n", compt);
        player_round_X(array, 3);
        compt = compt_(array, 3);
        int winner = check_win(array);
        printf("Points restants : %d\n", compt);

        if (winner == 1){
            printf("Le joueur a gagné !\n");
            break;
        }else if (winner == 2){
            printf("Le joueur a perdu !\n");
            break;
        }

        if (compt > 0) {  
            player_round_O(array, 3);
            compt = compt_(array, 3);
            printf("Points restants : %d\n", compt);
        }
    }

    return 0;
}
