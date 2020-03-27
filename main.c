#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX 294


int main(void) {

  /*
  ** Define variables f
  */
  FILE *inputfile,
       *outputfile;

  char inputname[MAX],
       outputname[MAX],
       commands[MAX],
       words[MAX];

  /*
  * User input the entry filename
  */
  printf("Digite o nome do arquivo de entrada: ");
  gets(inputname);

  /*
  * Verify if user has digity name of file, if not, convert instructions MIPS to binary
  */

  if( inputname[0] == '\0' ) {

    printf("Digite os comandos do MIPS: ");
    gets(commands);

    if( strcmp( commands, "SSL" ) == 0 ){
    printf("000000\n %s", &commands);
  }
  //srl
  if( strcmp( commands, "SRL" ) == 0 ){
    printf("000010\n %s", &commands);
  }
  //j
  if( strcmp( commands, "J" ) == 0 ){
    printf("000010\n %s", &commands);
  }
  //jal
  if( strcmp( commands, "JAL" ) == 0 ){
    printf("000011\n %s", &commands);
  }
  //sra
  if( strcmp( commands, "SRA" ) == 0 ){
    printf("000011\n %s", &commands);
  }
  //beq
  if( strcmp( commands, "BEQ" ) == 0 ){
    printf("000100\n %s", &commands);
  }
  //sllv
  if( strcmp( commands, "SLLV" ) == 0 ){
    printf("000100\n %s", &commands);
  }
  //bne
  if( strcmp( commands, "BNE" ) == 0 ){
    printf("000101\n %s", &commands);
  }
  //blez
  if( strcmp( commands, "BLEZ" ) == 0 ){
    printf("000110\n %s", &commands);
  }
  //srlv
  if( strcmp( commands, "SRLV" ) == 0 ){
    printf("000110\n %s", &commands);
  }
  //bgtz
  if( strcmp( commands, "BGTZ" ) == 0 ){
    printf("000111\n %s", &commands);
  }
  //srav
  if( strcmp( commands, "SRAV" ) == 0 ){
    printf("000111\n %s", &commands);
  }
  //addi
  if( strcmp( commands, "ADDI" ) == 0 ){
    printf("001000\n %s", &commands);
  }
  //jr
  if( strcmp( commands, "JR" ) == 0 ){
    printf("001000\n %s", &commands);
  }
  //addiu
  if( strcmp( commands, "ADDIU" ) == 0 ){
    printf("001001\n %s", &commands);
  }
  //jalr
  if( strcmp( commands, "JALR" ) == 0 ){
    printf("001001\n %s", &commands);
  }
  //slti
  if( strcmp( commands, "SLTI" ) == 0 ){
    printf("001010\n %s", &commands);
  }
  //sltiu
  if( strcmp( commands, "SLTIU" ) == 0 ){
    printf("001011\n %s", &commands);
  }
  //movn
  if( strcmp( commands, "MOVN" ) == 0 ){
    printf("001011\n %s", &commands);
  }
  //andi
  if( strcmp( commands, "ANDI" ) == 0 ){
    printf("001100\n %s", &commands);
  }
  //syscall
  if( strcmp( commands, "SYSCALL" ) == 0 ){
    printf("001100\n %s", &commands);
  }
  //ori
  if( strcmp( commands, "ORI" ) == 0 ){
    printf("001101\n %s", &commands);
  }
  //break
  if( strcmp( commands, "BREAK" ) == 0 ){
    printf("001101\n %s", &commands);
  }
  //xori
  if( strcmp( commands, "XORI" ) == 0 ){
    printf("001110\n %s", &commands);
  }
  //lui
  if( strcmp( commands, "LUI" ) == 0 ){
    printf("001111\n %s", &commands);
  }
  //sync
  if( strcmp( commands, "SYNC" ) == 0 ){
    printf("001111\n %s", &commands);
  }
  //mfhi
  if( strcmp( commands, "MFHI" ) == 0 ){
    printf("010000\n %s", &commands);
  }
  //mthi
  if( strcmp( commands, "MTHI" ) == 0 ){
    printf("010001\n %s", &commands);
  }
  //addu
  if( strcmp( commands, "ADDU" ) == 0 ){
    printf("010010\n %s", &commands);
  }
  //mtlo
  if( strcmp( commands, "MTLO" ) == 0 ){
    printf("010011\n %s", &commands);
  }
  //mult
  if( strcmp( commands, "MULT" ) == 0 ){
    printf("011000\n %s", &commands);
  }
  //multu
  if( strcmp( commands, "MULTU" ) == 0 ){
    printf("011001\n %s", &commands);
  }
  //div
  if( strcmp( commands, "DIV" ) == 0 ){
    printf("011010\n %s", &commands);
  }
  //divu
  if( strcmp( commands, "DIVU" ) == 0 ){
    printf("011011\n %s", &commands);
  }
  //add
  if( strcmp( commands, "ADD" ) == 0 ){
    printf("100000\n %s", &commands);
  }
  //addu
  if( strcmp( commands, "ADDU" ) == 0 ){
    printf("100001\n %s", &commands);
  }
  //lh
  if( strcmp( commands, "LH" ) == 0 ){
    printf("100001\n %s", &commands);
  }
  //lw
  if( strcmp( commands, "LW" ) == 0 ){
    printf("100011\n %s", &commands);
  }
  //subu
  if( strcmp( commands, "SUBU" ) == 0 ){
    printf("100011\n %s", &commands);
  }
  //lbu
  if( strcmp( commands, "LBU" ) == 0 ){
    printf("100100\n %s", &commands);
  }
  //and
  if( strcmp( commands, "AND" ) == 0 ){
    printf("100100\n %s", &commands);
  }
  //lhu
  if( strcmp( commands, "LHU" ) == 0 ){
    printf("100101\n %s", &commands);
  }
  //or
  if( strcmp( commands, "OR" ) == 0 ){
    printf("100101\n %s", &commands);
  }
  //lwr
  if( strcmp( commands, "LWR" ) == 0 ){
    printf("100110\n %s", &commands);
  }
  //xor
  if( strcmp( commands, "XOR" ) == 0 ){
    printf("100110\n %s", &commands);
  }
  //nor
  if( strcmp( commands, "NOR" ) == 0 ){
    printf("100111\n %s", &commands);
  }
  //sb
  if( strcmp( commands, "SB" ) == 0 ){
    printf("101000\n %s", &commands);
  }
  //sh
  if( strcmp( commands, "SH" ) == 0 ){
    printf("101001\n %s", &commands);
  }
  //slt
  if( strcmp( commands, "SLT" ) == 0 ){
    printf("101010\n %s", &commands);
  }
  //swl
  if( strcmp( commands, "SWL" ) == 0 ){
    printf("101010\n %s", &commands);
  }
  //sw
  if( strcmp( commands, "SW" ) == 0 ){
    printf("101011\n %s", &commands);
  }
  //sltu
  if( strcmp( commands, "SLTU" ) == 0 ){
    printf("101011\n %s", &commands);
  }
  //swr
  if( strcmp( commands, "SWR" ) == 0 ){
    printf("101110\n %s", &commands);
  }
  //cache
  if( strcmp( commands, "CACHE" ) == 0 ){
    printf("101110\n %s", &commands);
  }
  //ll
  if( strcmp( commands, "LL" ) == 0 ){
    printf("110000\n %s", &commands);
  }
  //tge
  if( strcmp( commands, "TGE" ) == 0 ){
    printf("110000\n %s", &commands);
  }
  //tgeu
  if( strcmp( commands, "TGE" ) == 0 ){
    printf("110001\n %s", &commands);
  }
  //lwc2
  if( strcmp( commands, "LWC2" ) == 0 ){
    printf("110010\n %s", &commands);
  }
  //tlt
  if( strcmp( commands, "TLT" ) == 0 ){
    printf("110010\n %s", &commands);
  }
  //pref
  if( strcmp( commands, "PREF" ) == 0 ){
    printf("110011\n %s", &commands);
  }
  //tltu
  if( strcmp( commands, "" ) == 0 ){
    printf("110011\n %s", &commands);
  }
  //teq
  if( strcmp( commands, "TEQ" ) == 0 ){
    printf("110100\n %s", &commands);
  }
  //ldc1
  if( strcmp( commands, "LDC1" ) == 0 ){
    printf("110101\n %s", &commands);
  }
  //tne
  if( strcmp( commands, "TNE" ) == 0 ){
    printf("110110\n %s", &commands);
  }
  //sc
  if( strcmp( commands, "SC" ) == 0 ){
    printf("111000\n %s", &commands);
  }
  //swc1
  if( strcmp( commands, "SWC1" ) == 0 ){
    printf("111001\n %s", &commands);
  }
  //swc2
  if( strcmp( commands, "SWC2" ) == 0 ){
    printf("111010\n %s", &commands);
  }
  //sdc1
  if( strcmp( commands, "SDC1" ) == 0 ){
    printf("111101\n %s", &commands);
  }
  //sdc2
  if( strcmp( commands, "SDC2" ) == 0 ){
    printf("111110\n %s", &commands);
  }
  //$zero
  if( strcmp( commands, "$ZERO" ) == 0 ){
    printf("000000\n %s", &commands);
  }
  //$zero
  if( strcmp( commands, "ZERO" ) == 0 ){
    printf("000000\n %s", &commands);
  }
  //$vo
  if( strcmp( commands, "$VO" ) == 0 ){
    printf("000010\n %s", &commands);
  }
  //$at
  if( strcmp( commands, "$AT" ) == 0 ){
    printf("000001\n %s", &commands);
  }
  //$v1
  if( strcmp( commands, "$V1" ) == 0 ){
    printf("000011\n %s", &commands);
  }
  //$a0
  if( strcmp( commands, "$A0" ) == 0 ){
    printf("000100\n %s", &commands);
  }
  //$a2
  if( strcmp( commands, "$A2" ) == 0 ){
    printf("000110\n %s", &commands);
  }
  //$a3
  if( strcmp( commands, "$A3" ) == 0 ){
    printf("000111\n %s", &commands);
  }
  //$t0
  if( strcmp( commands, "$T0" ) == 0 ){
    printf("001000\n %s", &commands);
  }
  //$t1
  if( strcmp( commands, "$T1" ) == 0 ){
    printf("001001\n %s", &commands);
  }
  //$t2
  if( strcmp( commands, "$T2" ) == 0 ){
    printf("001010\n %s", &commands);
  }
  //$t3
  if( strcmp( commands, "$T3" ) == 0 ){
    printf("001011\n %s", &commands);
  }
  //$t4
  if( strcmp( commands, "$T4" ) == 0 ){
    printf("001100\n %s", &commands);
  }
  //$t5
  if( strcmp( commands, "$T5" ) == 0 ){
    printf("001101\n %s", &commands);
  }
  //$t6
  if( strcmp( commands, "$T6" ) == 0 ){
    printf("001110\n %s", &commands);
  }
  //$t7
  if( strcmp( commands, "$T7" ) == 0 ){
    printf("001111\n %s", &commands);
  }
  //$s0
  if( strcmp( commands, "$S0" ) == 0 ){
    printf("010000\n %s", &commands);
  }
  //$s1
  if( strcmp( commands, "$S1" ) == 0 ){
    printf("010001\n %s", &commands);
  }
  //$s2
  if( strcmp( commands, "$S2" ) == 0 ){
    printf("010010\n %s", &commands);
  }
  //$s3
  if( strcmp( commands, "$S3" ) == 0 ){
    printf("010011\n %s", &commands);
  }
  //$s4
  if( strcmp( commands, "$S4" ) == 0 ){
    printf("010100\n %s", &commands);
  }
  //$s5
  if( strcmp( commands, "$S5" ) == 0 ){
    printf("010101\n %s", &commands);
  }
  //$s6
  if( strcmp( commands, "$S6" ) == 0 ){
    printf("010110\n %s", &commands);
  }
  //$s7
  if( strcmp( commands, "$S7" ) == 0 ){
    printf("010111\n %s", &commands);
  }
  //$t8
  if( strcmp( commands, "$T8" ) == 0 ){
    printf("011000\n %s", &commands);
  }
  //$t9
  if( strcmp( commands, "$T9" ) == 0 ){
    printf("011001\n %s", &commands);
  }
  //$k0
  if( strcmp( commands, "$K0" ) == 0 ){
    printf("011010\n %s", &commands);
  }
  //$k1
  if( strcmp( commands, "$K1" ) == 0 ){
    printf("011011\n %s", &commands);
  }
  //$s0
  if( strcmp( commands, "$S0" ) == 0 ){
    printf("011100\n %s", &commands);
  }
  //$fp
  if( strcmp( commands, "$FP" ) == 0 ){
    printf("011110\n %s", &commands);
  }
  //$ra
  if( strcmp( commands, "$RA" ) == 0 ){
    printf("011111\n %s", &commands);
  }

    return 0;
  } else {

    printf("Digite o nome do arquivo de saída: ");
    scanf("%s", outputname);

    // printf("Digite a palavra: ");
    // scanf("%s", "");

    inputfile = fopen(inputname, "r");
    outputfile = fopen(outputname, "a+");

    if( inputfile == NULL ) {

      printf("Erro ao abrir arquivo!");

    } else {

        while( fscanf(inputfile, "%s", words) == 1 ){


            //ssl
            if( strcmp( words, "SSL" ) == 0 ){
              fputs("000000\n", outputfile);
            }
            //srl
            if( strcmp( words, "SRL" ) == 0 ){
              fputs("000010\n", outputfile);
            }
            //j
            if( strcmp( words, "J" ) == 0 ){
              fputs("000010\n", outputfile);
            }
            //jal
            if( strcmp( words, "JAL" ) == 0 ){
              fputs("000011\n", outputfile);
            }
            //sra
            if( strcmp( words, "SRA" ) == 0 ){
              fputs("000011\n", outputfile);
            }
            //beq
            if( strcmp( words, "BEQ" ) == 0 ){
              fputs("000100\n", outputfile);
            }
            //sllv
            if( strcmp( words, "SLLV" ) == 0 ){
              fputs("000100\n", outputfile);
            }
            //bne
            if( strcmp( words, "BNE" ) == 0 ){
              fputs("000101\n", outputfile);
            }
            //blez
            if( strcmp( words, "BLEZ" ) == 0 ){
              fputs("000110\n", outputfile);
            }
            //srlv
            if( strcmp( words, "SRLV" ) == 0 ){
              fputs("000110\n", outputfile);
            }
            //bgtz
            if( strcmp( words, "BGTZ" ) == 0 ){
              fputs("000111\n", outputfile);
            }
            //srav
            if( strcmp( words, "SRAV" ) == 0 ){
              fputs("000111\n", outputfile);
            }
            //addi
            if( strcmp( words, "ADDI" ) == 0 ){
              fputs("001000\n", outputfile);
            }
            //jr
            if( strcmp( words, "JR" ) == 0 ){
              fputs("001000\n", outputfile);
            }
            //addiu
            if( strcmp( words, "ADDIU" ) == 0 ){
              fputs("001001\n", outputfile);
            }
            //jalr
            if( strcmp( words, "JALR" ) == 0 ){
              fputs("001001\n", outputfile);
            }
            //slti
            if( strcmp( words, "SLTI" ) == 0 ){
              fputs("001010\n", outputfile);
            }
            //sltiu
            if( strcmp( words, "SLTIU" ) == 0 ){
              fputs("001011\n", outputfile);
            }
            //movn
            if( strcmp( words, "MOVN" ) == 0 ){
              fputs("001011\n", outputfile);
            }
            //andi
            if( strcmp( words, "ANDI" ) == 0 ){
              fputs("001100\n", outputfile);
            }
            //syscall
            if( strcmp( words, "SYSCALL" ) == 0 ){
              fputs("001100\n", outputfile);
            }
            //ori
            if( strcmp( words, "ORI" ) == 0 ){
              fputs("001101\n", outputfile);
            }
            //break
            if( strcmp( words, "BREAK" ) == 0 ){
              fputs("001101\n", outputfile);
            }
            //xori
            if( strcmp( words, "XORI" ) == 0 ){
              fputs("001110\n", outputfile);
            }
            //lui
            if( strcmp( words, "LUI" ) == 0 ){
              fputs("001111\n", outputfile);
            }
            //sync
            if( strcmp( words, "SYNC" ) == 0 ){
              fputs("001111\n", outputfile);
            }
            //mfhi
            if( strcmp( words, "MFHI" ) == 0 ){
              fputs("010000\n", outputfile);
            }
            //mthi
            if( strcmp( words, "MTHI" ) == 0 ){
              fputs("010001\n", outputfile);
            }
            //addu
            if( strcmp( words, "ADDU" ) == 0 ){
              fputs("010010\n", outputfile);
            }
            //mtlo
            if( strcmp( words, "MTLO" ) == 0 ){
              fputs("010011\n", outputfile);
            }
            //mult
            if( strcmp( words, "MULT" ) == 0 ){
              fputs("011000\n", outputfile);
            }
            //multu
            if( strcmp( words, "MULTU" ) == 0 ){
              fputs("011001\n", outputfile);
            }
            //div
            if( strcmp( words, "DIV" ) == 0 ){
              fputs("011010\n", outputfile);
            }
            //divu
            if( strcmp( words, "DIVU" ) == 0 ){
              fputs("011011\n", outputfile);
            }
            //add
            if( strcmp( words, "ADD" ) == 0 ){
              fputs("100000\n", outputfile);
            }
            //addu
            if( strcmp( words, "ADDU" ) == 0 ){
              fputs("100001\n", outputfile);
            }
            //lh
            if( strcmp( words, "LH" ) == 0 ){
              fputs("100001\n", outputfile);
            }
            //lw
            if( strcmp( words, "LW" ) == 0 ){
              fputs("100011\n", outputfile);
            }
            //subu
            if( strcmp( words, "SUBU" ) == 0 ){
              fputs("100011\n", outputfile);
            }
            //lbu
            if( strcmp( words, "LBU" ) == 0 ){
              fputs("100100\n", outputfile);
            }
            //and
            if( strcmp( words, "AND" ) == 0 ){
              fputs("100100\n", outputfile);
            }
            //lhu
            if( strcmp( words, "LHU" ) == 0 ){
              fputs("100101\n", outputfile);
            }
            //or
            if( strcmp( words, "OR" ) == 0 ){
              fputs("100101\n", outputfile);
            }
            //lwr
            if( strcmp( words, "LWR" ) == 0 ){
              fputs("100110\n", outputfile);
            }
            //xor
            if( strcmp( words, "XOR" ) == 0 ){
              fputs("100110\n", outputfile);
            }
            //nor
            if( strcmp( words, "NOR" ) == 0 ){
              fputs("100111\n", outputfile);
            }
            //sb
            if( strcmp( words, "SB" ) == 0 ){
              fputs("101000\n", outputfile);
            }
            //sh
            if( strcmp( words, "SH" ) == 0 ){
              fputs("101001\n", outputfile);
            }
            //slt
            if( strcmp( words, "SLT" ) == 0 ){
              fputs("101010\n", outputfile);
            }
            //swl
            if( strcmp( words, "SWL" ) == 0 ){
              fputs("101010\n", outputfile);
            }
            //sw
            if( strcmp( words, "SW" ) == 0 ){
              fputs("101011\n", outputfile);
            }
            //sltu
            if( strcmp( words, "SLTU" ) == 0 ){
              fputs("101011\n", outputfile);
            }
            //swr
            if( strcmp( words, "SWR" ) == 0 ){
              fputs("101110\n", outputfile);
            }
            //cache
            if( strcmp( words, "CACHE" ) == 0 ){
              fputs("101110\n", outputfile);
            }
            //ll
            if( strcmp( words, "LL" ) == 0 ){
              fputs("110000\n", outputfile);
            }
            //tge
            if( strcmp( words, "TGE" ) == 0 ){
              fputs("110000\n", outputfile);
            }
            //tgeu
            if( strcmp( words, "TGE" ) == 0 ){
              fputs("110001\n", outputfile);
            }
            //lwc2
            if( strcmp( words, "LWC2" ) == 0 ){
              fputs("110010\n", outputfile);
            }
            //tlt
            if( strcmp( words, "TLT" ) == 0 ){
              fputs("110010\n", outputfile);
            }
            //pref
            if( strcmp( words, "PREF" ) == 0 ){
              fputs("110011\n", outputfile);
            }
            //tltu
            if( strcmp( words, "" ) == 0 ){
              fputs("110011\n", outputfile);
            }
            //teq
            if( strcmp( words, "TEQ" ) == 0 ){
              fputs("110100\n", outputfile);
            }
            //ldc1
            if( strcmp( words, "LDC1" ) == 0 ){
              fputs("110101\n", outputfile);
            }
            //tne
            if( strcmp( words, "TNE" ) == 0 ){
              fputs("110110\n", outputfile);
            }
            //sc
            if( strcmp( words, "SC" ) == 0 ){
              fputs("111000\n", outputfile);
            }
            //swc1
            if( strcmp( words, "SWC1" ) == 0 ){
              fputs("111001\n", outputfile);
            }
            //swc2
            if( strcmp( words, "SWC2" ) == 0 ){
              fputs("111010\n", outputfile);
            }
            //sdc1
            if( strcmp( words, "SDC1" ) == 0 ){
              fputs("111101\n", outputfile);
            }
            //sdc2
            if( strcmp( words, "SDC2" ) == 0 ){
              fputs("111110\n", outputfile);
            }
            //$zero
            if( strcmp( words, "$ZERO" ) == 0 ){
              fputs("000000\n", outputfile);
            }
            //$zero
            if( strcmp( words, "ZERO" ) == 0 ){
              fputs("000000\n", outputfile);
            }
            //$vo
            if( strcmp( words, "$VO" ) == 0 ){
              fputs("000010\n", outputfile);
            }
            //$at
            if( strcmp( words, "$AT" ) == 0 ){
              fputs("000001\n", outputfile);
            }
            //$v1
            if( strcmp( words, "$V1" ) == 0 ){
              fputs("000011\n", outputfile);
            }
            //$a0
            if( strcmp( words, "$A0" ) == 0 ){
              fputs("000100\n", outputfile);
            }
            //$a2
            if( strcmp( words, "$A2" ) == 0 ){
              fputs("000110\n", outputfile);
            }
            //$a3
            if( strcmp( words, "$A3" ) == 0 ){
              fputs("000111\n", outputfile);
            }
            //$t0
            if( strcmp( words, "$T0" ) == 0 ){
              fputs("001000\n", outputfile);
            }
            //$t1
            if( strcmp( words, "$T1" ) == 0 ){
              fputs("001001\n", outputfile);
            }
            //$t2
            if( strcmp( words, "$T2" ) == 0 ){
              fputs("001010\n", outputfile);
            }
            //$t3
            if( strcmp( words, "$T3" ) == 0 ){
              fputs("001011\n", outputfile);
            }
            //$t4
            if( strcmp( words, "$T4" ) == 0 ){
              fputs("001100\n", outputfile);
            }
            //$t5
            if( strcmp( words, "$T5" ) == 0 ){
              fputs("001101\n", outputfile);
            }
            //$t6
            if( strcmp( words, "$T6" ) == 0 ){
              fputs("001110\n", outputfile);
            }
            //$t7
            if( strcmp( words, "$T7" ) == 0 ){
              fputs("001111\n", outputfile);
            }
            //$s0
            if( strcmp( words, "$S0" ) == 0 ){
              fputs("010000\n", outputfile);
            }
            //$s1
            if( strcmp( words, "$S1" ) == 0 ){
              fputs("010001\n", outputfile);
            }
            //$s2
            if( strcmp( words, "$S2" ) == 0 ){
              fputs("010010\n", outputfile);
            }
            //$s3
            if( strcmp( words, "$S3" ) == 0 ){
              fputs("010011\n", outputfile);
            }
            //$s4
            if( strcmp( words, "$S4" ) == 0 ){
              fputs("010100\n", outputfile);
            }
            //$s5
            if( strcmp( words, "$S5" ) == 0 ){
              fputs("010101\n", outputfile);
            }
            //$s6
            if( strcmp( words, "$S6" ) == 0 ){
              fputs("010110\n", outputfile);
            }
            //$s7
            if( strcmp( words, "$S7" ) == 0 ){
              fputs("010111\n", outputfile);
            }
            //$t8
            if( strcmp( words, "$T8" ) == 0 ){
              fputs("011000\n", outputfile);
            }
            //$t9
            if( strcmp( words, "$T9" ) == 0 ){
              fputs("011001\n", outputfile);
            }
            //$k0
            if( strcmp( words, "$K0" ) == 0 ){
              fputs("011010\n", outputfile);
            }
            //$k1
            if( strcmp( words, "$K1" ) == 0 ){
              fputs("011011\n", outputfile);
            }
            //$s0
            if( strcmp( words, "$S0" ) == 0 ){
              fputs("011100\n", outputfile);
            }
            //$fp
            if( strcmp( words, "$FP" ) == 0 ){
              fputs("011110\n", outputfile);
            }
            //$ra
            if( strcmp( words, "$RA" ) == 0 ){
              fputs("011111\n", outputfile);
            }

        }


    }

  }  
  fclose(inputfile);
  fclose(outputfile);
  return 0;
}
