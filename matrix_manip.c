#include <stdio.h>
#include <stdlib.h>

int main(){
    int matrix[3][3] = {0};
    void org(int x[3][3]);
    int a;
    int b;

    for(a=0; a<=2; ++a){
        for(b=0; b<=2; b++){
            scanf("%d", &matrix[a][b]);
        }
    }
    org(matrix);
}

void org(int x[3][3]){
    int c;
    int d;

    for(c=0; c<=2; c++){
        for(d=0; d<=2; d++){
            printf("%d ", x[c][d]);
        }
        printf("\n");
    }
}
