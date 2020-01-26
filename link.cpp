#include<iostream>
using namespace std;
struct node{
   int data;
   struct node *next;
};
int main()
{
    struct node *head,*temp,*b;
    head = (struct node *)malloc(sizeof(struct node));
     head->data=1;
     head->next=NULL;
     temp=head;
     for(int i=0;i<5;i++)
      {
           int a;
           cin>>a;
           b = (struct node *)malloc(sizeof(struct node));
           
           b->data=a;
           temp->next=b;
             temp=b;
            temp->next=NULL;
       }
         cout<<"heee";
       struct node *p;
       p=head;
       while(p!=NULL)
           {
              cout<<p->data<<" ";
               p=p->next;
           }
        
      return 0;
}
           
            
           
