#include "types.h"
#include "user.h"

int main(int argc, char *argv[])
{
    if(argc < 3)
    {
        printf(1, "invalid usage of setprocparam\nsetprocparam [pid] [hrrnpriority]\n");
        exit();
    }

    setprocparam(atoi(argv[1]), atoi(argv[2]));
    printf(1, "HRRN priority of process %d changed to %d\n", atoi(argv[1]), atoi(argv[2]));
    exit();
}