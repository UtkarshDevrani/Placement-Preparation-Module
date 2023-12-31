void findit(BinaryTreeNode<int>* node, int &ceil, int key){
    if(node->left) findit(node->left, ceil, key);

    if(node->data >= key) {
        if(node->data < ceil){
            ceil = node->data;
        }
    }

    if(node->right) findit(node->right, ceil, key);
}

int findCeil(BinaryTreeNode<int> *node, int x){
    int ceil = INT_MAX;

    findit(node, ceil, x);

    return (ceil < INT_MAX) ? ceil : -1;
}