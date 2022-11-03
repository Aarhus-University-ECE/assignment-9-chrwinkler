#include "search.h"
#include <stdbool.h>

bool search(int a[], int n, int x)
{
    // pre-condiontion
    // her igen får vi en erkendelse om at den er falsk hvis den er n=0 eller n<0 derfor bruges else
    // benytter else if og else if for både at få når a[n-1]==x og a[n-1]!=x som giver true of search.

    // post-condition
    if (n > 0 && a[n - 1] == x)
    {
        return true;
    }
    else if (n > 0 && a[n - 1] != x)
    {
        return search(a, n - 1, x);
    }
    else
    {
        return false;
    }
}