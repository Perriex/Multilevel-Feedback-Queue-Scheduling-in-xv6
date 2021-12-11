#include "types.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  if(argc < 3)
  {
    printf(1, "chpp [pid] [proroty]=1|2|3\n");
    exit();
  }

  chpp(atoi(argv[1]), atoi(argv[2]));
  printf(1, "done pid:%d proc:%d\n", atoi(argv[1]), atoi(argv[2]));
  exit();
}
