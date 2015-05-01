/* Class : TXL14S1-B Name : Won Seob Seo Student No: 1403724 Exercise no. 32
Write a program that uses linked list for creating a user-defined length of a list of structures in the memory.
Structures in the memory have at least 2 fields: ID and name. (also you will likely want to use next and
previous memory locations in the list¡¦.)
a) After filling in the list, print out the list in order
b) Build the list so, that you can go back and forth in the list one unit at a time
c) Make the list adjustable so that you are able to remove a single or multiple units from the list so
that you can strill scroll though the list after removing the units */


#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "linked_list.h"

// linked list
node* first = NULL;

// prototypes
void del(void);
void insert(void);
void search(void);
void traverse(void);
void dump_line(FILE * fp);

int main(void)
{
    char c;
    do
    {
        // print instructions
        printf("\nMENU\n\n"
            "1 - delete\n"
            "2 - insert\n"
            "3 - search\n"
            "4 - traverse\n"
            "0 - quit\n\n");

        // get command
        printf("Command: ");
        fflush(stdin);
        scanf("%c", &c);

        // try to execute command
        switch (c)
        {
            case '1': del(); break;
            case '2': insert(); break;
            case '3': search(); break;
            case '4': traverse(); break;
        }
    }
    while (c != '0');

    /*// free list before quitting(to prevent memory leakage)
    node* ptr = first;
    while (ptr != NULL)
    {
        node* predptr = ptr;
        ptr = ptr->next;
        if (predptr->student != NULL)
        {
            if (predptr->student->name != NULL)
            {
                free(predptr->student->name);
            }
            free(predptr->student);
        }
        free(predptr);
    } */
}

/**
 * Tries to delete a student.
 */
void del(void)
{
    // prompt user for ID
    printf("ID to delete: ");
    char str[20];
    scanf("%s", str);
    //fgets(str, 20, stdin);

    // get list's first node
    node* ptr = first;

    // try to delete student from list
    node* predptr = NULL;
    while (ptr != NULL)
    {
        // check for ID
        if (strcmp(ptr->student->id, str) == 0)
        {
            // delete from head
            if (ptr == first)
            {
                first = ptr->next; // new first(the node declared globally)
                free(ptr->student->name);
                free(ptr->student->id);
                free(ptr->student);
                free(ptr);
            }

            // delete from middle or tail
            else
            {
                predptr->next = ptr->next; // predecessor pointer no longer points the deleted note, it rather points the next node of the deleted node
                // free the ptr, deleting a node
                if (ptr->student->name != NULL)
                {
                    free(ptr->student->name);
                }
                if (ptr->student->id != NULL)
                {
                    free(ptr->student->id);
                }
                free(ptr->student);
                free(ptr);
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

    // traverse list
    traverse();
}

/**
 * Tries to insert a student into list.
 */
void insert(void)
{
    // try to instantiate a node
    node* newptr = malloc(sizeof(node));
    if (newptr == NULL)
    {
        return;
    }

    // initialize node
    newptr->next = NULL;

    // try to instantiate student
    newptr->student = malloc(sizeof(student));
    /*if (newptr->student == NULL)
    {
        free(newptr);
        return;
    }*/

    // try to initialize student
    printf("Input the ID: ");
    scanf("%s", newptr->student->id);
    //fgets(newptr->student->id, 20, stdin);
    printf("Enter the name: ");
    scanf("%s", newptr->student->name);
    //fgets(newptr->student->name, 20, stdin);
    if (newptr->student->name == NULL || newptr->student->id == NULL)
    {
        if (newptr->student->name != NULL)
        {
            free(newptr->student->name);
        }
        if (newptr->student->id != NULL)
        {
            free(newptr->student->id);
        }
        free(newptr->student);
        free(newptr);
        return;
    }

    // check if the list is empty, if so first node is assigned with a newly made item
    if (first == NULL)
    {
        first = newptr;
    }

    // else try to insert student at tail
    else
    {
        node* predptr = first;
        while (1)
        {
            // avoid duplicates(throw away the new input)
            if (strcmp(predptr->student->id, newptr->student->id) == 0)
            {
                printf("\nThe entered ID number already exists!\n");
                free(newptr->student->name);
                free(newptr->student);
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
                predptr->next = newptr;
                break;
            }
        }
    }

    // traverse list
    traverse();
}


/**
 * Searches for student in list via student's ID.
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

    // search for student
    while (ptr != NULL)
    {
        if ( strcmp(ptr->student->id, id) == 0)
        {
            printf("\nThe requested ID has been found! \n\nID: %s \nname: %s\n", id, ptr->student->name);
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
 * Traverses list, printing its numbers.
 */
void traverse(void)
{
    // traverse list
    printf("\nLIST IS NOW:\n");
    node* ptr = first;
    while (ptr != NULL)
    {
        printf("ID: %s \nname: %s\n\n", ptr->student->id, ptr->student->name); //print a node
        ptr = ptr->next; //proceed to the next node
    }

    // flush standard output since we haven't outputted any newlines yet
    fflush(stdout);
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
