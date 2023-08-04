#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef uint8_t BYTE;
int main(int argc, char *argv[])
{
    if (argc   !=  2)
    {
        fprintf(stderr, "Usage: ./recover infile\n");
        return 1;
    }

    FILE   *forensic_image =   fopen(argv[1],   "r");
    if (forensic_image ==  NULL)
    {
        fprintf(stderr, "Could not open %s.\n", argv[1]);
        return  1;
    }

//initialize output file to null
//pointer of the file that will store jpeg names
    FILE *outptr  =  NULL;

//512 bytes indicating the memory card
    BYTE buffer[512];

//keep count of the jpegs
    int  jpeg   =  0;

//string for names
    char name[8] = {0};

//read   the   memory   card to find jpegs
    while (fread(buffer, sizeof(BYTE) * 512,   1, forensic_image) == 1)
    {
//check if jpeg
        if (buffer[0]   == 0xff  && buffer[1]   == 0xd8  && buffer[2]   == 0xff  && (buffer[3] &   0xf0)  ==   0xe0)
        {
            if (outptr   != NULL)
            {
                fclose(outptr);
            }

            sprintf(name,  "%03d.jpg", jpeg++);
//open   block for   writing  new   jpeg
            outptr   =  fopen(name, "w");
        }

//keep   writing  into  the   new   jpeg  block untill   you   encounter   jpeg  format.
//the loop  continues   until end   of memory   card.
        if (outptr   != NULL)
        {
            fwrite(buffer, sizeof(BYTE) * 512, 1, outptr);
        }
    }

//if  end   of memory   card  reached  then  close file  if its   not   null.
    if (outptr  != NULL)
    {
        fclose(outptr);
    }
//close  forensic_image
    fclose(forensic_image);

}
