#include <iostream>
#include <list>
#include <stdexcept>
#include "Stack.h"

int main() 
{
    setlocale(LC_ALL, "ru");
    try 
    {
        Stack<int> intStack;
        intStack.push(1);
        intStack.push(2);
        intStack.push(3);

        cout << "Вершина intStack: " << intStack.top() << endl;

        intStack.pop();
        intStack.pop();
        intStack.pop();
        intStack.pop();  // удаление несуществующего элемента, чтобы вызвать исключение

    }
    catch (const exception& e) 
    {
        cerr << "Íàéäåíî èñêëþ÷åíèå: " << e.what() << endl;
    }

    try 
    {
        Stack<double> doubleStack;
        doubleStack.push(3.14);

        cout << "Найдено исключение: " << doubleStack.top() << endl;
        doubleStack.pop();

    }
    catch (const exception& e) 
    {
        cerr << "Найдено исключение: " << e.what() << endl;
    }

    try {
        Stack<string> stringStack;
        stringStack.push("hello");
        stringStack.push("world");
        stringStack.push("!");

        while (!stringStack.empty()) {
            cout << "Вершина doubleStack: " << stringStack.top() << endl;
            stringStack.pop();
        }
        stringStack.pop();  // удаление несуществующего элемента, чтобы вызвать исключение
    }
    catch (const exception& e) 
    {
        cerr << "Найдено исключение: " << e.what() << endl;
    }

    return 0;
}
