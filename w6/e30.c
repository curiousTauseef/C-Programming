/* Class : TXL14S1-B Name : Won Seob Seo Student No: 1403724 Exercise no. 30
a program that asks user for five persons name and phone number and saves them to structures.
Every structure has to have index number in them as well, that is assigned automatically. After the names
and phone numbers are given, program will print out all the index numbers, names and phone numbers of
the structures. */

#include <stdio.h>
#include <string.h>
#define numPerson 5

struct phonenumber
{
    char name[50];
    char number[50]; // Not using int type because it drops the first 0 in a phone number
}; // contacts[numPerson];

int main()
{
    struct phonenumber contacts[numPerson];
    char c;
    int i, j;

    for (i=0; i<numPerson; i++)
    {
        printf("Please enter the name of person #%d: ", i+1);
        j = 0; // resetting index value for contact name
        while (( c = getchar() ) != '\n' )
        {
                contacts[i].name[j++] = c;
        }
        contacts[i].name[j] = '\0'; // insert null at the end of the string

        printf("Please enter the phone number of person #%d: ", i+1);
        j = 0; // resetting index value for contact name
        while (( c = getchar() ) != '\n' )
        {
                contacts[i].number[j++] = c;
        }
        contacts[i].number[j] = '\0'; // insert null at the end of the string
    }
    for (i=0; i<numPerson; i++)
    {
        printf("\nPerson #%d\n", i+1);
        printf("Name: %s \nPhonenumber: %s \n", contacts[i].name, contacts[i].number);
    }
    return 0;
}
