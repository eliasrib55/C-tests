#include <stdio.h>
#include <stdlib.h>


int main(){
    float notas[4][4]={0};
    float media[4]={0};

    for(int a=0; a<=3; a++){
        printf("Insira as notas do aluno %i:\n", a+1);
        for(int b=0; b<=3; b++){
            scanf("%f", &notas[a][b]);
        }
    }
    for(int c=0; c<=3; c++){
        for(int d=0; d<=3; d++){
            media[c] += (notas[c][d]/4);
        }
    printf("Media %i = %.1f\n", c+1, media[c]);
    }
    system("pause");
    return 0;
}
