#include <u.h>

#include <libc.h>

#include "sout_printout.h"
#include "sout_text.h"

void main(void) {
  int sum = 5 + 5;
  char *msg = "5 + 5";
  soutf("%s is %d\n", msg, sum);

  exits(nil);
}
