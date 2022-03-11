#include "agenda.h"

CActivitati* CBST::inserare(CActivitati a) {
    CActivitati* nodnou = rad->nodNou(a);
    CActivitati* x = rad;
    CActivitati* y = NULL;

    while (x != NULL) {
        y = x;
        if (a.data.an < x->data.an) {
            x = x->stanga;
        }
        else if (a.data.an == x->data.an && a.data.luna < x->data.luna) {
            x = x->stanga;
        }
        else if (a.data.an == x->data.an && a.data.luna == x->data.luna && a.data.zi < x->data.zi) {
            x = x->stanga;
        }         
        else
            x = x->dreapta;
    }
    if (y == NULL)
        y = nodnou;
    else if (a.data.an < y->data.an)
        y->stanga = nodnou;
    else if (a.data.an == y->data.an && a.data.luna < y->data.luna) {
        y->stanga = nodnou;
    }
    else if (a.data.an == y->data.an && a.data.luna == y->data.luna && a.data.zi < y->data.zi) {
        y->stanga = nodnou;
    }
    else
        y->dreapta = nodnou;

    return y;
}

void CBST::inordine(CActivitati* r)
{
    if (r == NULL)
        return;
    else {
        inordine(r->stanga);
        r->afisare();cout << endl;
        inordine(r->dreapta);
    }
}
