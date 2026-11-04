#include <stdio.h>

double dodawaj_smalec(void) {
    int ile_kawalkow;
    int i;
    double suma;
    double parowka;

    suma = 0.0;
    printf("Ile parowek wrzucasz do kotla? ");
    scanf("%d", &ile_kawalkow);
    for (i = 0; i < ile_kawalkow; ++i) {
        printf("Zapodaj parowke nr %d: ", i + 1);
        scanf("%lf", &parowka);
        suma += parowka;
    }
    return suma;
}

double odejmuj_kartofle(void) {
    double baza;
    double ubytek;

    printf("Podaj wielki ziemniak poczatkowy: ");
    scanf("%lf", &baza);
    while (1) {
        printf("Ile odgryzasz? (Wpisz 0, zeby przestac zrec): ");
        scanf("%lf", &ubytek);
        if (ubytek == 0.0) {
            break;
        }
        baza -= ubytek;
        printf("Zostalo ziemniaka: %f\n", baza);
    }
    return baza;
}

double mnoz_krasnale(double krasnal1, double krasnal2) {
    return krasnal1 * krasnal2;
}

double dziel_pizze(double pizza, double goscie) {
    if (goscie == 0.0) {
        printf("BLAD! Nie dziel pizzy przez zero duchow!\n");
        return 0.0;
    }
    return pizza / goscie;
}

double podnies_krowe(double krowa, int moc) {
    double wynik;
    int i;

    wynik = 1.0;
    if (moc < 0) {
        for (i = 0; i < -moc; ++i) {
            wynik *= krowa;
        }
        return 1.0 / wynik;
    }
    for (i = 0; i < moc; ++i) {
        wynik *= krowa;
    }
    return wynik;
}

double kwadrat_kaczki(double kaczka) {
    return kaczka * kaczka;
}

long silnia_jednorozca(int jednorozec) {
    long wynik;
    int i;

    wynik = 1;
    if (jednorozec < 0) {
        printf("Jednorozec nie moze byc ujemny!\n");
        return 0;
    }
    for (i = 1; i <= jednorozec; ++i) {
        wynik *= i;
    }
    return wynik;
}

int main(void) {
    int wybor;
    double bulbulator1;
    double bulbulator2;
    double wynik_magiczny;
    int wykladnik_tajny;

    while (1) {
        printf("1. Polacz smakolyki w wielka mase (Dodawanie n liczb)\n");
        printf("2. Bierz po kawalku az powiesz '0' (Odejmowanie)\n");
        printf("3. Sklonuj krasnale (Mnozenie 2 liczb)\n");
        printf("4. Pokroj pizze na kawalki (Dzielenie)\n");
        printf("5. Wyslij krowe w kosmos (Potegowanie)\n");
        printf("6. Zrob z kaczki kwadrat (Kwadrat liczby)\n");
        printf("7. Magia jednorozca (Silnia)\n");
        printf("0. Ewakuacja z systemu (Wyjscie)\n");
        printf("Zapodaj cyfre przeznaczenia: ");

        if (scanf("%d", &wybor) != 1) {
            break;
        }

        if (wybor == 0) {
            printf("Uciekasz? Szkoda, bulbulator placze...\n");
            break;
        }

        switch (wybor) {
            case 1:
                wynik_magiczny = dodawaj_smalec();
                printf("Oto calkowita masa smalcu: %f\n", wynik_magiczny);
                break;
            case 2:
                wynik_magiczny = odejmuj_kartofle();
                printf("Ostateczny ogryzek: %f\n", wynik_magiczny);
                break;
            case 3:
                printf("Daj pierwszego krasnala: ");
                scanf("%lf", &bulbulator1);
                printf("Daj drugiego krasnala: ");
                scanf("%lf", &bulbulator2);
                printf("Po rozmnozeniu powstalo: %f krasnali\n", mnoz_krasnale(bulbulator1, bulbulator2));
                break;
            case 4:
                printf("Ile masz pizzy? ");
                scanf("%lf", &bulbulator1);
                printf("Ilu masz zglodnialych gosci? ");
                scanf("%lf", &bulbulator2);
                printf("Kazdy dostanie dokladnie: %f pizzy\n", dziel_pizze(bulbulator1, bulbulator2));
                break;
            case 5:
                printf("Podaj mase krowy: ");
                scanf("%lf", &bulbulator1);
                printf("Moc rakiety (wykladnik calkowity): ");
                scanf("%d", &wykladnik_tajny);
                printf("Krowa poleciala na wysokosc: %f\n", podnies_krowe(bulbulator1, wykladnik_tajny));
                break;
            case 6:
                printf("Jak wielka jest kaczka? ");
                scanf("%lf", &bulbulator1);
                printf("Powstala kwadratowa kaczka o powierzchni: %f\n", kwadrat_kaczki(bulbulator1));
                break;
            case 7:
                printf("Podaj liczbe rogow jednorozca (calkowita >= 0): ");
                scanf("%d", &wykladnik_tajny);
                printf("Moc jednorozca wynosi: %ld\n", silnia_jednorozca(wykladnik_tajny));
                break;
            default:
                printf("Co Ty klikasz czlowieku? Zly numer!\n");
                break;
        }
    }
    return 0;
}
