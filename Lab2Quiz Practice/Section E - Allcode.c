int identical(BTNode *tree1, BTNode *tree2){
   if( tree1 == NULL && tree2 == NULL){return 1;}
   else if(tree1 != NULL && tree2 != NULL){
        return (tree1->item == tree2->item && 
				identical(tree1->left,tree2->left) && 
				identical(tree1->right, tree2->right) );
   }
   else{return 0;}
}

int maxHeight(BTNode *node){
   int lheight, rheight;
   if(node == NULL){return -1;}
    else{
        lheight = maxHeight(node->left);
        rheight = maxHeight(node->right);
        if(lheight > rheight){ return lheight+1;}
        else{
            return rheight+1;
        }
    }
}

int countOneChildNodes(BTNode *node){
   int count;
   count = 0;
   if(node == NULL){return count;}
   if((node->left == NULL && node->right != NULL)||(node->left != NULL && node->right == NULL)){
        count = 1;
   }
   return (count + countOneChildNodes(node->left) + countOneChildNodes(node->right));
}

int sumOfOddNodes(BTNode *node){
    int sum;
    if(node == NULL){return 0;}
    sum = 0;  
    if(abs(node->item) %2 == 1)
        sum = node->item;
    return (sum + sumOfOddNodes(node->left)+ sumOfOddNodes(node->right));
}

void mirrorTree(BTNode *node)
{
	BTNode *temp;
	if (node == NULL){return;}
	mirrorTree(node->left);
	temp = node->left;
	node->left = node->right;
	node->right = temp;
	mirrorTree(node->left);

}
void printSmallerValues(BTNode *node, int m){
	if (node==NULL) {return;}
	if (node->item<m){
		  printf("%d ", node->item);
	}  
	printSmallerValues(node->left, m);
	printSmallerValues(node->right, m);
	return;
}

int smallestValue(BTNode *node)
{
	int l,r;
	if (node==NULL){return 100000;}	
	l=smallestValue(node->left);
	r=smallestValue(node->right);
	if (l<node->item && l<r)
		return l;
	else if (r<node->item && r<l)
		return r;
	else {return node->item;}
}


int hasGreatGrandchild(BTNode *node)
{
	int l, r;//left and right;
	if (node == NULL){return -1;}
	l = hasGreatGrandchild(node->left);
	r = hasGreatGrandchild(node->right);
	if (r > l)
		l = r;
	if (l > 1)//left>1
		printf("%d ", node->item);
	return (l + 1);

}