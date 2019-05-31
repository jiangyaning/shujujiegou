void PreOrder(BiTreeNode *root,void visit(DataType item))
//前序遍历二叉树root，访问操作为Visit()函数
{
  if(root!=NULL)
   {
     visit(root->data);
     PreOrder(root->leftChild,visit);
     PreOrder(root->rightChild,visit);
   }
}


void InOrder(BiTreeNode *root,void visit(DataType item))
//中序遍历二叉树root，访问操作为Visit()函数
{
  if(root!=NULL)
   {
     InOrder(root->leftChild,visit);
     visit(root->data);
     
     InOrder(root->rightChild,visit);
   }
}

void PostOrder(BiTreeNode *root,void visit(DataType item))
//后序遍历二叉树root，访问操作为Visit()函数
{
  if(root!=NULL)
   {
    
     PostOrder(root->leftChild,visit);
     PostOrder(root->rightChild,visit);
      visit(root->data);
   }
}