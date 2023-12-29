#include <stdio.h>

int main(){

    int i;
    for (i =1; i<10000; i++){
        if ((i%11)==0 && (i%13)==0)
        break;
    }
    if(i!=10000)
        printf("%d\n", i);


    return 0;

   
}


