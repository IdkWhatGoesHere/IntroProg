#include <stdio.h>
#include <stdlib.h>
int **crear(int n, int m);
int destapar(int **matriz);

int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int **matriz=crear(n,m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&matriz[i][j]);
        }
    }
    printf("%d",destapar(matriz));
    for(int i=0;i<m;i++){
        free(matriz[i]);
    }
    free(matriz);
    return 0;
}

int **crear(int n, int m){
    int **matriz;
    matriz=(int **) malloc(n*sizeof(int *));
    for(int i=0;i<n;i++){
        matriz[i]=(int *) malloc(m*sizeof(int));
    }
    return matriz;
}
int destapar(int **matriz){
    int intentos,aux=0,posi,posj;
    scanf("%d",&intentos);
    for(int i=0;i<intentos;i++){
        scanf("%d %d",&posi,&posj);
        aux+=matriz[posi][posj];
    }
    return aux;
}
