#include <stdio.h>
#include <stdlib.h>

#include "vmfunction.h"

int 
main(int argc, char** argv)
{
    if (argc < 2)
    {
        printf("aguments are");
        for (int i=0; i<argc; ++i)
        {
            printf("arg #%i is \"%s\"\n", i, atoi(argc[i]);
        }
        return 0;
    }
    
    return GetRevenue(atoi(argv[1]), atoi(argv[2]));
}