#ifndef Stack_H
#define Stack_H
#include <iostream>
using namespace std;

template <class T>
class Stack {
private:
    list<T> data;
public:
    void push(const T& value) 
    {
        data.push_back(value);
    }

    void pop() {
        if (data.empty()) 
        {
            throw out_of_range("stack пуст: удаление невозможно.");
        }
        data.pop_back();
    }

    T& top() 
    {
        if (data.empty()) 
        {
            throw out_of_range("stack пуст: удаление невозможно.");
        }
        return data.back();
    }

    int size() 
    {
        return data.size();
    }

    bool empty() 
    {
        return data.empty();
    }
};
#endif
