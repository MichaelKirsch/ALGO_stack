#pragma once


template< class item_type>
class Stack
{
    struct node
    {
        item_type item;
        node *next;
    };
    node * tail;
    int amt_items=0;
public:
    Stack(){};
    ~Stack(){};
    void push(item_type& r)
    {
        if(amt_items==0)
            tail = new node{r, nullptr};
        else
            tail = new node{r,tail};
        amt_items++;
    };
    item_type pop()
    {
        item_type to_return = tail->item;
        auto* b = tail->next;
        delete [] tail;
        tail = b;
        amt_items--;
        return to_return;
    }
    item_type top()
    {
        return tail->item;
    }
    int length()
    {
        return amt_items;
    };
    bool empty(){
        return amt_items==0;
    };
    void clear()
    {
        while(tail->next!= nullptr)
            pop();
    }
};