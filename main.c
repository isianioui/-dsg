#include <stdio.h>

void dessin(int taille_base , char pos_base){
    int i, j;

    if (pos_base == 'b') {
       
        for (i = 1; i <= taille_base; i++) {
            for (j = 1; j <= i; j++) {
                printf("*");
            }
            printf("\n");
        }
    } else if (pos_base == 'h') {
        
        for (i = taille_base; i > 0; i--) {
            for (j = 1; j <= i; j++) {
                printf("*");
            }
            printf("\n");
        }
    } else {
        
        printf("Invalid position base character. Use 'b' for base at bottom or 'h' for base at top.\n");
    }
}

int main (){
    dessin(9, 'b');
    printf("\n");
    dessin(9, 'h');
    return 0;
}
