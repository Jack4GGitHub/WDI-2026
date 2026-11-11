#include <stdio.h>

void Merge(int TablicaGlowna[], int IndeksLewy, int IndeksSrodek, int IndeksPrawy) {
    int IndeksI;
    int IndeksJ;
    int IndeksK;
    int RozmiarL;
    int RozmiarR;
    int TablicaL[10];
    int TablicaR[10];

    RozmiarL = IndeksSrodek - IndeksLewy + 1;
    RozmiarR = IndeksPrawy - IndeksSrodek;

    for (IndeksI = 0; IndeksI < RozmiarL; IndeksI++) {
        TablicaL[IndeksI] = TablicaGlowna[IndeksLewy + IndeksI];
    }
    for (IndeksJ = 0; IndeksJ < RozmiarR; IndeksJ++) {
        TablicaR[IndeksJ] = TablicaGlowna[IndeksSrodek + 1 + IndeksJ];
    }

    IndeksI = 0;
    IndeksJ = 0;
    IndeksK = IndeksLewy;

    while (IndeksI < RozmiarL && IndeksJ < RozmiarR) {
        if (TablicaL[IndeksI] <= TablicaR[IndeksJ]) {
            TablicaGlowna[IndeksK] = TablicaL[IndeksI];
            IndeksI++;
        } else {
            TablicaGlowna[IndeksK] = TablicaR[IndeksJ];
            IndeksJ++;
        }
        IndeksK++;
    }

    while (IndeksI < RozmiarL) {
        TablicaGlowna[IndeksK] = TablicaL[IndeksI];
        IndeksI++;
        IndeksK++;
    }

    while (IndeksJ < RozmiarR) {
        TablicaGlowna[IndeksK] = TablicaR[IndeksJ];
        IndeksJ++;
        IndeksK++;
    }
}

void MergeSort(int TablicaGlowna[], int IndeksLewy, int IndeksPrawy) {
    int IndeksSrodek;

    if (IndeksLewy < IndeksPrawy) {
        IndeksSrodek = IndeksLewy + (IndeksPrawy - IndeksLewy) / 2;

        MergeSort(TablicaGlowna, IndeksLewy, IndeksSrodek);
        MergeSort(TablicaGlowna, IndeksSrodek + 1, IndeksPrawy);

        Merge(TablicaGlowna, IndeksLewy, IndeksSrodek, IndeksPrawy);
    }
}

int main(void) {
    int TablicaGlowna[10];
    int IndeksPetli;

    printf("Wprowadz 10 liczb calkowitych:\n");
    for (IndeksPetli = 0; IndeksPetli < 10; IndeksPetli++) {
        printf("Element [%d]: ", IndeksPetli + 1);
        scanf("%d", &TablicaGlowna[IndeksPetli]);
    }

    MergeSort(TablicaGlowna, 0, 9);

    printf("\nPosortowana tablica:\n");
    for (IndeksPetli = 0; IndeksPetli < 10; IndeksPetli++) {
        printf("%d ", TablicaGlowna[IndeksPetli]);
    }
    printf("\n");

    return 0;
}
