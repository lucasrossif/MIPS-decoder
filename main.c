#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define MAX 256

void readFile()
{

    int num, i, j, c, f;
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
    if (!fp1)
    {
        printf("Unable to open the input file!!\n");
        return ;
    }

    /* open the target file in binary write mode */
    fp2 = fopen(tgt, "ab");

    if(strlen(src) == 0)
    {
        printf("type the MIPS instruction: \n");
        gets(ch);
    }

    /* error handling */
    if (!fp2)
    {
        printf("Unable to open the output file!!\n");
        return ;
    }



    /*
      * read data from input file and write
      * the binary form of it in output file
      */

    while (!feof(fp1))
    {
        /* reading one byte of data */
        fread(&ch, sizeof(char), 1, fp1);
        /* converting the character to ascii integer value */

        for( i = 0; ch[i]!='\0'; i++)
        {

            c = ch[i];

            for( j = 20000; j + 1 > 0; j-- )
            {

                if( c >= ( 1 << j ) )
                {

                    c = c - ( 1 << j );
                    f = 1;
                    fwrite(&f, sizeof(int), 1, fp2);
                }
                else
                {
                    f = 0;
                    fwrite(&f, sizeof(int), 1, fp2);
                }

            }

            // num = ch;
            // /* writing 4 byte of data to the output file */
            // fwrite(&num, sizeof(int), 1, fp2);
        }

        /* close all opened files */
        fclose(fp1);
        fclose(fp2);

    }
}

int main(void)
{
    readFile();
}
