#include<iostream>
using namespace std;
class node
{
     public:
       int data;
       node *next;
}*head=NULL,*temp=NULL,*p=NULL;
void print(node *n)
{
         while(n!=NULL)
           {
               cout<<n->data<<"->";
               n=n->next;
           }
}
void beg_insert(node *a,int dat)
{
            a->data=dat;
            a->next=head;
            head=a;
            
}
void end_insert(node *a,int dat)
{
        while(head!=NULL)
        {
             head=head->next;
        }
        head->next=a;
        a->data=dat;
        a->next=NULL;
        
}
int main()
{
       head = new node;
       head->data=1;
       head->next=NULL;
       for(int i=0;i<4;i++)
           {
               temp=new node;
              beg_insert(temp,i);          
}
          p=new node;
          end_insert(p,10);
        print(head);
      return 0;
}
