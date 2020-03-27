#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX 294 

int main(void) {
  
  FILE *inputfile,
       *outputfile;
       
  char inputname[MAX],
       outputname[MAX],
       commands[MAX],
       words[MAX],
       test[MAX];

  printf("Digite o nome do arquivo de entrada: ");
  gets(inputname);

  if( inputname[0] == '\0' ) {
    
    printf("Digite os comandos do MIPS: ");
    gets(commands);

    return 0;
  } else {

    printf("Digite o nome do arquivo de saída: ");
    scanf("%s", outputname);

    printf("Digite a palavra: ");
    scanf("%s", test);

    inputfile = fopen(inputname, "r");
    outputfile = fopen(outputname, "w");

    if( inputfile == NULL ) {

      printf("Erro ao abrir arquivo!");

    } else {

        while( fscanf(inputfile, "%s", words) != EOF ){

            //ssl
            if( strcmp( words, test ) == 0 ){
              fputs("000000", outputfile);
            }
                        //srl
            if( strcmp( words, test ) == 0 ){
              fputs("000010", outputfile);
            }
            //j
            if( strcmp( words, test ) == 0 ){
              fputs("000010", outputfile);
            }
            //jal
            if( strcmp( words, test ) == 0 ){
              fputs("000011", outputfile);
            }
            //sra
            if( strcmp( words, test ) == 0 ){
              fputs("000011", outputfile);
            }
            //beq
            if( strcmp( words, test ) == 0 ){
              fputs("000100", outputfile);
            }
            //sllv
            if( strcmp( words, test ) == 0 ){
              fputs("000100", outputfile);
            }
            //bne
            if( strcmp( words, test ) == 0 ){
              fputs("000101", outputfile);
            }
            //blez
            if( strcmp( words, test ) == 0 ){
              fputs("000110", outputfile);
            }
            //srlv
            if( strcmp( words, test ) == 0 ){
              fputs("000110", outputfile);
            }
            //bgtz
            if( strcmp( words, test ) == 0 ){
              fputs("000111", outputfile);
            }
            //srav
            if( strcmp( words, test ) == 0 ){
              fputs("000111", outputfile);
            }
            //addi
            if( strcmp( words, test ) == 0 ){
              fputs("001000", outputfile);
            }
            //jr
            if( strcmp( words, test ) == 0 ){
              fputs("001000", outputfile);
            }
            //addiu
            if( strcmp( words, test ) == 0 ){
              fputs("001001", outputfile);
            }
            //jalr
            if( strcmp( words, test ) == 0 ){
              fputs("001001", outputfile);
            }
            //slti
            if( strcmp( words, test ) == 0 ){
              fputs("001010", outputfile);
            }
            //slti
            if( strcmp( words, test ) == 0 ){
              fputs("001010", outputfile);
            }
            //sltiu
            if( strcmp( words, test ) == 0 ){
              fputs("001011", outputfile);
            }
            //movn
            if( strcmp( words, test ) == 0 ){
              fputs("001011", outputfile);
            }
            //andi
            if( strcmp( words, test ) == 0 ){
              fputs("001100", outputfile);
            }
            //syscall
            if( strcmp( words, test ) == 0 ){
              fputs("001100", outputfile);
            }
            //ori
            if( strcmp( words, test ) == 0 ){
              fputs("001101", outputfile);
            }
            //break
            if( strcmp( words, test ) == 0 ){
              fputs("001101", outputfile);
            }
            //xori
            if( strcmp( words, test ) == 0 ){
              fputs("001110", outputfile);
            }
            //lui
            if( strcmp( words, test ) == 0 ){
              fputs("001111", outputfile);
            }
            //sync
            if( strcmp( words, test ) == 0 ){
              fputs("001111", outputfile);
            }
            //mfhi
            if( strcmp( words, test ) == 0 ){
              fputs("010000", outputfile);
            }
            //mthi
            if( strcmp( words, test ) == 0 ){
              fputs("010001", outputfile);
            }
            //addu
            if( strcmp( words, test ) == 0 ){
              fputs("010010", outputfile);
            }
            //mtlo
            if( strcmp( words, test ) == 0 ){
              fputs("010011", outputfile);
            }
            //mult
            if( strcmp( words, test ) == 0 ){
              fputs("011000", outputfile);
            }
            //multu
            if( strcmp( words, test ) == 0 ){
              fputs("011001", outputfile);
            }
            //div
            if( strcmp( words, test ) == 0 ){
              fputs("011010", outputfile);
            }
            //divu
            if( strcmp( words, test ) == 0 ){
              fputs("011011", outputfile);
            }
            //add
            if( strcmp( words, test ) == 0 ){
              fputs("100000", outputfile);
            }
            //add
            if( strcmp( words, test ) == 0 ){
              fputs("100000", outputfile);
            }
            //addu
            if( strcmp( words, test ) == 0 ){
              fputs("100001", outputfile);
            }
            //lh
            if( strcmp( words, test ) == 0 ){
              fputs("100001", outputfile);
            }
            //lw
            if( strcmp( words, test ) == 0 ){
              fputs("100011", outputfile);
            }
            //subu
            if( strcmp( words, test ) == 0 ){
              fputs("100011", outputfile);
            }
            //lbu
            if( strcmp( words, test ) == 0 ){
              fputs("100100", outputfile);
            }
            //and
            if( strcmp( words, test ) == 0 ){
              fputs("100100", outputfile);
            }
            //lhu
            if( strcmp( words, test ) == 0 ){
              fputs("100101", outputfile);
            }
            //or
            if( strcmp( words, test ) == 0 ){
              fputs("100101", outputfile);
            }
            //lwr
            if( strcmp( words, test ) == 0 ){
              fputs("100110", outputfile);
            }
            //xor
            if( strcmp( words, test ) == 0 ){
              fputs("100110", outputfile);
            }
            //nor
            if( strcmp( words, test ) == 0 ){
              fputs("100111", outputfile);
            }
            //sb
            if( strcmp( words, test ) == 0 ){
              fputs("101000", outputfile);
            }
            //sh
            if( strcmp( words, test ) == 0 ){
              fputs("101001", outputfile);
            }
            //slt
            if( strcmp( words, test ) == 0 ){
              fputs("101010", outputfile);
            }
            //swl
            if( strcmp( words, test ) == 0 ){
              fputs("101010", outputfile);
            }
            //sw
            if( strcmp( words, test ) == 0 ){
              fputs("101011", outputfile);
            }
            //sltu
            if( strcmp( words, test ) == 0 ){
              fputs("101011", outputfile);
            }
            //swr
            if( strcmp( words, test ) == 0 ){
              fputs("101110", outputfile);
            }
            //cache
            if( strcmp( words, test ) == 0 ){
              fputs("101110", outputfile);
            }
            //ll
            if( strcmp( words, test ) == 0 ){
              fputs("110000", outputfile);
            }
            //tge
            if( strcmp( words, test ) == 0 ){
              fputs("110000", outputfile);
            }
            //tgeu
            if( strcmp( words, test ) == 0 ){
              fputs("110001", outputfile);
            }
            //lwc2
            if( strcmp( words, test ) == 0 ){
              fputs("110010", outputfile);
            }
            //tlt
            if( strcmp( words, test ) == 0 ){
              fputs("110010", outputfile);
            }
            //pref
            if( strcmp( words, test ) == 0 ){
              fputs("110011", outputfile);
            }
            //tltu
            if( strcmp( words, test ) == 0 ){
              fputs("110011", outputfile);
            }
            //teq
            if( strcmp( words, test ) == 0 ){
              fputs("110100", outputfile);
            }
            //ldc1
            if( strcmp( words, test ) == 0 ){
              fputs("110101", outputfile);
            }
            //tne
            if( strcmp( words, test ) == 0 ){
              fputs("110110", outputfile);
            }
            //sc
            if( strcmp( words, test ) == 0 ){
              fputs("111000", outputfile);
            }
            //swc1
            if( strcmp( words, test ) == 0 ){
              fputs("111001", outputfile);
            }
            //swc2
            if( strcmp( words, test ) == 0 ){
              fputs("111010", outputfile);
            }
            //sdc1
            if( strcmp( words, test ) == 0 ){
              fputs("111101", outputfile);
            }
            //sdc2
            if( strcmp( words, test ) == 0 ){
              fputs("111110", outputfile);
            }
            //$zero
            if( strcmp( words, test ) == 0 ){
              fputs("000000", outputfile);
            }
            //$vo
            if( strcmp( words, test ) == 0 ){
              fputs("000010", outputfile);
            }
            //$at
            if( strcmp( words, test ) == 0 ){
              fputs("000001", outputfile);
            }
            //$v1
            if( strcmp( words, test ) == 0 ){
              fputs("000011", outputfile);
            }
            //$a0
            if( strcmp( words, test ) == 0 ){
              fputs("000100", outputfile);
            }
            //$a2
            if( strcmp( words, test ) == 0 ){
              fputs("000110", outputfile);
            }
            //$a3
            if( strcmp( words, test ) == 0 ){
              fputs("000111", outputfile);
            }
            //$t0
            if( strcmp( words, test ) == 0 ){
              fputs("001000", outputfile);
            }
            //$t1
            if( strcmp( words, test ) == 0 ){
              fputs("001001", outputfile);
            }
            //$t2
            if( strcmp( words, test ) == 0 ){
              fputs("001010", outputfile);
            }
            //$t3
            if( strcmp( words, test ) == 0 ){
              fputs("001011", outputfile);
            }
            //$t4
            if( strcmp( words, test ) == 0 ){
              fputs("001100", outputfile);
            }
            //$t5
            if( strcmp( words, test ) == 0 ){
              fputs("001101", outputfile);
            }
            //$t6
            if( strcmp( words, test ) == 0 ){
              fputs("001110", outputfile);
            }
            //$t7
            if( strcmp( words, test ) == 0 ){
              fputs("001111", outputfile);
            }
            //$s0
            if( strcmp( words, test ) == 0 ){
              fputs("010000", outputfile);
            }
            //$s1
            if( strcmp( words, test ) == 0 ){
              fputs("010001", outputfile);
            }
            //$s2
            if( strcmp( words, test ) == 0 ){
              fputs("010010", outputfile);
            }
            //$s3
            if( strcmp( words, test ) == 0 ){
              fputs("010011", outputfile);
            }
            //$s4
            if( strcmp( words, test ) == 0 ){
              fputs("010100", outputfile);
            }
            //$s5
            if( strcmp( words, test ) == 0 ){
              fputs("010101", outputfile);
            }
            //$s6
            if( strcmp( words, test ) == 0 ){
              fputs("010110", outputfile);
            }
            //$s7
            if( strcmp( words, test ) == 0 ){
              fputs("010111", outputfile);
            }
            //$t8
            if( strcmp( words, test ) == 0 ){
              fputs("011000", outputfile);
            }
            //$t9
            if( strcmp( words, test ) == 0 ){
              fputs("011001", outputfile);
            }
            //$k0
            if( strcmp( words, test ) == 0 ){
              fputs("011010", outputfile);
            }
            //$k1
            if( strcmp( words, test ) == 0 ){
              fputs("011011", outputfile);
            }
            //$s0
            if( strcmp( words, test ) == 0 ){
              fputs("011100", outputfile);
            }
            //$s0
            if( strcmp( words, test ) == 0 ){
              fputs("011101", outputfile);
            }
            //$fp 
            if( strcmp( words, test ) == 0 ){
              fputs("011110", outputfile);
            }
            //$ra
            if( strcmp( words, test ) == 0 ){
              fputs("011111", outputfile);
            }

            
            printf("%s\n", &words);
        }
    

    }
  }

  return 0;
}
