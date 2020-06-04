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
    Stack(const Stack&s)
    {
        clear();
        while (s.amt_items>0)
            push(s.pop());
    }
    ~Stack(){
        clear();
        delete tail;
    };

    void push(item_type r)
    {
        if(amt_items==0)
            tail = new node{r, nullptr};
        else
            tail = new node{r,tail};
        amt_items++;
    };
    item_type pop()
    {
        if(empty())
            throw std::runtime_error("stack underflow");
        item_type to_return = tail->item;
        auto* b = tail->next;
        delete tail;
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
        while(amt_items!=0)
            pop();
    }
};