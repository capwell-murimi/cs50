#include    <stdio.h>
#include    <stdbool.h>

int main(void)
{
    FILE    *fh_output;
    fh_output   =   fopen("murimi.txt"  ,   "w");

    int random  =   0;
    while(true)
    {
        printf("Enter # (-1 quits): ");
        scanf("%d",   &random);
        if(random   ==   -1)
        {
            break;
        }
        else
        {
            fprintf(fh_output,  "%d\n"   ,    random);
        }
    }
    fclose(fh_output);

    FILE    *fh_input;
    fh_input    =   fopen("murimi.txt"  ,   "r");

    int finput  =   0;
    int lines   =   0;
    int numbers[100];

    while(fscanf(fh_input   ,   "%d"    ,  &finput ) !=  EOF)
    {
        numbers[lines]  =   finput;
        printf("file    line    %d  :   %d\n",  lines+1 ,   finput);
        lines++;
    }

    float total   =   0.0;

    for(int i   =   0;    i<lines;    i++)
    {
        total=total+numbers[i];
    }
    printf("Average:    %f\n",    total/lines);
    fclose(fh_input);

    fh_input    =   fopen("in.txt",   "r");

    char    buffer[256];
    fgets(buffer    ,   256 ,  fh_input);
    printf("Buffer:  %s",    buffer);

    fclose(fh_input);
    return  0;
}