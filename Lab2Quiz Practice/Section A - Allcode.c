int insertSortedLL(LinkedList *ll, int item)
{
	int index;
	ListNode *cur,*newNode;

	if (ll == NULL){index = -1;}
	cur = ll->head;	
	if (cur == NULL){
		insertNode(ll, 0, item);
		index = 0;
	}
	else if (cur->item > item){
		insertNode(ll, 0, item);
		index = 0;
	}
	else if (cur->item == item){return -1;}
	else
	{	index = 1;
		while (cur->next != NULL && cur->next->item < item){
			cur = cur->next;
			index++;
		}
		if (cur->next != NULL && cur->next->item == item) {return -1;}
		newNode = malloc(sizeof(ListNode));
		newNode->item = item;
		newNode->next = cur->next;
		cur->next = newNode;
		ll->size++;
	}
	return index;
}

void alternateMergeLinkedList(LinkedList *ll1, LinkedList *ll2)
{
	ListNode *Node1 , *Node2,*Next1, *Next2;
	int size1,size2;
	if(ll1!=NULL){Node1 = ll1->head;}
    if(ll2!=NULL){Node2 = ll2->head;}
    size1= ll1->size;size2= ll2->size;

    while(Node1 != NULL && Node2 != NULL){
        //Save next pointers
        Next1 = Node1->next; Next2 = Node2->next;
        //Next pointer
        Node1->next = Node2;
        Node2->next = Next1;
        Node1 = Next1;  Node2 = Next2;
    }
    if(size1 < size2){ll2->head = Node2;}
    else if(size1 >= size2){
        while(Node1 !=NULL){Node1 = Node1->next;}
        ll2->head = NULL;
        ll2->size = 0;
    }
}
//moveoddevenitemstoback or moveodditemstoback
void moveEvenItemsToBack(LinkedList *ll)
{
    ListNode *cur;
    int d,s,i,j;
    j=0;
    cur=ll->head;
    s=ll->size;
    if(s<2){return;}
    for(i=0;i<s;i++){
        if(cur->item%2==0){//change ==0 to ==1 for odd
            d=cur->item;
            cur=cur->next;
            removeNode(ll,j);
            insertNode(ll,ll->size,d);
        }
        else{
            cur=cur->next;
            j++;
        }
    }
}
void frontBackSplitLinkedList(LinkedList *ll, LinkedList *resultFrontList, LinkedList *resultBackList)
{
	ListNode *front;
	int size,half,i;
	size=ll->size;
	if(size%2==1){size++;}
	half=size/2;
	
	resultFrontList=ll->head;
	front=resultFrontList->head;
	for(i=0;i<half-1;i++){
        front=front->next;
	}
	resultBackList=front->next;
	front->next=NULL;
}

int moveMaxToFront(ListNode **ptrHead)
{

    ListNode *pre, *cur, *premax=NULL;
    int maxitem;
    if(*ptrHead==NULL){return -1;}// Empty list
    if((*ptrHead)->next ==NULL){return 0;}// Only one node in the list
    cur=(*ptrHead);
    maxitem=(*ptrHead)->item;
    // preMax gets set to the address of the ListNode with the max value
	// If preMax is still NULL at the end, first node had the max value
    while(cur!=NULL){
        if(cur->item>maxitem){
            maxitem=cur->item;
            premax=pre;
        }
        pre=cur;
        cur=cur->next;
    }
    if(premax==NULL){return 0;}
    // Move node with max value to first position
    cur=premax->next;
    premax->next=premax->next->next;
    //update header;
    cur->next=*ptrHead
    *ptrHead=cur;
    return 0;
	
}
void RecursiveReverse(ListNode **ptrHead) {
    *ListNode *first, *rest;
    if(*ptrHead==NULL){return;}
    first=*ptrHead;
    rest=first->next;
    if(rest==NULL){return;}
    
    RecursiveReverse(&rest);
    first->next->next=first;
    first->next=NULL;
    *ptrHead=rest;
}



	