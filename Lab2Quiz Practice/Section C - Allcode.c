
void createQueueFromLinkedList(LinkedList *ll, Queue *q)
{
	ListNode *cur;
	if (ll == NULL || q == NULL){return;}
	if (isEmptyQueue(q) == 0){removeAllItemsFromQueue(q);}
	cur = ll->head;
	while (cur != NULL)
	{	enqueue(q, cur->item);
		cur = cur->next;
	}
}

void createStackFromLinkedList(LinkedList *ll, Stack *s)
{
	ListNode *cur;
	if (ll == NULL || s == NULL){return;}
	if (isEmptyStack(s) == 0){removeAllItemsFromStack(s);}
	cur = ll->head;
	while (cur != NULL)
	{	push(s, cur->item);
		cur = cur->next;
	}
}

int isStackPairwiseConsecutive(Stack *s)
{
    Stack ts;
    int x, y, result;
    ts.ll.head = NULL;
	ts.ll.tail = NULL;
    ts.ll.size = 0;
    result = 1;

    if(s->ll.size <2){return 0;}
    while(!isEmptyStack(s)){
        push(&ts, pop(s));
    }

    while(!isEmptyStack(&ts)){
        x = pop(&ts);
        y = pop(&ts);
        if(abs(x-y) != 1){result = 0;//not consecutive}
        push(s, x);
        push(s, y);
    }
    if(ts.ll.size == 1){push(s, pop(&ts));}
    return result;
}

void reverse(Queue *q){//using stack
  Stack s;
  s.ll.head = NULL;
  s.ll.tail = NULL;
  s.ll.size = 0;

  while(!isEmptyQueue(q)){push(&s,dequeue(q));}
  while(!isEmptyStack(&s)){enqueue(q,pop(&s));}
}
void recursiveReverse(Queue *q){
	int i;

	if (isEmptyQueue(q)){return;}
	 i = dequeue(q);
	 recursiveReverse(q);
	 enqueue(q, i);

}
void removeUntil(Stack *s, int value){
	while (!isEmptyStack(s)){
		if (peek(s) != value){pop(s);}
		else
			break;
	}
}

int balanced(char *expression){

	Stack s;
	s.ll.head = NULL;
	s.ll.size = 0;

	printf("%s\n", expression);

	while (*expression){
		if (*expression == '(' || *expression == '[' || *expression == '{'){push(&s, *expression);}
		
		else if (*expression == ')'){if (isEmptyStack(&s) || pop(&s) != '(')return -1;}
		else if (*expression == ']'){if (isEmptyStack(&s) || pop(&s) != '[')return -1;}
		else if (*expression == '}'){if (isEmptyStack(&s) || pop(&s) != '{')return -1;}
		expression++;
	 }
	if (isEmptyStack(&s)){ return 0;}
	else{return -1;}
	
}