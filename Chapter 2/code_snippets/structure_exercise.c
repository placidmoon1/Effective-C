#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  struct sigrecord {
    int signum;
    char signame[20];
    char sigdesc[100];
  } sigline, *sigline_p;

  sigline.signum = 5;
  strcpy(sigline.signame, "SIGINT");
  strcpy(sigline.sigdesc, "Interrupt from keyboard");

  printf("Sigrecord:\nsignum: %d (%s)\nsigdesc: %s\n", 
          sigline.signum, sigline.signame, sigline.sigdesc);

  sigline_p = &sigline;
  sigline_p->signum = 24;
  strcpy(sigline_p->signame, "SIGTSTP");
  printf("Modified Sigrecord:\nsignum: %d (%s)\nsigdesc: %s\n", 
        sigline.signum, sigline.signame, sigline.sigdesc);

  return EXIT_SUCCESS;
}