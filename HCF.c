#include <stdio.h>
int main()
{
    int k, r, s, G;

    printf("Enter two integers: ");
    scanf("%d %d", &k, &r);

    for(s=1; s <= k && s <= r; ++s)
    {
        if(k%s==0 && r%s==0)
            G = s;
    }

    printf("G.C.D of %d and %d is %d", k, r, G);

    return 0;
}
