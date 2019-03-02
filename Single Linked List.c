#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct  node *link;
} ;
struct node *Start=NULL;
struct node* createNode() {
    struct node *p;
    p=(struct node *) malloc (sizeof (struct node) );
    return p;

}
void insertnode(){
    struct node *temp,*t;
    temp =  createNode();
    printf("Enter value in Node");
    scanf("%d",&temp->info);
    temp->link=NULL;

    if (Start==NULL)
    {
        Start=temp;

}
else
{
    t=Start;
    while(t->link!=NULL)
    {
        t=t->link;
    }
    t->link=temp;

}
}
void deletenode()
{
    struct node *dlt;
    if(Start==NULL)
    {
        printf("List is Empty");
    }
    else {
dlt = Start;
Start=Start->link;
free(dlt);
}
}
void viewlist () {
struct node *t;
if(Start==NULL)
    printf("List is Empty");
t=Start;
while(t!=NULL)
{
    printf(" %d",t->info);
    t=t->link;
}
}
int menu()
{
    int ch ;
    printf("\n1. Add value to the list");
    printf("\n2. Delete First Value");
    printf("\n3. View list");
    printf("\n4. Exit");
    printf("\n5. Enter Your Choice");
    scanf("%d",&ch);
    return(ch);
}
int main()
{
    while(1)
    {
        system("cls");
        switch(menu())
        {

        case 1:
            insertnode();
            break;
        case 2:
            deletenode();
            break;
        case 3:
            viewlist();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Invalid Entry");
        }
        getch();
    }

}
