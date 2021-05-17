void levelOrderTraversal(BSTNode* root)
{
    Queue q;
	q.head = NULL; // points to queue head
	q.tail = NULL; // points to queue tail

	BSTNode *temp;
	temp = root;
	// if tree is not empty
	if (temp != NULL) {
		enqueue(&q.head, &q.tail, temp);

		while (!isEmpty(q.head)) {
			temp = dequeue(&q.head, &q.tail);
			printf("%d ", temp->item);

			// insert left child node in the queue
			if (temp->left != NULL) {
				enqueue(&q.head, &q.tail, temp->left);
			}

			// insert right child node in the queue
			if (temp->right != NULL) {
				enqueue(&q.head, &q.tail, temp->right);
			}
		}
	}
}
void inOrderTraversal(BSTNode *root)
{
	Stack s;
	s.top = NULL;
	BSTNode *temp;
	temp = root;

	if (temp == NULL){return;}
	while (1)
	{
		if (temp != NULL)
		{
			push(&s, temp);
			temp = temp->left;
		}
		else
		{
			if (!isEmpty(&s))
			{
				temp = pop(&s);
				printf("%d ", temp->item);
				temp = temp->right;
			}
			else
				break;
		}
	}

}



void postOrderIterativeS1(BSTNode *root)
{
	Stack s;
	s.top = NULL;
    BSTNode *temp;
	temp = root;

	if (temp == NULL){return;}	
	do
	{
		while (temp)
		{
			if (temp->right)
				push(&s, temp->right);
			push(&s, temp);
			temp = temp->left;
		}
		temp = pop(&s);
		if (temp->right && peek(&s) == temp->right)
		{
			pop(&s);
			push(&s, temp);
			temp = temp->right;

		}
		else
		{
			printf("%d ", temp->item);
			temp = NULL;
		}
	} while (!isEmpty(&s));
}
void preOrderIterative(BSTNode *root)
{
	Stack s;
	BSTNode *temp;

	s.top = NULL;
	temp = root;

	if (temp == NULL){return;}
		
    push(&s, temp);

	while (!isEmpty(&s){
	    temp = pop(&s);
	    printf("%d ",temp->item);

	    if(temp->right != NULL)
            push(&s,temp->right);
        if(temp->left != NULL)
            push(&s,temp->left);

	} 
}

void postOrderIterativeS2(BSTNode *root)
{
	Stack s1,s2;
	s1.top = NULL;
	s2.top = NULL;
	BSTNode *temp;
	temp = root;
	if (temp == NULL){return;}
		

	push(&s1, temp);

	while (!isEmpty(&s1))
	{
		temp = pop(&s1);
		push(&s2, temp);

		if (temp->left != NULL)
			push(&s1, temp->left);
		if (temp->right != NULL)
			push(&s1, temp->right);
	}
	while (!isEmpty(&s2))
	{
		temp = pop(&s2);
		printf("%d ", temp->item);
	}

}