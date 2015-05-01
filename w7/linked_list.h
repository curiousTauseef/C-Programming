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
}
node;
