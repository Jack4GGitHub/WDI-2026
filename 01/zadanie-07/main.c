#include <stdio.h>

int main() {
    int A,B;

    printf("Podaj mi dwie liczby calkowite \n");
    scanf("%d", &A);
    scanf("%d", &B);
    
    if(A > B){
        printf("Liczba %d jest wieksza liczba \n", A);
        printf("Liczba %d jest mniejsza liczba \n", B);
        printf("Liczba %d > %d \n", A,B);
        
    }
    else if(A == B){printf("Liczba %d = %d \n", A,B);}
    
    else {
        printf("Liczba %d jest wieksza liczba \n", B);
        printf("Liczba %d jest mniejsza liczba \n", A);

            
    printf("Liczba %d < %d \n", A,B);
    }
    
    
    
    
    return 0;
}
