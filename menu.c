#include <stdio.h>
#include <stdlib.h>//
#include <menu.h>
#include <generationCode.h>

int choix;

void menu (i){
    printf("Quel allumage souhaitez-vous ?\n\t1->Tout\n\t2->half\n\t3->chenille\n\t4->double chenille\n\t5->Pas a pas\n");
    scanf("%d",choix);
    switch(choix){
        case 1:
            choixGen = 1;
            generCode(choixGen);
    }
}