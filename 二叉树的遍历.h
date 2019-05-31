void PreOrder(BiTreeNode *root,void visit(DataType item))
//ǰ�����������root�����ʲ���ΪVisit()����
{
  if(root!=NULL)
   {
     visit(root->data);
     PreOrder(root->leftChild,visit);
     PreOrder(root->rightChild,visit);
   }
}


void InOrder(BiTreeNode *root,void visit(DataType item))
//�������������root�����ʲ���ΪVisit()����
{
  if(root!=NULL)
   {
     InOrder(root->leftChild,visit);
     visit(root->data);
     
     InOrder(root->rightChild,visit);
   }
}

void PostOrder(BiTreeNode *root,void visit(DataType item))
//�������������root�����ʲ���ΪVisit()����
{
  if(root!=NULL)
   {
    
     PostOrder(root->leftChild,visit);
     PostOrder(root->rightChild,visit);
      visit(root->data);
   }
}