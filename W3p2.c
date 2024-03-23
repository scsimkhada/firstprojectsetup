/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #3 (P2)
Full Name  : Subash Chandra Simkhada
Student ID#: 149827230
Email      : scsimkhada@myseneca.ca
Section    : ZFF

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#include <stdio.h>
int main(void) {
    char C1, C2, C3;
    char Cream_A, Cream_B, Cream_C;
    char strength, Cream_pref;
    int nServings;
    const double GRAMS_IN_LBS = 453.5924;
    int C1_wt, C2_wt, C3_wt;
    printf("Take a Break - Coffee Shop\n");
    printf("==========================\n");
    printf("\nEnter the coffee product information being sold today...\n\n");

    printf("COFFEE-1...\n");
    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf_s(" %c", &C1);
    printf("Bag weight (g): ");
    scanf_s("%d", &C1_wt);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf_s(" %c", &Cream_A);
    printf("\n\nCOFFEE-2...\n");
    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf_s(" %c", &C2);
    printf("Bag weight (g): ");
    scanf_s("%d", &C2_wt);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf_s(" %c", &Cream_B);
    printf("\n\nCOFFEE-3...\n");
    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf_s(" %c", &C3);
    printf("Bag weight (g): ");
    scanf_s("%d", &C3_wt);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf_s(" %c", &Cream_C);
    printf("\n\n");
    printf("---+------------------------+---------------+-------+\n");
    printf("   |    Coffee              |   Packaged    | Best  |\n");
    printf("   |     Type               |  Bag Weight   | Served|\n");
    printf("   +------------------------+---------------+ With  |\n");
    printf("ID | Light | Medium | Rich  |  (G) | Lbs    | Cream |\n");
    printf("---+------------------------+---------------+-------|\n");
    printf(" 1 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n", (C1 == 'L' || C1 == 'l'), (C1 == 'M' || C1 == 'm'), (C1 == 'R' || C1 == 'r'), C1_wt, C1_wt / GRAMS_IN_LBS, (Cream_A == 'Y' || Cream_A == 'y'));
    printf(" 2 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n", (C2 == 'L' || C2 == 'l'), (C2 == 'M' || C2 == 'm'), (C2 == 'R' || C2 == 'r'), C2_wt, C2_wt / GRAMS_IN_LBS, (Cream_A == 'Y' || Cream_B == 'y'));
    printf(" 3 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n\n", (C3 == 'L' || C3 == 'l'), (C3 == 'M' || C3 == 'm'), (C3 == 'R' || C3 == 'r'), C3_wt, C3_wt / GRAMS_IN_LBS, (Cream_A == 'Y' || Cream_C == 'y'));

    printf("Enter how you like your coffee...\n\n");

    printf("Coffee strength ([L]ight, [M]edium, [R]ich): ");
    scanf_s(" %c", &strength);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf_s(" %c", &Cream_pref);
    printf("Typical number of daily servings: ");
    scanf_s("%d", &nServings);
    printf("\n\nThe below table shows how your preferences align to the available products:\n\n");
    printf("--------------------+-------------+-------+\n");
    printf("  |     Coffee      |  Packaged   | With  |\n");
    printf("ID|      Type       | Bag Weight  | Cream |\n");
    printf("--+-----------------+-------------+-------+\n");
    printf(" 1|       %d         |      %d      |   %d   |\n", ((strength == 'L' || strength == 'l') && (C1 == 'L' || C1 == 'l')) || ((strength == 'M' || strength == 'm') && (C1 == 'M' || C1 == 'm')) || ((strength == 'R' || strength == 'r') && (C1 == 'R' || C1 == 'r')), ((nServings >= 1 && nServings <= 4) && (C1_wt >= 250 && C1_wt < 500)) || ((nServings >= 5 && nServings <= 9) && (C1_wt >= 500 && C1_wt < 1000)) || ((nServings >= 10) && (C1_wt >= 1000)), ((Cream_pref == 'y' || Cream_pref == 'Y') && (Cream_A == 'Y' || Cream_A == 'y')) || ((Cream_pref == 'n' || Cream_pref == 'N') && (Cream_A == 'n' || Cream_A == 'N')));
    printf(" 2|       %d         |      %d      |   %d   |\n", ((strength == 'L' || strength == 'l') && (C2 == 'L' || C2 == 'l')) || ((strength == 'M' || strength == 'm') && (C2 == 'M' || C2 == 'm')) || ((strength == 'R' || strength == 'r') && (C2 == 'R' || C2 == 'r')), ((nServings >= 1 && nServings <= 4) && (C2_wt >= 250 && C2_wt < 500)) || ((nServings >= 5 && nServings <= 9) && (C2_wt >= 500 && C2_wt < 1000)) || ((nServings >= 10) && (C2_wt >= 1000)), ((Cream_pref == 'y' || Cream_pref == 'Y') && (Cream_B == 'Y' || Cream_B == 'y')) || ((Cream_pref == 'n' || Cream_pref == 'N') && (Cream_B == 'n' || Cream_B == 'N')));
    printf(" 3|       %d         |      %d      |   %d   |\n\n", ((strength == 'L' || strength == 'l') && (C3 == 'L' || C3 == 'l')) || ((strength == 'M' || strength == 'm') && (C3 == 'M' || C3 == 'm')) || ((strength == 'R' || strength == 'r') && (C3 == 'R' || C3 == 'r')), ((nServings >= 1 && nServings <= 4) && (C3_wt >= 250 && C3_wt < 500)) || ((nServings >= 5 && nServings <= 9) && (C3_wt >= 500 && C3_wt < 1000)) || ((nServings >= 10) && (C3_wt >= 1000)), ((Cream_pref == 'y' || Cream_pref == 'Y') && (Cream_C == 'Y' || Cream_C == 'y')) || ((Cream_pref == 'n' || Cream_pref == 'N') && (Cream_C == 'n' || Cream_C == 'N')));

    printf("Enter how you like your coffee...\n\n");

    printf("Coffee strength ([L]ight, [M]edium, [R]ich): ");
    scanf_s(" %c", &strength);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf_s(" %c", &Cream_pref);
    printf("Typical number of daily servings: ");
    scanf_s("%d", &nServings);
    printf("\n\nThe below table shows how your preferences align to the available products:\n\n");
    printf("--------------------+-------------+-------+\n");
    printf("  |     Coffee      |  Packaged   | With  |\n");
    printf("ID|      Type       | Bag Weight  | Cream |\n");
    printf("--+-----------------+-------------+-------+\n");
    printf(" 1|       %d         |      %d      |   %d   |\n", ((strength == 'L' || strength == 'l') && (C1 == 'L' || C1 == 'l')) || ((strength == 'M' || strength == 'm') && (C1 == 'M' || C1 == 'm')) || ((strength == 'R' || strength == 'r') && (C1 == 'R' || C1 == 'r')), ((nServings >= 1 && nServings <= 4) && (C1_wt >= 250)) || ((nServings >= 5 && nServings <= 9) && (C1_wt >= 500)) || ((nServings >= 10) && (C1_wt >= 1000)), ((Cream_pref == 'y' || Cream_pref == 'Y') && (Cream_A == 'Y' || Cream_A == 'y')) || ((Cream_pref == 'n' || Cream_pref == 'N') && (Cream_A == 'n' || Cream_A == 'N')));
    printf(" 2|       %d         |      %d      |   %d   |\n", ((strength == 'L' || strength == 'l') && (C2 == 'L' || C2 == 'l')) || ((strength == 'M' || strength == 'm') && (C2 == 'M' || C2 == 'm')) || ((strength == 'R' || strength == 'r') && (C2 == 'R' || C2 == 'r')), ((nServings >= 1 && nServings <= 4) && (C2_wt >= 250)) || ((nServings >= 5 && nServings <= 9) && (C2_wt >= 500)) || ((nServings >= 10) && (C2_wt >= 1000)), ((Cream_pref == 'y' || Cream_pref == 'Y') && (Cream_B == 'Y' || Cream_B == 'y')) || ((Cream_pref == 'n' || Cream_pref == 'N') && (Cream_B == 'n' || Cream_B == 'N')));
    printf(" 3|       %d         |      %d      |   %d   |\n\n", ((strength == 'L' || strength == 'l') && (C3 == 'L' || C3 == 'l')) || ((strength == 'M' || strength == 'm') && (C3 == 'M' || C3 == 'm')) || ((strength == 'R' || strength == 'r') && (C3 == 'R' || C3 == 'r')), ((nServings >= 1 && nServings <= 4) && (C3_wt >= 250)) || ((nServings >= 5 && nServings <= 9) && (C3_wt >= 500)) || ((nServings >= 10) && (C3_wt >= 1000)), ((Cream_pref == 'y' || Cream_pref == 'Y') && (Cream_C == 'Y' || Cream_C == 'y')) || ((Cream_pref == 'n' || Cream_pref == 'N') && (Cream_C == 'n' || Cream_C == 'N')));

    printf("Hope you found a product that suits your likes!\n");

    return 0;

}