#include<iostream>
using namespace std;
struct node
{
     int data;
     struct node *next;
     node(int data)
      {
              this->data=data;
              next = NULL;
        }
       
    
}*head=NULL,*prev,*next;
void push(int data) 
    { 
        node *temp = new node(data); 
        head ->next=temp; 
        head=temp;
      
    } 
void print(struct node *head)
{
      if(head==NULL)
        printf("\nhello");
      while(head!=NULL)
         {
               cout<<"\t"<<head->data;
               head=head->next;
          }
}
int main()
{
     head = new node(1);
     push(2);
     push(3);
     push(4);
     print(head);
      return 0;
}
