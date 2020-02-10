#pragma once

#define RED		0
#define BLACK	1

typedef int Type;

// 红黑树的节点
typedef struct RBTreeNode {
	unsigned char color;
	Type key;
	struct RBTreeNode* left;
	struct RBTreeNode* right;
	struct RBTreeNode* parent;
}Node, *RBTree;

// 红黑树的根
typedef struct rb_root {
	Node* node;
}RBRoot;

// 创建红黑树额，返回红黑树的根
RBRoot* create_rbtree();

// 销毁红黑树
void destroy_rbtree(RBRoot* root);

// 将节点插入到红黑树中
// 成功: 返回 0;
// 失败: 返回 -1;
int insert_rbtree(RBRoot* root, Type key);

// 删除节点(key为节点的值)
void delete_rbtree(RBRoot* root, Type key);

// 前序遍历 红黑树
void preorder_rbtree(RBRoot* root);
// 中序遍历 红黑树
void inorder_rbtree(RBRoot* root);
// 后序遍历 红黑树
void postorder_rbtree(RBRoot* root);

// (递归实现) 查找"红黑树"中键值为key的节点。
// 成功: 返回 0;
// 失败: 返回 -1;
int rbtree_search(RBRoot* root, Type key);

// (非递归实现) 查找"红黑树"中键值为key的节点。
// 成功: 返回 0;
// 失败: 返回 -1;
int iterative_rbtree_search(RBRoot* root, Type key);

// 返回最小结点的值(将值保存到val中)
// 成功: 返回 0;
// 失败: 返回 -1;
int rbtree_minimum(RBRoot* root, int* val);

// 返回最大结点的值(将值保存到val中)
// 成功: 返回 0;
// 失败: 返回 -1;
int rbtree_maximum(RBRoot* root, int* val);

// 打印红黑树
void print_rbtree(RBRoot* root);
