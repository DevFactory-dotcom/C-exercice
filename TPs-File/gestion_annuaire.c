#include <stdio.h>

int print_annuaire(){
    FILE *file;
    char buffer[256];

    file = fopen("annuaire.txt","r");

    if (file == NULL){
        return 1;
    }

    while (fgets(buffer,sizeof(buffer),file) != NULL){
        printf("%s \n", buffer);
    }
    fclose(file);
    return 0;
}

void ecrire_annuaire(){
    FILE *file;
    char name[50];
    char nickname[50];

    printf("Quel est le prénom de la personne que vous voulez entrer ?\n");
    scanf("%s",&name);

    printf("Quel est le nom de la personne que vous voulez entrer ?\n");
    scanf("%s",&nickname);
        
    file = fopen("annuaire.txt", "a");


    fprintf(file, "%s %s \n", name,nickname);
    fclose(file);
}

void interface_annuaire(){
    int choice;
    int a = 0;
    
    while (a != 1){
    printf("\n===== Menu de l'annuaire =====\n1. Voir l'annuaire\n2. Ajouter un nom et prénom\n3. Quitter\nVeuillez entrer votre choix : ");
    scanf("%d",&choice);

        if (choice == 1){
            print_annuaire();
            choice = 0;
        }else if (choice == 2){
            ecrire_annuaire();
            choice = 0;
        } else if (choice == 3) {
            a = 1;
            choice = 0;
        }
    }
}

int main(){
    interface_annuaire();

    return 0;
}