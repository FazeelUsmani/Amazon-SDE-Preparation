//Special stack code in C++.


class stackNode
{
	public:
		int data;
		stackNode* next;
		stackNode(int val)
		{
			data=val;
			next=NULL;
		}
};

class stack
{
	stackNode* head;
	int stackSize;   //To count the size of stack
	public:
		stack()
		{
			stackSize=0;
			head=NULL;
		}

	void push(int val)
	{
		if(head==NULL)
		head=new stackNode(val);
		else
		{
		stackNode* newNode=new stackNode(val);
		newNode->next=head;
		head=newNode;
		}
		stackSize++;
	}

	int pop()
	{

		if(isEmpty())
		return -1;       //returning -1 if stack is empty
		stackSize--;
		int val=head->data;
		head=head->next;
		return val;

	}

	bool isEmpty()
	{
		if(head==NULL)
		return true;
		return false;
	}
	bool isFull(int val)
	{
		if(stackSize>=val)
		return true;
		return false;
	}

	int getMin()
	{
		stackNode* trav=head;
		int minVal=INT_MAX;
		while(trav!=NULL)
		{
			minVal=min(trav->data,minVal);
			trav=trav->next;
		}
		return minVal;
	}

};

