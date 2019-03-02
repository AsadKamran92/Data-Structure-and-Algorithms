#include <stdio.h>
#include <stdlib.h>

struct Node{
struct Node *prev , *next;
int info;
};
struct Node *START = NULL;

struct Node *  createnode ()
{
    struct Node * temp;

    temp = (struct Node *) malloc (sizeof (struct Node));
    return temp;
}

insertnode()
{
    struct Node *p,*t;
    p=createnode();

    scanf("%d",&p->info);

    p->prev=NULL;
    p->next=NULL;

    if(START==NULL)
    {

        START=p;

    }
 else
    {
        t=START;
        while(t->next != NULL)
            t=t->next;
            p->prev=t;
            t->next=p;

    }


}
insertmid()
{
    int data;
struct Node *q,*n;
n=createnode();


 if(START==NULL)
    {

      n->prev = NULL;
      n->next=NULL;
      START=n;
}
else
{   printf("\nEnter Mid Number\n");
   scanf("%d",&data);
   printf("\nEnter Data\n");
   scanf("%d",&n->info);
    q= START;
    while( q != NULL)
    {
        if(q->info==data)
        {
            if(q->next==NULL)
            {
                q->next=n;
                n->prev=q;
                n->next=NULL;
            }
            else
                {
            n->next=q->next;
            q->next->prev=n;
            q->next=n;
            n->prev=q;
                }
    }
    q=q->next;

}
}



}

deletefirst()
{
    struct Node *d;
    if(START==NULL)
    {
        printf("List is Empty");
    }

    else{
        d=START;
        START=START->next;
        free(d);
    }
}

deletelast()
{
    struct Node *d;
    if (START==NULL)
    {
        printf("List is Empty");
    }
    else
        {
        d=START;
        while(d->next != NULL)
        {
            d=d->next;
        }

        d->prev->next=NULL;
        free(d);

    }

}


viewlist()
{
    struct Node *v;
    if(START==NULL)
    {
        printf("\nList is Empty");
    }
    else
    {

        v=START;
        while(v!=NULL)
        {
            printf("  %d",v->info);
            v=v->next;
        }
    }
}

menu()
{
    int ch;
    system("cls");
    printf("\n1.Insert First and Last");
    printf("\n2.View List");
    printf("\n3.Delete First");
    printf("\n4.Delete Last");
    printf("\n5.Insert Middle");
    printf("\n6.Exit");
    printf("\n Enter your Choice\n");
    scanf("%d",&ch);
    return(ch);
}
int main()
{
    struct node *ptr;
    while(1){
    switch(menu())
    {
    case 1:
        printf("Enter Data in List\n");
        insertnode();
        break;
    case 2:
        printf("Printing Data\n");
        viewlist();
        break;
    case 6:
        exit(0);
        break;
    case 3:
        deletefirst();
        break;
    case 4:
        deletelast();
        break;
    case 5:
        insertmid();
        break;


    default:
        printf("Wrong Entry");
        menu();

    }
    getch();
    }
}
