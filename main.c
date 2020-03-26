#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define MAX 256

void readFile() {

  int num, i, j, c, f;
  char binario; 

  FILE *fp1, *fp2;
  char ch[20000], src[MAX], tgt[MAX];

  /* get the input file name from the user */
  printf("Enter your input file name:");
  scanf("%s", src);

  /* get the output filename from the user */
  printf("Enter your output file name:");
  scanf("%s", tgt);

  /* open the source file in read mode */
  fp1 = fopen(src, "r");

  /* error handling */
  if (!fp1) {
          printf("Unable to open the input file!!\n");
          return ;
  }

  /* open the target file in binary write mode */
  fp2 = fopen(tgt, "ab");

  /* error handling */
  if (!fp2) {
      printf("Unable to open the output file!!\n");
      return ;
  }

  /*
    * read data from input file and write
    * the binary form of it in output file
    */
  while (!feof(fp1)) {
      /* reading one byte of data */
      fread(&ch, sizeof(char), 1, fp1);
      /* converting the character to ascii integer value */

      for( i = 0; ch[i]!='\0'; i++) {

      c = ch[i];

      for( j = strlen(ch); j + 1 > 0; j-- ) {
          
      switch(ch[i]) {
        case "sll" :
          binario = '000 0000';	
          fwrite(&binario, sizeof(int), 1, fp2);
        case "srl" :
        case "j" :
          binario = '000 0010';
          fwrite(&binario, sizeof(int), 1, fp2);
        case "jal" :
        case "sra" :
          binario = '000 0011';
          fwrite(&binario, sizeof(int), 1, fp2);
        case "beq" :
        case "sllv" :
          binario = '000 0100';
          fwrite(&binario, sizeof(int), 1, fp2);
        case "bne" :
          binario =  '000 0101';
          fwrite(&binario, sizeof(int), 1, fp2);
        case "blez" :
        case "srlv" :
          binario =  '000 0100';	
          fwrite(&binario, sizeof(int), 1, fp2);
        case "bgtz" :
        case "srav" :
          binario =  '000 0111';	
          fwrite(&binario, sizeof(int), 1, fp2);
        case "addi" :
        case "jr" :
          binario =  '00 1000';
          fwrite(&binario, sizeof(int), 1, fp2);
        case "addiu" :
        case "jalr" :
          binario =  '000 1001';
          fwrite(&binario, sizeof(int), 1, fp2);
        case "slti" :
        case "movz" :
          binario =  '000 1010';
          fwrite(&binario, sizeof(int), 1, fp2);
        case "sltiu":
        case "movn" :
          binario =  '000 1011';
        fwrite(&binario, sizeof(int), 1, fp2);
        case "andi":
        case "syscall" :
          binario =  '000 1100';
          fwrite(&binario, sizeof(int), 1, fp2);
        case "ori":
        case "break" :
          binario =  '000 1101';
          fwrite(&binario, sizeof(int), 1, fp2);
        case "xori" :
          binario =  '000 1110';
          fwrite(&binario, sizeof(int), 1, fp2);
        case "lui" :
        case "sync" :
          binario =  '000 1111';
          fwrite(&binario, sizeof(int), 1, fp2);
        case "mfhi" :
          binario =  '001 0000';
          fwrite(&binario, sizeof(int), 1, fp2);
        case "mthi" :
          binario =  '001 0001';
          fwrite(&binario, sizeof(int), 1, fp2);
        case "mflo" :
          binario =  '001 0010';
          fwrite(&binario, sizeof(int), 1, fp2);
        case "mtlo" :
          binario = '001 0011';
          fwrite(&binario, sizeof(int), 1, fp2);
        case "mult" :
          binario = '001 1000';
          fwrite(&binario, sizeof(int), 1, fp2);
        case "multu" :
          binario = '001 1001';
          fwrite(&binario, sizeof(int), 1, fp2);
        case "div" :
          binario = '001 1010';
          fwrite(&binario, sizeof(int), 1, fp2);
        case "divu" :
          binario = '001 1011';
          fwrite(&binario, sizeof(int), 1, fp2);
        case "add" :
        case "lb" :
          binario = '010 0000';
          fwrite(&binario, sizeof(int), 1, fp2);
        case "addu":
        case "lh":
          binario = '010 0001';
          fwrite(&binario, sizeof(int), 1, fp2);
        case "lwl":
        case "sub":
          binario = '010 0010';
          fwrite(&binario, sizeof(int), 1, fp2);
        case "lw":
        case "subu":
          binario = '010 0011';	
          fwrite(&binario, sizeof(int), 1, fp2);
        case "lbu":
        case "and":
          binario = '010 0100';
          fwrite(&binario, sizeof(int), 1, fp2);
        case "lhu":
        case "or":
          binario = '010 0101';
          fwrite(&binario, sizeof(int), 1, fp2);
        case "lwr":
        case "xor":
          binario = '010 0110';
          fwrite(&binario, sizeof(int), 1, fp2);
        case "nor":
          binario = '010 0111';
          fwrite(&binario, sizeof(int), 1, fp2);
        case "sb":
          binario = '010 1000';
          fwrite(&binario, sizeof(int), 1, fp2);
        case "sh":
          binario = '010 1001';
          fwrite(&binario, sizeof(int), 1, fp2);
        case "slt":
        case "swl":
          binario = '010 1010';
          fwrite(&binario, sizeof(int), 1, fp2);
        case "sw":
        case "sltu":
          binario = '010 1011';
          fwrite(&binario, sizeof(int), 1, fp2);
        case "swr":
          binario = '010 1110';
          fwrite(&binario, sizeof(int), 1, fp2);
        case "cache":
          binario = '010 1110';
          fwrite(&binario, sizeof(int), 1, fp2);
        case "ll":
        case "tge":
          binario = '011 0000';
          fwrite(&binario, sizeof(int), 1, fp2);
        case "lwc1":
        case "tgeu":
          binario = '011 0001';
          fwrite(&binario, sizeof(int), 1, fp2);
        case "lwc2":
        case "tlt":
          binario = '011 0010';
          fwrite(&binario, sizeof(int), 1, fp2);
        case "pref":
        case "tltu":
          binario = '011 0011';
          fwrite(&binario, sizeof(int), 1, fp2);
        case "teq":
          binario = '011 0100';
          fwrite(&binario, sizeof(int), 1, fp2);
        case "ldc1":
          binario = '011 0101';
          fwrite(&binario, sizeof(int), 1, fp2);
        case "ldc2":
        case "tne":
          binario = '011 0110';
          fwrite(&binario, sizeof(int), 1, fp2);
        case "sc":
          binario = '011 1000';
          fwrite(&binario, sizeof(int), 1, fp2);
        case "swc1":
          binario = '011 1001';
          fwrite(&binario, sizeof(int), 1, fp2);
        case "swc2":
          binario = '011 1010';
          fwrite(&binario, sizeof(int), 1, fp2);
        case "sdc1":
          binario = '011 1101';
          fwrite(&binario, sizeof(int), 1, fp2);
        case "sdc2":
          binario = '011 1110';
          fwrite(&binario, sizeof(int), 1, fp2);
			default:
				binario = "Parametro nao existe";

          if( c >= ( 1 << j ) ) {
            c = c - ( 1 << j );
            fwrite(&binario, sizeof(int), 1, fp2);
          } else {
            f = 0;
            fwrite(&f, sizeof(int), 1, fp2);
          }

      }

      num = ch;
      // /* writing 4 byte of data to the output file */
      //fwrite(&num, sizeof(int), 1, fp2);
  }

  /* close all opened files */
  fclose(fp1);
  fclose(fp2);

}
}

int main(void) {
  readFile();
}