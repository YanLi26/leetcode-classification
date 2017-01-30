#Binary Tree

参考： http://www.chengxuyuans.com/code/C++/65465.html

##遍历

###前序遍历

根 -> 左子树 -> 右子树

```C++
void Preorder(TreeNode *root)	
{
	if(root != NULL)
	{
		cout << root->value;
		Preorder(root->left);
		Preorder(root->right);
	}
}
```

###中序遍历

左子树 -> 根 -> 右子树

```C++
void Inorder(TreeNode *root)
{
	if(root != NULL)
	{
		Inorder(root->left);
		cout << root->value;	
		Inorder(root->right);
	}
}
```

###后序遍历

左子树 -> 右子树 -> 根

```C++
void Postorder(TreeNode *root）
{
	if(root != NULL)
	{
		Postorder(node->left);
		Postorder(node->right);
		cout << root->value;
	}
}
```

###层次遍历

```C++
void Layerorder(TreeNode* root) {
	queue<TreeNode*> q;
	q.push(root);
	while (!q.empty()) {
		int n = q.size();
		for (int i = 0; i < n; ++i) {
			TreeNode *t = q.front();
			q.pop();
			if (t->left) q.push(t->left);
			if (t->right) q.push(t->right);
		}
	}
}
```

##DFS & BFS

http://blog.csdn.net/chlele0105/article/details/38759593

###DFS(Depth First Search)

###BFS(Breadth First Search)

