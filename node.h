#ifndef NODE_H
#define NODE_H

template<typename T>
class node
{
    public:
        T data;
        node* next;

        node(const T& value) {
            data=value;
            next=nullptr;
        }


};

#endif // NODE_H
