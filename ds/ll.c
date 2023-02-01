#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count = 0;
  
struct node {
    struct node* prev;
    int ssn;
    long int phno;
    float sal;
    char name[20], dept[10], desg[20];
    struct node* next;
} *h, *temp, *temp1, *temp2;
  
void create()
{
    int ssn;
    long int phno;
    float sal;
    char name[20], dept[10], desg[20];
    temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->next = NULL;
    printf("\n enter ssn, name, department, designation, salary and phno of employee:\n");
    scanf("%d %s %s %s %f %ld",&ssn, name, dept, desg,&sal, &phno);
    temp->ssn = ssn;
    strcpy(temp->name, name);
    strcpy(temp->dept, dept);
    strcpy(temp->desg, desg);
    temp->sal = sal;
    temp->phno = phno;
    count++;
}
  
void insertbeg()
{
    if (h == NULL) 
    {
        create();
        h = temp;
        temp1 = h;
    }
   
    else 
    {
        create();
        temp->next = h;
        h->prev = temp;
        h = temp;
    }
}
int deleteend()
{
    struct node* temp;
    temp = h;
    if (temp == NULL) 
    {
        printf("list is empty\n");
        return 0;
    }
    
    if (temp->next == NULL) 
    {
        printf("%d %s %s %s %f %ld\n",temp->ssn, temp->name,temp->dept, temp->desg,temp->sal, temp->phno);
        free(temp);
        h = NULL;
    }
   
    else 
    {
        temp = temp1;
        temp2 = temp1->prev;
        temp2->next = NULL;
        printf("%d %s %s %s %f %ld\n",temp->ssn, temp->name,temp->dept, temp->desg,temp->sal, temp->phno);
        free(temp);
        temp1 = temp2;
    }
    count--;
    return 0;
}

void displaybeg()
{
    temp2 = h;
    if (temp2 == NULL) 
    {
        printf("\n list is empty\n");
        return;
    }

    printf("\n linked list elements from beginning:\n");
    while (temp2 != NULL) 
    {
        printf("%d %s %s %s %f %ld\n",temp2->ssn, temp2->name,temp2->dept, temp2->desg,temp2->sal, temp2->phno);
        temp2 = temp2->next;
    }
    printf("number of employees=%d", count);
}
int main()
{
    int ch, n, i;
    h = NULL;
    temp,temp1 = NULL;
    printf("--------Menu------------\n");
    printf("\n 1.create a DLL of n emp");
    printf("\n 2.display from beginning");
    printf("\n 3.delete at end");
    printf("\n 4.insert at beginning");
    printf("\n 5.exit\n");
    printf("----------------------\n");
    while (1) 
    {
        printf("\n enter choice : ");
        scanf("%d", &ch);
  
        switch (ch) 
        {
        case 1:
            printf("\n enter number of employees:");
            scanf("%d", &n);
            for (i = 0; i < n; i++)
                insertbeg();
            break;
        case 2:
            displaybeg();
            break;
        case 3:
            deleteend();
            break;
        case 4:
            insertbeg();
            break;
        case 5:
            exit(0);
        default:
            printf("wrong choice\n");
        }
    }
    return 0;
}