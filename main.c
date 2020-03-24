#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
#include <string.h>

 FILE* abrirArquivo (char filename[200])
{
  FILE *arquivo;
  char name[200];
  
  arquivo = fopen(("%s", filename), "r");

  if (arquivo == NULL)
    {
      printf("O arquivo não existe. Um novo arquivo será criado!\n\n");

      printf ("Digite o nome do arquivo:\n");
      gets(name);
      arquivo = fopen(("%s", name), "w");
    }
    else
   {
     printf("O arquivo foi aberto!");
   }
   return arquivo;
}
  
  
void lerArquivo(){
  char name[200];
  char l;
  int num = 0;

  printf ("Digite o nome do arquivo a ser aberto + .txt. Caso nao exista, aperte enter.\n");
  gets(name);

  while( (l=fgetc(abrirArquivo(name))) != EOF ) {
     putchar(l);
     if(l == '\n') {
       num++;
     }
     
     printf("%d", num++);
   }
}

FILE* converteBinario(FILE *arq, char outputFilename[200]){
    char texto[500];
    FILE* binary;

    gets(outputFilename);
    binary = fopen(("%s", outputFilename), "ab");

    while(!feof(arq)){ //ENQUANTO NAO CHEGA NO FINAL DO ARQUIVO
        fgets(texto, 500 , arq) ;
        printf("%s", texto);

  for(int i = 0; texto[i]!='\0'; i++)
  {
    int arqTexto = texto[i];

    for(int j = 500; j + 1 > 0; j--) 
    {
        if(arqTexto >= (1<<j)) 
        {
          arqTexto -= (1<<j);
          fprintf("1"); 
        } 

        else 
        {
          fprintf("0");
        }

        fwrite(&texto, sizeof(texto), 1, binary);
    } // fim do for do j
  } // fim for do i
} //fim while
    return binary;
} // fim da função

int main (){

  lerArquivo();
    
    return 0;
}
