#include <stdio.h>
int main() {
    int compteur = 5;
    for(int i = 0; i <= compteur; i++) {
        for(int j = 1; j <= i; j++) {
            if(j % 2 == 0)
                printf("# ");
            else
                printf("* ");
        }
        printf("\n");
    }
    return 0;
}
