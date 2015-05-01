/**
 * list-1.h
 *
 * David J. Malan
 * malan@harvard.edu
 *
 * Defines structures for students and linked lists thereof.
 */

typedef struct
{
    char id[20];
    char name[20];
}
student;

typedef struct node
{
    student* student;
    struct node* next;
}
node;
