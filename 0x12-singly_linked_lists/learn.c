#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *link;
};

void count_node(struct node *head);
int main(void)
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 50;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;
    head->link->link = current;

    current = malloc(sizeof(struct node));
    current->data = 33;
    current->link = NULL;
    head->link->link->link = current; 
    count_node(head);
    return(0);
}
void count_node(struct node *head)
{
    if (head == NULL)
        printf("it is empty, no singly linked list");
    struct node *ptr = head;
    int size = 0;
    while (ptr != NULL)
    {
        size++;
        ptr = ptr->link;
    }
    printf("size = %d\n", size);
}
void print_data(struct node *head)
{
    if (head == NULL)
        printf("it is empty, no singly linked list");
    struct node *ptr = head;
    while (ptr != NULL)
    {
        size++;
        printf("%d\t", ptr->data);
        ptr = ptr->link;
    }
}
void add_at_end(struct node *head, int data)
{
    if (head == NULL)
        printf("it is empty, no singly linked list");

    struct node *ptr, *temp;
    ptr = head;
    temp = malloc(sizeof(struct node));

    temp->data = data;
    temp->link = NULL;
    
    while((ptr->link) != NULL)
    {
        ptr = ptr -> link;
    }
    ptr->link = temp;
}
struct node *add_node(struct node *ptr, int data)
{
     if (head == NULL)
        printf("it is empty, no singly linked list");

    struct node *temp;
    temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    ptr->link = temp;
    return = temp;
}
struct node *add_data_begining(struct node *head, data)
{
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = data;
    ptr->link = NULL;
    
    ptr->link = head;
    head = ptr;
    return(head);
}
void add_at_pos(struct node *head, int data, int pos)
{
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = data;
    ptr->link = NULL;
    
    struct node ptr2 = head;
    pos--;
    while (pos != 1)
    {
        ptr2 = ptr2->link;
        pos--;
    }
    ptr->link = ptr2->link;
    ptr2->link = ptr;
}