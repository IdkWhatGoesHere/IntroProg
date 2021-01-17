#include <stdio.h>
#include <stdlib.h>
int busqueda();
int *crear();

int main() {
    int estudiantes,dorap;
    scanf("%d %d",&estudiantes,&dorap);
    int *matriz=crear(estudiantes);
    for(int i=0;i<estudiantes;i++){
        scanf("%d",&matriz[i]);
    }
    for(int i=0;i<dorap;i++) {
        printf("%d\n",busqueda(estudiantes,matriz));
    }
    return 0;
}
int *crear(int estudiantes){
    int *matriz;
    matriz=(int *) malloc(estudiantes*sizeof(int));
    return matriz;
}
int busqueda(int estudiantes,int *matriz){
    int pregunta, possup = estudiantes - 1, posinf = 0, m;
    scanf("%d", &pregunta);
    while (posinf < possup) {
        m = (possup + posinf) / 2;
        if (pregunta > matriz[m]) {
            posinf = m + 1;
        } else {
            possup = m;
        }
    }
    return posinf;
}
