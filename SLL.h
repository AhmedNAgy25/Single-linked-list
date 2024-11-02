#ifndef SLL_H
#define SLL_H
#include "node.h"
template<typename T>
class SLL
{
private:

    node<T>* head;
    node<T>* tail;
    size_t size;

//helper functions

    bool isEmpty(){
        return head==nullptr;
    }

    void deleteList()
    {
        while(head)
        {
            node<T>* temp=head;
            head=head->next;
            delete temp;
        }
        tail=nullptr;
    }

public:

    //constractor
    SLL()
    {
        head=nullptr;
        tail=nullptr;
        size=0;
    }

    //add to end
    void append( T value)
    {
        node<T> * newNode=new node<T>(value);
        if(isEmpty())
        {
            head=newNode;
            tail=newNode;
        }
        else
        {
            tail->next=newNode;
            tail=newNode;
        }
        size++;
    }

    //add to first
    void prepend( T value)
    {
        node<T> * newNode=new node<T>(value);
        if(!head)
        {
            head=newNode;
            tail=newNode;
        }
        else
        {
            newNode->next=head;
            head=newNode;
        }
        size++;

    }

    //add to position
    void addInPosition(const T& value,size_t pos)
    {
        if(pos>size)
        {
            std::cout<<"out of range\n";
            return;
        }
        if(pos==0)
        {
            prepend(value);
            return;
        }
        if(pos==size)
        {
            append(value);
            return;
        }

        node<T> * newNode= new node<T>(value);
        node<T> * temp=head;
        for(size_t i=0; i<pos-1; i++)
        {
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
        size++;

    }

    //remove at end
    void removeAtEnd()
    {
        if (isEmpty())
        {
            std::cout << "empty list\n";
            return;
        }
        if (head == tail)
        {
            delete head;
            head = nullptr;
            tail = nullptr;
        }else{
        node<T>*temp=head;
        while(temp->next!=tail)
        {
            temp=temp->next;
        }
        delete tail;
        tail = temp;
        tail->next = nullptr;
        }
        size--;
    }

    //remove at first
    void removeAtFirst()
    {
        if (isEmpty())
        {
            std::cout << "empty list\n";
            return;
        }
        node<T>*temp=head;
        head=head->next;
        delete temp;
        if (head == nullptr){
            tail=nullptr;
        }
        size--;
    }

    //remove at position
    void removeAtPosition(const size_t& pos)
    {
        if(size==0)
        {
            std::cout<<"empty list\n";
            return;
        }
        if(pos>=size)
        {
            std::cout<<"out of range\n";
            return;
        }
        if(pos==0)
        {
            removeAtFirst();
            return;
        }
        if(pos==size-1)
        {
            removeAtEnd();
            return;
        }
        node<T>*temp=head;
        for(size_t i=0 ; i<pos-1; i++)
        {
            temp=temp->next;
        }
        node<T>*toDelete=temp->next;
        temp->next=toDelete->next;
        delete toDelete;
        size--;
    }

    //search
    bool searchInList(const T& value)
    {
        node<T>*temp=head;
        while(temp)
        {
            if(temp->data == value)
            {
                std::cout<<"found "<<value<<"\n";
                return true;
            }
            temp=temp->next;
        }
        std::cout<<"not found "<<value<<"\n";
        return false;
    }

    //find middle element
    void findMiddle()
    {
        if(size==0)
        {
            std::cout<<"empty list\n";
            return;
        }
        if(size==1)
        {
            std::cout<<"only one element in list: "<<head->data<<std::endl;
            return;
        }
        int med1,med2;
        node<T>*temp=head;
        med1=size/2;
        for(int i=0; i<med1; i++)
        {
            temp=temp->next;
        }
        if(size % 2 == 0)
        {
            std::cout << "middle is " << temp->data << " and " << temp->next->data << std::endl;
        }
        else
        {
            std::cout << "middle is " << temp->data << std::endl;
        }
    }

    //insert in 3 cases
    void insertInList(const size_t& pos,const T& value){
        if(isEmpty()){
            std::cout << "empty list\n";
            return;
        }
        if(pos>size+1||pos<=0){
            std::cout<<"out of range\n";
            return;
        }
        if(pos==1){
            head->data=value;
            return;
        }
        if(pos==size){
            tail->data=value;
            return;
        }
        node<T>*temp=head;
        for(int i=0;i<pos-1;i++){
            temp=temp->next;
        }
        temp->data=value;
    }

    //reverse
    void reverseList()
    {
        if (isEmpty())
        {
            std::cout << "empty list\n";
            return;
        }
        SLL<T>* reversedList=new SLL<T>();
        node<T>*temp=head;
        while(temp)
        {
            reversedList->prepend(temp->data);
            temp=temp->next;
        }
        deleteList();
        head=reversedList->head;
        tail=reversedList->tail;
    }

    //display
    void display()
    {
        if(isEmpty())
        {
            std::cout<<"empty list\n";
            return;
        }
        node<T>*temp=head;
        while(temp)
        {
            std::cout<<temp->data;
            temp=temp->next;
            if(temp)
            {
                std::cout<<"->";
            }
        }
        std::cout<<std::endl;
    }

    //destractor
    ~SLL()
    {
        deleteList();
    }

};

#endif // SLL_H
