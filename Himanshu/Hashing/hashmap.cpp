#include<iostream>
using namespace std;
const int len=30;
class node{
  public:
    int key;
    int index;
    node* next;
    node(int k,int i)
    {
        key=k;
        index=i;
        next=NULL;
    }
};
class hashmap
{
  node** htable;
  public:
  //int len=30;
  hashmap()
  {
    htable=new node* [len];
    for(int i=0;i<len;i++)
    htable[i]=NULL;
  }
  int hash_func(int v)
  {
    return (v%len);
  }
  void insert(int v,int i)
  {
    int index=hash_func(v);
    node* entry=htable[index];
    if(entry==NULL)
    {
        entry=new node(v,i);
        htable[index]=entry;
    }
    else
    {
      entry=new node(v,i);
      node* temp=htable[index];
      while(temp->next!=NULL)
      {
        temp=temp->next;
      }
      temp->next=entry;
    }
  }
  int search(int v)
  {
    int index=hash_func(v);
    node* entry=htable[index];
    if(entry==NULL)
    {
      return -1;
    }
    while(entry!=NULL)
    {
       if(entry->key==v)
       {
        return entry->index;
       }
       entry=entry->next;
    }
    return -1;
    }
  void display()
  {
    node* temp=NULL;
    for(int i=0;i<len;i++)
    {
        cout<<i<<"-->";
        temp=htable[i];
        while(temp!=NULL)
        {
            cout<<temp->key<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
  }
};
