#include <stdio.h>
#include <sys/resource.h>

int main() {
  struct rlimit lim;
  getrlimit(RLIMIT_STACK,&limit);
  printf("stack size: %ld\n", limit.rlim_cur);//RLIMIT_STACK
  getrlimit(RLIMIT_NPROC,&limit);
  printf("process limit: %ld\n", limit.rlim_cur);//RLIMIT_NPROC
  getrlimit(RLIMIT_NOFILE,&limit);
  printf("max file descriptors: %ld\n", limit.rlim_cur);//RLIMIT_NOFILE
  return 0;
}
