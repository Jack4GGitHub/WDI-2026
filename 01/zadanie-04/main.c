#include <stdio.h>

int main() {
    int a, b, c;
    int suma, roznica, iloczyn;
    float iloraz;

    printf("Podaj pierwsza liczbe calkowita: ");
    scanf("%d", &a);
    printf("Podaj druga liczbe calkowita: ");
    scanf("%d", &b);
    printf("Podaj trzecia liczbe calkowita: ");
    scanf("%d", &c);
    
    suma = a + b + c;
    roznica = a - b;
    iloczyn = a * c;

    printf("\nSuma trzech: %d\n", suma);
    printf("Roznica pierwszych dwoch (a - b): %d\n", roznica);
    printf("Iloczyn pierwszej i trzeciej (a * c): %d\n", iloczyn);

    iloraz = c / b;
    
        printf("Iloraz trzeciej i drugiej (c / b): %.2f\n", iloraz);
    return 0;
}
