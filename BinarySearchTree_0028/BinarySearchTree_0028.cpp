#include <iostream>
#include <string>
using namespace std;

class Node
{
	string info;
	Node* leftchild;
	Node* rightchild;

	// Constructor fir the node class
	Node(string i, Node* l, Node* r)
	{
		info = i;
		leftchild = l;
		rightchild = r;
	}
};
