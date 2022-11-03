#include "sum.h"

int sum(int a[], int n)
{
    // pre-condition
    // vi ved at hvis n = 0 skal den returne 0
    // vi har heller ikke nogen condition for n<0 så der vil den også returne 0
    // derfor benytter vi else og ikke else if

    // post-condition
    // for en værdi printede med mindre n =< 0 så returner den 0.
    // n > 0 returner den totale sum.
    if (n > 0)
    {
        return a[n - 1] + sum(a, n - 1);
    }
    else
    {
        return 0;
    }
}