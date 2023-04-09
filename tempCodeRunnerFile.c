#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *head;
struct node *tail;
void insert_at_head()
{
    struct node *newnode;
    int data;
    printf("enter the data: ");
    scanf("%d", &data);
    if (head == NULL)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = data;
        newnode->link = NULL;
        head = newnode;
    }
    else
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = data;
        newnode->link = head;
        head = newnode;
    }
}
void display()
{
    struct node *ptr;
    ptr = head;
    int count = 0;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
        count++;
    }
    printf("the number of element is %d", count);
}
struct node *middle(struct node *start, struct node *last)
{
    if (start == NULL)
    {
        return NULL;
    }
    //take two pointer one is fast and another is slow
    struct node *slow=start;
    struct node *fast=start;
    while (fast->link!=last&&fast->link->link!=last)
    {
        fast=fast->link->link;
        slow=slow->link;
    }
    //now by this slow pointing the middle of the linked list
 //now returning slow for the middle value
    return slow;
    
}
struct node *binarysearch(int key)
{
    struct node *start = head;
    struct node *last = NULL;
    while (start!=last)
    {
        struct node *mid=middle(start,last);
        if (mid->data==key)
        {
            return mid;
        }
        else if (mid->data<key)
        {
            start=mid->link;
        }
        else{
            last=mid;
        }
        return NULL;
    }
    
}
int main()
{
    int option,key;
    do
    {
        printf("\n1:insert\n2:display\n");
        printf("enter the options: ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            insert_at_head();
            break;
        case 2:
            display();
            break;
        case 3:
    
            printf("enter the key : ");
            scanf("%d", &key);
            struct node* index = binarysearch(key);
            printf("we found the value %d ",index->data);
            break;
        default:
            break;
        }

    } while (option != 5);
}