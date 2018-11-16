#include <stdio.h>
#include <stdlib.h>
#include <generationCode.h>



void generCode(int choixGen){
    FILE* fichier = NULL;
    fichier = fopen("C:\\Users\\Lucas\\Desktop","w+");
    if (fichier != NULL){
        switch (choixGen) {
            case 1:
                fputs("int choix = 1;", fichier);
                fclose(fichier);
            case 2:
                fputs("int choix = 2;", fichier);
                fclose(fichier);
            case 3:
                fputs("int choix = 3;", fichier);
                fclose(fichier);
            case 4:
                fputs("int choix = 4;", fichier);
                fclose(fichier);
            case 5:
                fputs("int choix = 5;", fichier);
                fclose(fichier);
            case 6:
                fputs("int choix = 6;", fichier);
                fclose(fichier);
        }


    }

    else{
        printf("Impossible d'ouvrir le fichier.");
    }
    return 0;
}
