#ifndef STACK_HPP_
#define STACK_HPP_

#include "../list/list.hpp"

/**
 * @brief Abstract Data Type Stack Implementation using a singly linked list.
 * 
 * This stack is implemented with a doubly linked list. It doesn't have a max
 * cap at the moment.
 */

template <typename T>
class Stack
{
public:
    int GetSize() { return list.GetSize(); }

    void Push(T elem) { list.AddLast(elem);}

    T Pop(void) {
        if (list.IsEmpty())
            throw std::runtime_error("Stack is empty");
        return (list.RemoveLast());
    }

    bool IsEmpty() { return (list.IsEmpty()); }

    T Peek() {
        if (list.IsEmpty())
            throw std::runtime_error("Stack is empty");
        return (list.PeekLast());
    }

private:
    List<T> list;
};

#endif /* STACK_HPP_ */