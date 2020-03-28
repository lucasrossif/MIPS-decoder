#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX 294


int main(void) {

  char inputname[MAX];

  /*
  * Get name of inputfile
  */
  printf("Digite o nome do arquivo de entrada: ");
  gets(inputname);

  /*
  * Verify if name of inputfile is pass
  */
  if( inputname[0] == '\0' ) {

    /*
    * Call func for translate MIPS CODE in * binary using terminal
    */
    commandsToBinary();
  } else {
    /*
    * Call func for translate MIPS CODE 
    * using system file 
    */
    fileToBinary(&inputname);
  }

  return 0;
}
