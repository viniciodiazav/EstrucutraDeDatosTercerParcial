#include <iostream>
#include "EscribirTxt.h"

using namespace std;

int main()
{
    EscribirTxt* estxt = new EscribirTxt("../archivoTxt.txt");

    int var = 8;
    int* a1 = new int[5];
    for (int i = 0; i < 5; i++) {
        *(a1 + i) = i + 2;
    }

    estxt->escribirArreglo(a1, 5);
    estxt->escribirVariable(var, "var");

    return 0;
}
