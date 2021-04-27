#include <iostream>
#include <locale>
#include <vector>
using namespace std;
template<typename T>

class Stack
{
private:
    vector<T> v;
public:
    void push(T);
    T pop();
    void output();
};

template<class T> void Stack<T>::push(T elem)
{
    v.push_back(elem);
}

template<class T> T Stack<T>::pop()
{
    T elem = v.back();
    v.pop_back();
    return elem;
}
template<class T> void Stack<T>::output()
{
    cout << "Стэк: ";
    for (auto e : v) cout << e << " ";
    cout << endl;
}

int main() 
{
    setlocale(LC_ALL, "Russian");


    Stack<int> a;
    a.push(1);  
    a.push(2);  
    a.push(3);
    a.push(4);
    a.push(5);
    a.output();
    cout << "Удаляем элемент: " << a.pop() << endl;
    a.output();

    return 0;
}