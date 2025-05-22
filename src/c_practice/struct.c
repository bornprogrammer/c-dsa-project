#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct Person
{
    char fullName[50];
    int age;
    char email[100];
    bool isMarried;
} Person;

typedef struct PersonList
{
    Person **container;
} PersonList;

void printStruct(struct Person person);

void printStruct(struct Person p)
{
    printf("%s %d %s %d", p.fullName, p.age, p.email, p.isMarried);
}

// void structWithArray()
// {
//     PersonList *personList = malloc(sizeof(PersonList));
//     personList->container = calloc(5, sizeof(Person));
//     *personList->container[0]->fullName = "Sandip kosta";
//     personList->container[0]->age = 35;
//     *personList->container[0]->fullName = "Sandip kosta";
//     *personList->container[0]->fullName = "Sandip kosta";
//     // return personList;
// }

int main()
{
    struct Person p;
    strcpy(p.fullName, "Hello world");
    p.age = 30;
    strcpy(p.email, "test@test.com");
    p.isMarried = false;
    printStruct(p);
    // structWithArray();
    return 0;
}