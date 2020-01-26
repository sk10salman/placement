#include<iostream>
using namespace std;
struct node
{
   int data;
   struct node *next;
}*start=NULL,*temp=NULL,*p=NULL;
void insert(int data){
         struct node *ptr= (struct node *)malloc(sizeof(struct node));
         ptr->data=data;
         ptr->next=start;
         start = ptr;
}
void insert_last(int data)
{
     struct node *ptr= (struct node *)malloc(sizeof(struct node));
         ptr->data=data;  
    struct node *a = start;
     while(a->next!=NULL)
        {
             a=a->next;
        }
           ptr->next=a;
           a = ptr;
           ptr->next=start;
           start=ptr;
}
void print()
{
     struct node *a = start;
     while(a!=NULL)
        {
            cout<<a->data<<"->";
             a=a->next;
        }
}
int main()
{ 
    insert(3);insert(4);insert(5);insert_last(8);
     print();
     return 0;
     
}
