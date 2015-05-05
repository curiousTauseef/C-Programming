/* Class : TXL14S1-B Name : Won Seob Seo student No: 1403724 Exercise no. 32
Write a program that uses linked list for creating a user-defined length of a list of structures in the memory.
Structures in the memory have at least 2 fields: ID and name. (also you will likely want to use next and
previous memory locations in the list...)
a) After filling in the list, print out the list in order
b) Build the list so, that you can go back and forth in the list one unit at a time
c) Make the list adjustable so that you are able to remove a single or multiple units from the list so
that you can still scroll though the list after removing the units */


#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*
 * Defines structures for students and linked lists thereof.
 */

typedef struct
{
    char id[20];
    char name[20];
}
person;

typedef struct node
{
    person* person;
    struct node* next;
} node;

// linked list
node* first = NULL;

// number of list
int num_list = 0;

// prototypes
void del(void); //deleting loop
void remove_entry(void); // doing the actual remove part, used inside del function
node* insert(node* ptr);
void search(void);
void print_list(void);
// void dump_line(FILE * fp);
void print_current(node* ptr);
node* move_pred(node* ptr); // go back in the list
node* move_next(node* ptr); // go forth in the list

int main(void)
{
    char c;
    int i, num;
    node* ptr = first;
    printf("How many entries do you want to enter initially?\n"); // ask user for a initial list length
    scanf("%i", &num);
    // create user defined length of a list of structures
    for (i = 0; i < num ; i++)
    {
        ptr = insert(ptr);
    }

    do
    {
        printf("Currently you have %i entry(ies)", num_list);
        if (num_list > 0)
        {
            if (ptr != NULL)
            {
                print_current(ptr);
            }
        }

        // print instructions
        printf("\nMENU\n\n"
            "1 - delete\n"
            "2 - insert\n"
            "3 - search\n"
            "4 - print_list\n"
            "5 - move to the previous list\n"
            "6 - move to the next list\n"
            "0 - quit\n\n");

        // get command
        printf("Command: ");
        fflush(stdin);
        scanf("%c", &c);

        // try to execute command
        switch (c)
        {
            case '1': del(); break;
            case '2': ptr = insert(ptr); break;
            case '3': search(); break;
            case '4': print_list(); break;
            case '5': ptr = move_pred(ptr); break;
            case '6': ptr = move_next(ptr); break;
        }
    }
    while (c != '0');

    // free list before quitting(to prevent memory leakage)
    while (ptr != NULL)
    {
        node* predptr = ptr;
        ptr = ptr->next;
        if (predptr->person != NULL)
        {
            if (predptr->person->name != NULL)
            {
                free(predptr->person->name);
            }
            free(predptr->person);
        }
        free(predptr);
    }

}

/**
 * Tries to delete a person.
 */
void del(void)
{
    int i, num_del;
    if (num_list > 1)
    {
        // ask how many entry that user want to delete
        printf("How many entry do you want to delete? Choose 1~%i: ", num_list);
        scanf("%i", &num_del);
        for (i = 0; i < num_del - 1; i++)
        {
            remove_entry(); // delete (wanted number - 1) entries
        }
    }
    remove_entry(); // delete once more

    // print_list list
    print_list();
}

void remove_entry(void)
{
    // prompt user for ID
    printf("ID to delete: ");
    char str[20];
    scanf("%s", str);
    //fgets(str, 20, stdin);

    // get list's first node
    node* ptr = first;

    // try to delete person from list
    node* predptr = NULL;
    while (ptr != NULL)
    {
        // check for ID
        if (strcmp(ptr->person->id, str) == 0)
        {
            // delete from head
            if (ptr == first)
            {
                first = ptr->next; // new first(the node declared globally)
                free(ptr->person->name);
                free(ptr->person->id);
                free(ptr->person);
                free(ptr);
                num_list--; // count down a entry
            }

            // delete from middle or tail
            else
            {
                predptr->next = ptr->next; // predecessor pointer no longer points the deleted note, it rather points the next node of the deleted node
                // free the ptr, deleting a node
                if (ptr->person->name != NULL)
                {
                    free(ptr->person->name);
                }
                if (ptr->person->id != NULL)
                {
                    free(ptr->person->id);
                }
                free(ptr->person);
                free(ptr);
                num_list--; // count down a entry
            }

            // deleting done
            break;
        }
        // if the id did not match, move to next node
        else
        {
            predptr = ptr;
            ptr = ptr->next;
        }
    }
}

/**
 * Tries to insert a person into list.
 */
node* insert(node* ptr)
{
    // try to instantiate a node
    node* newptr = malloc(sizeof(node));
    if (newptr == NULL)
    {
        return;
    }

    // initialize node
    newptr->next = NULL;

    // try to instantiate person
    newptr->person = malloc(sizeof(person));
    /*if (newptr->person == NULL)
    {
        free(newptr);
        return;
    }*/

    // try to initialize person
    printf("Input the ID: ");
    scanf("%s", newptr->person->id);
    //fgets(newptr->person->id, 20, stdin);
    printf("Enter the name: ");
    scanf("%s", newptr->person->name);
    //fgets(newptr->person->name, 20, stdin);
    if (newptr->person->name == NULL || newptr->person->id == NULL)
    {
        if (newptr->person->name != NULL)
        {
            free(newptr->person->name);
        }
        if (newptr->person->id != NULL)
        {
            free(newptr->person->id);
        }
        free(newptr->person);
        free(newptr);
        return;
    }

    // check if the list is empty, if so first node is assigned with a newly made item
    if (first == NULL)
    {
        first = newptr;
        num_list++; // count up the total number of list
        return newptr;
    }

    // else try to insert person at tail
    else
    {
        node* predptr = first;
        while (1)
        {
            // avoid duplicates(throw away the new input)
            if (strcmp(predptr->person->id, newptr->person->id) == 0)
            {
                printf("\nThe entered ID number already exists!\n");
                free(newptr->person->name);
                free(newptr->person);
                free(newptr);
                break;
            }

            // check for insertion at tail
            else
            {
                // update pointer until it reaches the tail
                while (predptr->next != NULL)
                {
                    predptr = predptr->next;
                }
                predptr->next = newptr; // entail the newly added pointer
                num_list++;
                break;
            }
        }
    }

    // print_list list
    print_list();
    return ptr;
}

/**
 * Searches for person in list via person's ID.
 */
void search(void)
{
    char id[20];
    int found=0;
    // prompt user for ID
    fflush(stdin);
    printf("ID to search for: ");
    scanf("%s", id);

    // get list's first node
    node* ptr = first;

    // search for person
    while (ptr != NULL)
    {
        if ( strcmp(ptr->person->id, id) == 0)
        {
            printf("\nThe requested ID has been found! \n\nID: %s \nname: %s\n", id, ptr->person->name);
            found++;
            break;
        }
        ptr = ptr->next; //move on to the next node
    }
    if (found == 0)
    {
        printf("\nThe requested ID has not been found!\n");
    }
}

/**
 * print_lists list, printing its numbers.
 */
void print_list(void)
{
    // print_list
    printf("\nLIST IS NOW:\n");
    node* ptr = first;
    while (ptr != NULL)
    {
        printf("ID: %s \nname: %s\n\n", ptr->person->id, ptr->person->name); //print a node
        ptr = ptr->next; //proceed to the next node
    }

    // flush standard output since we haven't outputted any newlines yet
    fflush(stdout);
}

void print_current(node* ptr)
{
    printf("\nThe current item is...\n\n"
           "ID: %s \nname: %s\n\n", ptr->person->id, ptr->person->name);
}

node* move_pred(node* ptr)
{
    node* predptr = first;
    // move from first node to just before the current pointer
    while ((predptr -> next != ptr) && (predptr -> next != NULL))
    {
        predptr = predptr -> next;
    }

    printf("\nYou moved to the next item on the list\n"
            "The current item is...\n\n"
            "ID: %s \nname: %s\n\n", predptr->person->id, predptr->person->name);
    return predptr;
}

node* move_next(node* ptr)
{
    if (ptr->next != NULL)
    {
        ptr = ptr -> next;
    }
    printf("\nYou moved to the next item on the list\n"
            "The current item is...\n\n"
            "ID: %s \nname: %s\n\n", ptr->person->id, ptr->person->name);
    return ptr;
}

/*
void dump_line(FILE * fp)
{
    // cleaning input buffer
    int ch;
    while ((ch = fgetc(fp)) != EOF && ch != '\n')
    {
    // null body;
    }
}
*/
