#include<bits/stdc++.h>
using namespace std;

class node{
 public:  
    int data;
    node* next;
    
          
        node(int x)
        {
            data=x;
            next=NULL;
        }
      //***********
      //call by reference     
};
 void insertAtTail(node* &head,int val) 
      {
          node* newnode=new node(val);  //creating newnode
          
          if(head==NULL)
          {
              head=newnode;
              return ;
          }

          node* temp=head;

          while(temp->next!=NULL)
          {
              temp=temp->next;
          }
          temp->next=newnode;

      } 

void display(node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}

    //call by reference
void insertAtHead(node* &head,int val)
{
    node *newnode=new node(val);

    newnode->next=head;
    head=newnode;
}
int search(node *head,int key)
{
   int index=1;
        while(head!=NULL)
        {
            if(head->data==key)
            {
                return index;
            }
            head=head->next;
            index++;
        }

    return -1;
}

void Delete_in_list(node* &head,int key)
{
    node* temp=head;

    // handling head condition
    if(head->data==key)
        {
            head=head->next;
            delete(temp);
            return ;
        }
    
    
    while(temp->next!=NULL) 
    {
        if(temp->next->data==key)
        {
            node* del=temp->next;

            temp->next=temp->next->next;

            delete(del);    return ;
        }
        temp=temp->next;
    }   

    cout<<"\nElement not found";
}

void reverse(node* &head)
{
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;

    while(currptr!=NULL)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;
    }

    head=prevptr;
}

node* reverse_Recursive(node* head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }

    node * newnode=reverse_Recursive(head->next);

    head->next->next=head;
    head->next=NULL;
    
    return newnode;
}

int main()
{
    node*head=NULL;

    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtHead(head,4);


    display(head);

    // cout<<"\nElement found at: "<<search(head,1)<<endl;

    // Delete_in_list(head,3);
    head=reverse_Recursive(head);

     display(head);

    // reverse(head);

    // display(head);
}