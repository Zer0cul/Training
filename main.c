#include <stdio.h>
#include <stdlib.h>

#include "vmfunction.h"

const char* message = "aguments are";

int 
main(int argc, char** argv)
{
    if (argc < 2)
    {
        printf(message);
        for (int i=0; i<argc; ++i)
        {
            printf("arg #%i is \"%s\"\n", i, argc[i];
        }
        return 0;
    }
    return getRevenue(atoi(argv[1]), atoi(argv[2]));
}
