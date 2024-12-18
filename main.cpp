#include <bits/stdc++.h>
using namespace std;
void printPattern(int counter)
{
    for (int i = 1; i <= counter; i++)
    {
        cout << "Print Counter : " << i << endl;
    }
}

void doSomething(int &num)
{
    num += 1;
}

void pairExplain()
{
    pair<int, int> node = {1, 199};
    cout << node.first << endl;
    cout << node.second << endl;
}

void vectorExplain()
{
    // container containg five element with value of 100
    vector<int> rollNumber(5, 100);
    // Looping vector using index
    for (int i = 0; i < 5; i++)
    {
        cout << "Counter : " << rollNumber[i] << endl;
    }

    // Vector function
    rollNumber.push_back(19);
    rollNumber.emplace_back(100); // better name push back

    // Looping vector using iterator
    for (vector<int>::iterator i = rollNumber.begin(); i != rollNumber.end(); i++)
    {
        cout << *(i) << endl;
    }

    // Copy the instance of vector
    vector<int> dublicateROllNumber(rollNumber);
    rollNumber.push_back(1212);

    cout << "Dublicate Roll number" << endl;

    // Looping dublicate vector using iterator
    for (vector<int>::iterator i = dublicateROllNumber.begin(); i != dublicateROllNumber.end(); i++)
    {
        cout << *(i) << endl;
    }

    cout << "Delete in vector" << endl;

    // Looping dublicate vector using auto iterator
    for (auto i = dublicateROllNumber.begin(); i != dublicateROllNumber.end(); i++)
    {
        cout << *(i) << endl;
    }

    cout << "Looping dublicate vector using auto iterator" << endl;
    // dublicateROllNumber.erase();
    // Looping dublicate vector using auto iterator
    for (auto i = dublicateROllNumber.begin(); i != dublicateROllNumber.end(); i++)
    {
        cout << *(i) << endl;
    }

    dublicateROllNumber.erase(dublicateROllNumber.begin() + 1);
    dublicateROllNumber.pop_back();
    dublicateROllNumber.insert(dublicateROllNumber.begin(), 100);
    dublicateROllNumber.size();
    dublicateROllNumber.clear();
    dublicateROllNumber.empty(); // check is it true
}

void listExplain()
{
    list<int> myList;
    myList.push_back(2);
    myList.push_front(1);
}

void dqueueExplain()
{
    deque<int> dQueue;
    dQueue.push_back(2);
    dQueue.push_front(1);
}
void queueExplain()
{
    queue<int> QueueS;
    QueueS.push(2);
    QueueS.push(2);
    QueueS.push(2);
    cout << QueueS.back();
    cout << QueueS.front();
    QueueS.pop();
}
void stackExpain()
{
    stack<int> myStack;
    myStack.push(2);
    myStack.top();
    myStack.pop();
    myStack.push(1);
}

void voidReturnFunction()
{
    cout << "void return function" << endl;
}

int interReturnFunction(int inputNumer)
{
    return inputNumer++;
}

void passByReferance(int inputNumerArray[])
{
    inputNumerArray[0]++;
}

void pairInCplusplus()
{
}

int main()
{
    vectorExplain();
    return 0;
}