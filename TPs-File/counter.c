#include <stdio.h>



int read_file(){
    FILE *file;
    char buffer[256];


    file = fopen("count.txt","r");

    if (file == NULL){
        return 1;
    }

    while (fgets(buffer,sizeof(buffer),file) != NULL){
        printf("%s", buffer);
    }
    fclose(file);
    return 1;
}

int main(){
    FILE *file;
    int count = 0;


    file = fopen("count.txt","r");

if (file != NULL) {
        fscanf(file, "%d", &count); 
        fclose(file);
    }

    count++;
        
    file = fopen("count.txt", "w");
    if (file == NULL) {
        printf("Erreur : impossible d'ouvrir le fichier.\n");
        return 1;
    }

    fprintf(file, "%d", count);
    fclose(file);

    printf("Le programme a été exécuté %d fois.\n", count);
    read_file();

    return 0;
}

