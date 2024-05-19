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

        cout << "������� intStack: " << intStack.top() << endl;

        intStack.pop();
        intStack.pop();
        intStack.pop();
        intStack.pop();  // �������� ��������������� ��������, ����� ������� ����������

    }
    catch (const exception& e) 
    {
        std::cerr << "������� ����������: " << e.what() << std::endl;
    }

    try 
    {
        Stack<double> doubleStack;
        doubleStack.push(3.14);

        cout << "������� doubleStack: " << doubleStack.top() << endl;
        doubleStack.pop();

    }
    catch (const exception& e) 
    {
        cerr << "������� ����������: " << e.what() << endl;
    }

    try {
        Stack<string> stringStack;
        stringStack.push("hello");
        stringStack.push("world");
        stringStack.push("!");

        while (!stringStack.empty()) {
            cout << "������� stringStack: " << stringStack.top() << endl;
            stringStack.pop();
        }
        stringStack.pop();  // �������� ��������������� ��������, ����� ������� ����������
    }
    catch (const exception& e) 
    {
        cerr << "������� ����������: " << e.what() << endl;
    }

    return 0;
}