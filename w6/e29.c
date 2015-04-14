/* Class : TXL14S1-B Name : Won Seob Seo Student No: 1403724 Exercise no. 29
a program that creates a structure, where one can save name and phone number. Program will ask
for the user to input name and phone number (and insert them to the structure) and then prints out the
given name and phone number from the structure. */

#include <stdio.h>
#include <string.h>

struct phonenumber
{
    char name[50];
    char number[50]; // Not using int type because it drops the first 0 in a phone number
};

int main()
{
    char c;
    int i=0;
    struct phonenumber example;
    printf("Please enter the name: ");
    while (( c = getchar() ) != '\n' )
    {
        example.name[i++] = c;
    }
    example.name[i] = '\0'; // insert null at the end of the string

    printf("Please enter the phonenumber: ");
    scanf("%s", &example.number);
    printf("The name is %s, the phonenumber is %s.", example.name, example.number);
    return 0;
}
