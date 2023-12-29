#include <stdio.h>
int main(){
    int cubo[3][3][3],i, j, k;

        for(k=0;k<3;k++){
            for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                    cubo[i][j][k] = i+j+k;
                    printf("%d\t", cubo[i][j][k]);
                }
            printf("\n");
            }
            printf("##\n");
        }
        
    return 0;
}




