//1.结点结构体定义
typedef struct Node
{
 DataType data;                //数据域
struct Node *leftChild;        //左子树指针
struct Node *rightChild;       //右子树指针
}BiTreeNode;                   //结点的结构体定义

//初始化
void Initiate(BiTreeNode **root)
//初始化建立二插树的头结点
{
  *root=(BiTreeNode *)malloc(sizeof(BiTreeNode));
   (*root)->leftChild=NULL;
    (*rott)->rightChild=NULL;
}


/*左插入结点
  若当前结点curr非空，则在curr的左子树插入元素值为x的新结点
  原curr所指结点的左子树成为新插入结点的左子树
  若插入成功，则返回新插入结点的指针，否则返回空指针
*/
BiTreeNode *InserLeftNode(BiTreeNode *curr,DataType x)
{
  BiTreeNode *s,*t;
   if(curr == NULL)
     return NULL;
   t=curr->leftChild;      //保存原curr所指结点的左子树指针
   s=(BiTreeNode *)malloc(sizeof(BiTreeNode));
     s->data=x;
     s->leftChild=t;       //新插入结点的左子树为原curr的左子树
     s->rightChild=NULL;   //新插入结点的右子树为空
     curr->leftChild=s;    //新结点成为curr的左子树 
     return curr->leftChild;//可换为s，即返回新插入结点的指针
}
/*
右插入结点
若当前结点curr非空，则在curr的右子树插入元素值为x的新结点
  原curr所指结点的右子树成为新插入结点的右子树
  若插入成功，则返回新插入结点的指针，否则返回空指针
*/
BiTreeNode *InserRightNode(BiTreeNode *curr,DataType x)
{
  BiTreeNode *s,*t;
   if(curr == NULL)
     return NULL;
   t=curr->leftChild;      //保存原curr所指结点的左子树指针
   s=(BiTreeNode *)malloc(sizeof(BiTreeNode));
     s->data=x;
     s->rightChild=t;       //新插入结点的右子树为原curr的右子树
     s->leftChild=NULL;   //新插入结点的左子树为空
     curr->rightChild=s;    //新结点成为curr的右子树 
     return curr->rightChild;//可换为s，即返回新插入结点的指针
}
/*
左删除子树
若curr非空，则删除curr所指结点的左子树
若删除成功，则返回删除结点的双亲结点，否则返回空指针
*/
Bireeode *DeleteLeftTree(BiTreeNode *curr)
{
 if(curr==NULL||curr->leftChild==NULL)
    return NULL;
 Destroy(&curr->leftChild);       //Destroy()用于撤销
 curr->leftChild=NULL;
 return curr;
}
/*
右删除子树
若curr非空，则删除curr所指结点的右子树
若删除成功，则返回删除结点的双亲结点，否则返回空指针
*/
Bireeode *DeleteRightTree(BiTreeNode *curr)
{
 if(curr==NULL||curr->rightChild==NULL)
    return NULL;
 Destroy(&curr->rightChild);       //Destroy()用于撤销
 curr->rightChild=NULL;
 return curr;
}


