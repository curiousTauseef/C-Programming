/* Class : TXL14S1-B Name : Won Seob Seo Student No: 1403724 Exercise no. 31
a program that asks user for five persons name and phone number and saves them to structures.
Every structure has to have index number in them as well, that is assigned automatically. After the names
and phone numbers are given, the program prints list of index numbers and then user can select which ones to print out */

#include <stdio.h>
#include <string.h>
#define numPerson 5

struct phonenumber
{
    char name[50];
    char number[50]; // Not using int type because it drops the first 0 in a phone number
} contacts[numPerson];

int main()
{
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

    while (args_assigned != 1)
    {
        do
        {
            puts ("Select an index number(1~5). \nProgram will print out the person with the index number: ");
            char my_string[50];
            gets(my_string);
            args_assigned = sscanf (my_string, "%d", &i);
            if (args_assigned != 1)
            puts ("\nInput invalid!\n");
        } while((i > 5) || (i < 1)); //keep ask until user gives an index from 1 to 5
    }
    /*
    do
    {
        printf("select an index number(1~5). \nProgram will print out the person with the index number: ");
        scanf("%d", &i);
    } while((i > 5) || (i < 1)); //keep ask until user gives an index from 1 to 5
    */

    printf("\nPerson #%d\n", i);
    printf("Name: %s \nPhonenumber: %s\n", contacts[i-1].name, contacts[i-1].number);
    return 0;
}
