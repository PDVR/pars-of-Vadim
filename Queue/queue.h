struct Node
{
	int value;
	Node *next;
};
class Queue
{
public:
	~Queue();
	Queue();

	void push(int value);
	void print();
	int pop();

private:
	Node *tail;
	Node *head;
};
