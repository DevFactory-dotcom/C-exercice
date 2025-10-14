#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>



/* Projet Bataille */

typedef enum color{
    Pique,
    Coeur,
    Carreau,
    Trefle
} color;

typedef struct Card{
    int value;
    enum color color;
} Card;

typedef struct Deck {
    int size;
    Card cards[52];
} Deck;

Deck init_deck();
Deck print_deck(Deck this_deck);
void check_card(Deck this_deck, int number);
void shuffle(Deck *deck);
int compare_Cards(Card *card1 , Card *card2);
void exchange_Cards(Deck *deck1, Deck *deck2);
void playTurn(Deck *deck1, Deck *deck2);

Deck init_deck(){
    Deck this_deck;
    this_deck.size = 52;
    int compt = 0;
    for (int i = 0; i < 4; i++){
        for (int j = 1; j <= 13; j++){
            Card carte;
            carte.color = i;
            carte.value = j;
            this_deck.cards[compt] = carte;
            compt++;
        }
    }
    return this_deck;
}

void check_card( Deck this_deck, int number){
    if (this_deck.cards[number].value == 1){
        printf("As de ");
    }
    if (this_deck.cards[number].value == 13){
        printf("Roi de ");
    }
    if (this_deck.cards[number].value == 12){
        printf("Dame de ");
    }
    if (this_deck.cards[number].value == 11){
        printf("Valet de ");
    }
}


Deck print_deck(Deck this_deck){
    for (int i = 0; i < 52;i++){
        if(this_deck.cards[i].value == 1 || this_deck.cards[i].value == 11 || this_deck.cards[i].value == 12 ||this_deck.cards[i].value == 13){
            if (this_deck.cards[i].color == 0){
                check_card(this_deck, i);
                printf("Pique\n");
            }
            if (this_deck.cards[i].color == 1){
                check_card(this_deck, i);
                printf("Coeur\n");
            }
            if (this_deck.cards[i].color == 2){
                check_card(this_deck, i);
                printf("Carreau\n");
            }
            if (this_deck.cards[i].color == 3){
                check_card(this_deck, i);
                printf("Trèfle\n");
            }
        } else {
            if (this_deck.cards[i].color == 0){
                printf("%d de Pique \n",this_deck.cards[i].value);
            }
            if (this_deck.cards[i].color == 1){
                printf("%d de Coeur \n",this_deck.cards[i].value);
            }
            if (this_deck.cards[i].color == 2){
                printf("%d de Carreau \n",this_deck.cards[i].value);
            }
            if (this_deck.cards[i].color == 3){
                printf("%d de Trèfle \n",this_deck.cards[i].value);
            }
        }

    }
    return this_deck;
}

void shuffle (Deck *deck){

    for (int i = 0; i < 51; i++){
        int j = rand() % 52;
        Card swap = deck->cards[i];
        deck->cards[i] = deck->cards[j];
        deck->cards[j] = swap;
    }
}

int compare_Cards(Card *card1 , Card *card2){
    if (card1->value > card2->value) {
        return 0;
    } else if (card1->value < card2->value) {
        return 1;
    } else if (card1->value == card2->value)  {
        if (card1->color > card2->color) {
            return 0;
        } else if  (card1->color < card2->color) {
            return 1;
    } 
    }
    else {
        return 1;
    }
    return 1;
}

void exchange_Cards(Deck *deck1, Deck *deck2){
    if (deck1->size == 0 || deck2->size >= 52) {
        return;
    }
    Card switched_card;
    switched_card = deck1->cards[0];
    deck2->cards[deck2->size] = switched_card;
    deck2->size++;
    for (int i = 0; i < deck1->size - 1; i++) {
        deck1->cards[i] = deck1->cards[i+1];
    }
    deck1->size--;
}

void playTurn(Deck *deck1, Deck *deck2) {
    Card card1 = deck1->cards[0];
    Card card2 = deck2->cards[0];

    printf("Le joueur 1 joue %d de %d\n", card1.value, card1.color);
    printf("Le joueur 2 joue %d de %d\n", card2.value, card2.color);

    int result = compare_Cards(&card1, &card2);

    if (result == 0) {
        exchange_Cards(deck2, deck1);
        exchange_Cards(deck1, deck1);
        printf("Le joueur 1 a gagné !\n");
    } else {
        exchange_Cards(deck1, deck2);
        exchange_Cards(deck2, deck2);
        printf("Le joueur 2 a gagné !\n");
    }
}



int main() {

    int compteur = 0;
    srand(time(NULL));
    Deck fullDeck = init_deck();
    shuffle(&fullDeck);

    Deck deck1;
    Deck deck2;
    
    deck1.size = 26;
    deck2.size = 26;

    for (int i=0;i<26;i++) {
        deck1.cards[i] = fullDeck.cards[i];
        deck2.cards[i] = fullDeck.cards[i + 26];
    }


    while (deck1.size > 0 && deck2.size > 0) {
        playTurn(&deck1, &deck2);
        compteur++;
    }
    if (deck1.size == 0) {
        printf("Le joueur 2 à gagné avec %d tours !", compteur);
    } else {
        printf("Le joueur 1 à gagné avec %d tours !", compteur);
    }
}
