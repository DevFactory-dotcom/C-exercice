#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

/* TP2 Exercice 1 */

// int main(){
//     float TVA = 1.20;
//     int HT = 10;
//     float result;

//     result = HT * TVA;

//     printf("Prix hors taxe = %d\n", HT);
//     printf("Taux de la taxe = %f\n", TVA);
//     printf("Prix TTC = %f\n", result);

//     return 0;
// }

/* TP2 Exercice 2 */

// int main(){
//     float poids = 69.2;
//     int taille = 169;
//     float result;

//     result = poids / (taille * taille) * 1000 ;

//     printf("Votre IMC est de : %f\n", result)
//     return 0;
// }

/* TP2 Exercice 3 */

// int main(){
//     float rayon = 2.0;
//     float result;

//     result = 2 * M_PI * rayon;

//     printf("Le périmètre du cercle est : %f\n", result);
//     return 0;
// }

/* TP2 Exercice 4 */

// int main(){
//     int value = 6;
//     int compteur = value - 1;

//     while (compteur > 0){
//         value *= compteur;
//         compteur -= 1;
//     };

//     printf("6! = %d\n", value);
//     return 0;
// }

/* TP3 Exercice 1 */

// int main(){
//     int HT;
//     float TVA;
//     float result;

//     printf("Entrez le prix hors taxe :\n");
//     scanf("%d", &HT);

//     printf("Entrez le taux de la TVA :\n");
//     scanf("%f", &TVA);

//     result = HT + HT * TVA;

//     printf("Le prix TTC est de : %f\n",result);

// }

/* TP3 exercice 2 */

// int main(){
//     float poids;
//     int taille;
//     float result;

//     printf("Entrez votre poids : ");
//     scanf("%f", &poids);

//     printf("Entrez votre taille : ");
//     scanf("%d", &taille);

//     result = poids / (taille * taille) * 10000 ;

//     if (result < 18.5){
//         printf("Votre IMC est de : %f. Vous êtes en sous-poids.", result);
//     }

//     else if (18.5 < result && result <= 24.9){
//         printf("Votre IMC est de : %f. Vous êtes en catégorie normale.", result );
//     }

//     else if (25.0 < result && result <= 29.9){
//         printf("Votre IMC est de : %f. Vous êtes en sur-poids.", result);
//     }

//     else if (result > 30){
//         printf("Votre IMC est de : %f. Vous êtes en obésité.", result);
//     };

//     return 0;
// }

/* TP3 exercice 3 */

// int main()
// {
//     int hour;
//     int day;
//     int month;
//     const char *hour_fact;
//     const char *month_fact;
//     const char *day_fact;

//     printf("Entrez l'heure : ");
//     scanf("%d", &hour);

//     printf("Entrez le jour de la semaine en chiffre (0 étant lundi) : ");
//     scanf("%d", &day);

//     printf("Entrez le mois en chiffre (0 étant janvier) : ");
//     scanf("%d", &month);

//     if (6 <= hour && hour <= 12){
//         hour_fact = "matin";
//     } else if (13 <= hour && hour <= 19){
//         hour_fact = "après-midi";
//     } else if (20 <= hour || hour <= 5){
//         hour_fact = "soir";
//     } if (11 <= month || month <= 2){
//         month_fact = "d'hiver";
//     } else if (3 <= month || month <= 4){
//         month_fact = "de printemps";
//     } else if (5 <= month || month <= 7){
//         month_fact = "d'été";
//     } else if (8 <= month || month <= 10){
//         month_fact = "d'automne";
//     } if (day == 5 || day == 6){
//         day_fact = "le week-end";
//     } if (day == 5 || day == 6){
//         printf("C'est un %s %s %s", hour_fact, month_fact, day_fact);
//     } else {
//         printf("C'est un %s %s", hour_fact, month_fact);
//     }
// }

/* TP3 exercice 4 */

// int main() {
//     int choice;
//     float number_1;
//     float number_2;
//     float resultat;

//     printf("1 - Addition \n");
//     printf("2 - Soustraction \n");
//     printf("3 - Multiplication \n");
//     printf("4 - Division \n");

//     printf("Veuillez saisir une opération (1 étant + et 4 /) : ");
//     scanf("%d", &choice);

//     printf("Veuillez saisir votre premier nombre : ");
//     scanf("%f", &number_1);

//     printf("Veuillez saisir votre deuxième nombre : ");
//     scanf("%f", &number_2);

//     if (choice==1) {
//         resultat = number_1 + number_2;
//         printf(" %f + %f = %f", number_1, number_2, resultat);
//     } else if (choice==2) {
//         resultat = number_1 - number_2;
//         printf(" %f - %f = %f", number_1, number_2, resultat);
//     } else if (choice==3) {
//         resultat = number_1 * number_2;
//         printf(" %f * %f = %f", number_1, number_2, resultat);
//     } else if (choice==4) {
//         resultat = number_1 / number_2;
//         printf(" %f / %f = %f", number_1, number_2, resultat);
//     } else {
//         printf("Veuillez saisir un numéro valide lister ci dessus !");
//     }  
// }

/* TP4 exercice 1 */

// int main(){
//     float moy;
//     float notes[5] = {12, 0.5, 14, 12, 10};

//     for (int i = 0; i < 5; i++){
//         moy += notes[i];
//     }

//     moy /= 5;

//     printf("La moyenne est de :%f\n", moy);
// }

/* TP4 exercice 2 */

// int main(){
//     int value;

//     printf("La valeur de la factorielle que vous voulez calculé : ");
//     scanf("%d", &value);

//     int base = value;
//     int compteur = value - 1;

//     while (compteur > 0){
//         value *= compteur;
//         compteur -= 1;
//     };

//     printf("%d! = %d\n", base, value);
//     return 0;
// }

/* TP4 exercice 3 */

// int main(){
//     int numbers[10] = { 4, 5, 1, 10, 32, 0, 9, 14, 23, 2};
//     int max = numbers[0];

//     for (int i = 0; i < 10; i++){
//         if (numbers[i] > max){
//             max = numbers[i];
//         }
//     }

//     printf("Le max de cette liste est : %d\n", max);

// }

/* TP4 exercice 4 */

// int main(){
//     int value = 10;
//     int heigth;
//     int result;

//     printf("Veuillez rentré la taille de la table de 10 que vous souhaitez : ");
//     scanf("%d", &heigth);

//     for (int i = 0; i < (heigth + 1); i++){
//         result = 10 * i;
//         printf("%d x 10 = %d\n", i, result);
//     }

// }

/* TP4 exercice 4 */

int main(){
    srand(time(NULL));

    int random = rand() % 1001;
    int choice;

    while (choice != random){
        printf("Veuillez donner votre nombre : ");
        scanf("%d", &choice);

        if (choice < random){
            printf("C'est plus grand !\n");
        } else if (choice > random){
            printf("C'est plus petit !\n");
        }
    }

    printf("Bravo la réponse était : %d\n", random);

}