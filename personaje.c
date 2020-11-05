#include "stdlib.h"
#include "stdio.h"
#include "string.h"

struct personage
{
    char Id[10];
    char Name[200];
    int Age;
    char Dimention[100];
};

main(int argc, char const *argv[])
{
    struct personage person = {0};
    strcpy(person.Id, "0000000001");
    strcpy(person.Name, "Ichigo");
    person.Age = 20;
    strcpy(person.Dimention, "dimention Y");
    printf("PersonId %s, PersonName %s, PersonAge %i, PersonDimention %s", person.Id, person.Name, person.Age, person.Dimention);

    return 0;
}
