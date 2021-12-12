#include "types.h"
#include "user.h"

int main(int argc, char *argv[])
{
    if(argc < 2)
    {
        printf(1, "invalid usage of setsysparam\nsetsysparam [hrrnpriority]\n");
        exit();
    }

    setsysparam(atoi(argv[1]));
    printf(1, "HRRN priority of all processes changed to %d\n", atoi(argv[1]));
    exit();
}