#include <iostream>

using namespace std;

class Node{
    // Class Node: Each element of the Array is a Node
    public:
    int data; // Data in the Array
    Node* next; // pointer to next element of the Array
    Node(int val){
        // Constructor for creation of a Node
        data=val;
        next=NULL;
    }
};

class MyArray{
    /*
    Methods:

    isEmpty() :
         - returns if the Array is Empty

    InsertBegin(value) :
         ****   PARAMETERS: takes in one parameter ****
        - Inserts the element at the beginning of the Array

    InsertEnd(value) :
         ****   PARAMETERS: takes in one parameter ****
        - To insert the element in the end of the Array

    InsertAtIndex(value, index):
        ****  PARAMETERS: takes in 2 parameters : value and the index
        - Inserts the element (value) at the index position from the beginning

    DeletefromIndex(index):
        ****  PARAMETERS: takes in 1 parameters : index
        - Delete the element at the index position from the beginning

    DeleteBegin() :
         - Deletes the Element from the beginning of the Array

    DeleteEnd() :
        -  To delete the element from the end of the Array

    Display() :
        - to the Dispaly the complete Array

    */
    public:
    Node* head;
    Node* tail;
    int size;

    MyArray(){
        // Constructor
        head=NULL;
        tail=NULL;
        size=0;
    }


    int isEmpty(){
        // A function that check if the Array is empty or not
        if (head==NULL)
        {
            return 1;
        }
        else
        {
            return 0;
        }
       
    }

    void InsertBegin(int val){
        Node* myObj=new Node(val);

        if (isEmpty()==1)
        {
            head=myObj;
            tail=head;
            size++;
        }

        else
        {
            myObj->next=head;
            head=myObj;
            size++;
        }
    }

    void InsertEnd(int val){
        // Function that inserts the value at the End of the Array

        Node* myObj=new Node(val);

        if (isEmpty()==1)
        {
            head=myObj;
            tail=head;
            size++;
        }

        else
        {
            tail->next=myObj;
            tail=myObj;
            size++;
        }

    }

    void InsertAtIndex(int val,int index){
        // Insert the val : (value) at the index: (index in the Array)
        if (index>size or index<0)
        {
            cout<<"\n Can't insert at this Index. Index not availabe";
        }
        else
        {
            Node* newptr=head;
            for (int i = 0; i < index-1; i++)
            {
                newptr=newptr->next;
            }

            Node* myObj=new Node(val);
            myObj->next=newptr->next;
            newptr->next=myObj;
            size++; // Size of the ARRAY
        }
        
    }


    // ---------------- DELETION ---------------------  
    int DeleteBegin(){
        int val; // That that will be returned
        if (isEmpty()==1)
        {
            cout<<"Array is Empty"<<endl;
            return -1;
        }
        else if(head->next==NULL){
            val=head->data;
            head=NULL;
            // head->next=NULL;
            tail=head;
            cout << "\nValue deleted is: "<<val << endl;
            size--;
            return val;
        }
        else{
            Node* todel=head;
            val=head->data;
            head=head->next;
            delete todel;
            cout<<"Value deleted is: "<<val<<endl;
            size--;
            return val;
        }
    }


    void DeleteEnd(){
        int val; // That that will be returned
        if (isEmpty()==1)
        {
            cout<<"Array is Empty"<<endl;
        }
        else if (head==tail)
        {
            val=head->data;
            head=NULL;
            tail=NULL;
            cout<<"\nValue deleted is: "<<val<<endl;
        }
        else
        {
            val=tail->data;

            Node* newptr=head; // Creating a new pointer so that we don't move our head

            while (newptr->next!=tail)
            {
                newptr=newptr->next;
            }

            tail=newptr; // Setting the new tail
            tail->next=NULL;
            cout<<"Value deleted is: "<<val<<endl;
            size--;
        }
    }

    void DeletefromIndex(int index){
        if (index>size or index<0)
        {
            cout<<"\n Can't delete at this Index. Index not availabe";
        }
        else if (isEmpty()==1)
        {
            cout<<"Array is Empty"<<endl;
        }
        else
        {
            int val;
            Node* newptr=head;

            for (int i = 0; i < index-1; i++)
            {
                newptr=newptr->next;
            }

            Node* temp=newptr->next;
            val=temp->data;
            cout<<"\n Deleted value is: "<<val<<endl;

            if (temp->next==NULL)
            {
                newptr->next=NULL;
                tail=newptr;
            }
            else{
                newptr->next=temp->next;
            }
            size--;
        }
        

    }

    // -------------------------------------------------------------------------
    void display(){
        // Function that displays the Array
        if (head==NULL)
        {
            cout<<"The Array is Empty"<<endl;
        }
        else
        {
            Node* newptr=head;

            cout<<"\n ---- Array is: ";
            while (newptr!=NULL)
            {
                cout<<newptr->data<<" ";
                newptr=newptr->next;
            }
            cout<<endl;
            
        }

    }

    // fucntion to reverse the Array
    void Reverse(){
        MyArray Arr2;
        int x;
        int s=size;
        for(int i=0;i<s;i++){
            int x=DeleteBegin();
            Arr2.InsertBegin(x);
        }

        head=Arr2.head;
    }
};

// Reversing the Array





int main()
{

    int co=1;
    MyArray Arr;

    int x,y,choice;
    while (co!=0)
    {

        cout<<"\n Enter \n 1: to Insert at Beginnig \n 2: to Insert at End \n 3: to InsertAtindex(Element,index) \n 4: to DeleteBegin() \n 5: DeleteEnd()  \n 6: To DeleteFromIndex(index)  \n 7: Display \n 8: To reverse \n"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"\nEnter the element: ";
            cin>>x;
            Arr.InsertBegin(x);
            break;
        case 2:
            cout<<"\nEnter the element: ";
            cin>>x;
            Arr.InsertEnd(x);
            break;

        case 3:
        cout<<"Enter the value, then the index\n";
            cin>>x;
            cin>>y;
            Arr.InsertAtIndex(x,y);
            break;

        case 4:
            Arr.DeleteBegin();
            break;

        case 5:
            Arr.DeleteEnd();
            break;

        case 6:
            cout<<"Enter your index to delete from : ";
            cin>>x;
            Arr.DeletefromIndex(x);
            break;

        case 7:
            Arr.display();
            break;

        case 8:
            Arr.Reverse();
            break;

        default:
            break;
        }
        cout<<" \n ------------- Press 1 to Continue , 0 to EXIT ----------- \n";
        cin>>co;
    }
    
    return 0;
}
