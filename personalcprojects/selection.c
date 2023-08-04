#include <stdio.h>
#include <cs50.h>

#define ALL 10
void sort(void);
typedef struct
{
    string name;
    int position;
}
person;

person arrange[ALL];
int main (void)
{
    arrange[0].name = "john";
    arrange[0].position = 7;

    arrange[1].name = "mary";
    arrange[1].position = 8;

    arrange[2].name = "peter";
    arrange[2].position = 2;

    arrange[3].name = "susan";
    arrange[3].position = 10;

    arrange[4].name = "david";
    arrange[4].position = 9;

    arrange[5].name = "emily";
    arrange[5].position = 1;

    arrange[6].name = "michael";
    arrange[6].position = 6;

    arrange[7].name = "sarah";
    arrange[7].position = 7;

    arrange[8].name = "james";
    arrange[8].position = 3;

    arrange[9].name = "jessica";
    arrange[9].position = 4;

    sort();

    for (int i = 0 ; i < ALL; i++)
    {
        printf("%d : name : %s position : %d\n", i, arrange[i].name, arrange[i].position);
    }

}

void sort(void)
{
    for (int i = 0; i < ALL; i++)
    {
        for(int j = i + 1; j < ALL; j++)
        {
            if (arrange[j].position < arrange[i].position)
            {
                person temp = arrange[i];
                arrange[i] = arrange[j];
                arrange[j] = temp;
            }
        }
    }
}



/*Name | Position
------- | --------
John | 7
Mary | 8
Peter | 2
Susan | 10
David | 9
Emily | 1
Michael | 6
Sarah | 5
James | 3
Jessica | 4*/