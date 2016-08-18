#include <stdio.h>
void create(int);
void insert(int);
void display();
void deletelast();
struct cnode
{
    int data;
    struct cnode *next;
};
 struct cnode *head;
 struct cnode *cur;
void create(int x)
{
    struct cnode *node;
    node=(struct cnode*)malloc(sizeof(struct cnode));
    node->data=x;
    node->next=NULL;
    head=node;
    cur=node;
}
void insert(int x)
{
    if(head==NULL)
    {
        create(x);
    }
    else
    {
        struct cnode *node;
        node=(struct cnode*)malloc(sizeof(struct cnode));
        node->data=x;
        node->next=NULL;
        while(cur->next!=NULL)
        {
            cur=cur->next;
        }
        cur->next=node;
        cur=head;
    }
}
void display()
{
    while(cur!=NULL)
    {
        printf("%d\t",cur->data);
        cur=cur->next;
    }
    cur=head;
}
void deletelast()
{
    struct cnode* prev;
    while(cur->next!=NULL)
    {
        prev=cur;
        cur=cur->next;
    }
    prev->next=NULL;
    free(cur);
    cur=head;
}

int main(void) {
    int i=0,x;
    char a[100];
    head=NULL;
    cur=NULL;
    gets(a);
    while(a[i]!='\0')
    {
        x=0;
        while(a[i]!=' ')
        {
           if(a[i]=='\0')
           {
               i--;
               break;
           }
           x=x*10+a[i]-'0';
           i++;
        }
        insert(x);
        i++;
    }
    deletelast();
    display();
	return 0;
}

