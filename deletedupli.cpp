#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void push(struct node **Node,int data)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
     temp->next=*Node;
     *Node=temp;
   
}
void delete_first(struct node **Node)
{
    struct node *a=*Node;
    a=a->next;
    *Node=a;
}
void insert_last(struct node *Node,int data)
{
     struct node *temp=(struct node*)malloc(sizeof(struct node));
       temp->data=data;
      while(Node->next!=NULL)
       {
          Node=Node->next;  
        }
        Node->next=temp;
        temp->next=NULL;
        Node=temp;
}
void insert_pos(struct node **Node,int data,int index)
{
   struct node *temp=(struct node*)malloc(sizeof(struct node));
       temp->data=data;
    int i=0;
    struct node *p=*Node,*a=*Node;
   
    for(int i=0;i<index-1;i++)
       {
          
          p=p->next;  
        }
      temp->next=p->next;
      p->next=temp;
   
        
}
void print(struct node *n)
{
    while(n!=NULL)
     {
          cout<<n->data<<"->";
          n=n->next;
      }
    cout<<endl;
}
void duplicate(struct node **head)
{
   struct node *p=*head,*q,*prev;
   while(p!=NULL)
    {
       q=p->next;
       while(q!=NULL)
         {
                if(p->data==q->data)
                    {
                       prev=q->next;
                       free(q);
                       
                    }
               
                           q=q->next;
         }
        p=p->next;
    }  
    struct node *a=*head;
    print(a);
}
int main()
{
      struct node *head;
      head->data=1;
      head->next=NULL;
        push(&head,2);
       push(&head,2);
        push(&head,10);
         push(&head,8);
        push(&head,2);
      insert_last(head,8);
      insert_pos(&head,10,2);
       delete_first(&head);
      print(head);
     duplicate(&head);
   
       return 0;
}
