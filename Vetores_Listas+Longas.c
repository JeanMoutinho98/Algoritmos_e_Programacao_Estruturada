#include <stdio.h>                                      // Ideal para listas mais longas.
                                            
int main(){                                             
    int vetor[4];


    for(int i = 0; i<=3; i++){
        printf("%d", &vetor[i]);
    }

return 0;
}