#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Person
{
    char *name;
    int age;
} Person;

typedef struct Persons
{
    struct Person **personList;
} Persons;

void exampleOne()
{
    struct Person persons[] = {{"Sandip", 25}, {"Ankit", 20}};
    printf("%s", persons[1].name);
}

void exampleTwoUsingDynamicMemory()
{
    struct Person *persons = calloc(sizeof(Person), 3);
    printf("%s", persons[1].name);
    free(persons);
}

void exampleThreeUsing()
{
    struct Persons *persons = malloc(sizeof(Persons));
    persons->personList = calloc(5, sizeof(Person));
    struct Person *person = malloc(sizeof(Person));
    person->name = "Sandip";
    person->age = 35;
    persons->personList[0] = person;
}

int main()
{
    exampleThreeUsing();
    return 0;
}