#include <stdlib.h>

#define EXIT_ON_ERR(func)                                                      \
  if ((func) < 0)                                                              \
    exit(EXIT_FAILURE);

int parse_uint(unsigned int *const, const char *const);
