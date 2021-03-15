#include <stdio.h>

int main( void ) {
    int r1 = 0;
    int r2 = 0;
    double r = 0.0;

    do{
        printf("%s", "Digite as resistências r1 e r2: ");
        scanf("%d%d", &r1, &r2);

        r = (double)(r1 * r2) / (double)(r1 + r2);
        
        printf("%s%.2lf%s", "R = ", r, "\n");
    } while( r1 != 0 && r2 != 0 );

    return 0;
}

/*
"Why don''t you come to me, then? Kiss me, sister, as we did in the old times, when we were a coven of sisters, coiled together like adders, like adders in the sands of Egypt, like hawks over Golgotha, like all things that come together and find strength as one. As it was before, when you too were young and smiled and had such dreams. Come to me, sister. Embrace me. The master awaits you. He will kiss you and hold you fast, enfolding your body like a lover."*/