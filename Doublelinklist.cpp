#include <iostream>
#include <string>
using namespace std;

class Node 
{
public: 
    int noMhs;
    Node *next;
    Node *prev;
};

class Doublelinklist
{
private:
    Node *START;

public:
    Doublelinklist()
    {
        START = NULL;
    }
}