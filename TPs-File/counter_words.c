#include <stdio.h>

int compt_words(const char *chemin){
    FILE *file;
    char mot;
    int compt = 0;

    file = fopen(chemin,"r");

    while((mot = fgetc(file)) != EOF){
        if (file == NULL){
            return 1;
        }
        
        if (mot == ' '){
            compt++;
        } else if (mot == '\n'){
            compt++;
        } else if (mot == '\0'){
            return 0;
        }
        
    }
        
        
        printf("Le nombre de mot du fichier %s est de : %d\n", chemin,compt);
        fclose(file);
        return 0;
}

int main(){
    compt_words("file.txt");


    return 0;
}