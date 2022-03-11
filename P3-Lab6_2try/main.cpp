#include "agenda.h"

int main() {

    CBST b;

    int dim;

    cout<<"Dimensiune:"<<endl;cin >> dim;

    CActivitati* a = new CActivitati[dim];

    for (int i = 0;i < dim;i++) {
        a[i].citire();
    }
    b.rad = b.inserare(a[0]);
    for (int i = 1;i < dim;i++) {
        b.inserare(a[i]);
    }
    b.inordine(b.rad);

    delete[] a;

    return 0;
}