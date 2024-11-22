#include <stdio.h>

#define BOTTOM_SPACE "\n\n\n"
#define HEIGHT 18
#define OFFSET "                 "
#define TOP_SPACE "\n\n\n"

int main(void)
{
    int ninthLetter;
    printf(TOP_SPACE);
    printf(OFFSET "IIIIIIIIIIIII\n");
    printf(OFFSET "IIIIIIIIIIIII\n");
    for (ninthLetter = 0; ninthLetter < HEIGHT; ++ninthLetter)
        printf(OFFSET "    IIIII\n");
    printf(OFFSET "IIIIIIIIIIIII\n");
    printf(OFFSET "IIIIIIIIIIIII\n");
    printf(BOTTOM_SPACE);
    return 0;
}
