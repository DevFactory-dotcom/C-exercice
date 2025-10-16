#include <stdio.h>

int main(){
    FILE *file;
    char buffer[256];
    int compt = 0;

    file = fopen("file.txt","r");

    if (file == NULL){
        return 1;
    }

    while (fgets(buffer,sizeof(buffer),file) != NULL){
        printf("%s", buffer);
        compt++;
    }
        

    printf("Le nombre de ligne de ce fichier est de : %d\n", compt);
    fclose(file);

}