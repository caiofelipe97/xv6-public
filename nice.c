#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char **argv)
{
  if(argc < 2 || argc > 3){
    printf(2, "error in number of arguments usage: nice...\n");
    exit();
  }
  if(argc == 2){
    printf(1, "%d\n",getpriority(atoi(argv[1])));

  }
  else if(argc ==3){
    printf(1, "%d\n",setpriority(atoi(argv[1]), atoi(argv[2])));

  }
  exit();
}
