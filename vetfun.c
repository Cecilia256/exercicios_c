#include <stdio.h>


void fun1(int vet[], int n){
        int i;
        for(i=0;i<n;i++)
        vet[i]++;
}

int main(){
      int i, vet[5]= {1,2,3,4,5};
      fun1(vet,5);
      for(i=0;i<5;i++)
        printf("%d ", vet[i]);
     
     return 0;
}