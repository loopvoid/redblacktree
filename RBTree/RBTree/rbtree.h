#pragma once

#define RED		0
#define BLACK	1

typedef int Type;

// ������Ľڵ�
typedef struct RBTreeNode {
	unsigned char color;
	Type key;
	struct RBTreeNode* left;
	struct RBTreeNode* right;
	struct RBTreeNode* parent;
}Node, *RBTree;

// ������ĸ�
typedef struct rb_root {
	Node* node;
}RBRoot;

// �������������غ�����ĸ�
RBRoot* create_rbtree();

// ���ٺ����
void destroy_rbtree(RBRoot* root);

// ���ڵ���뵽�������
// �ɹ�: ���� 0;
// ʧ��: ���� -1;
int insert_rbtree(RBRoot* root, Type key);

// ɾ���ڵ�(keyΪ�ڵ��ֵ)
void delete_rbtree(RBRoot* root, Type key);

// ǰ����� �����
void preorder_rbtree(RBRoot* root);
// ������� �����
void inorder_rbtree(RBRoot* root);
// ������� �����
void postorder_rbtree(RBRoot* root);

// (�ݹ�ʵ��) ����"�����"�м�ֵΪkey�Ľڵ㡣
// �ɹ�: ���� 0;
// ʧ��: ���� -1;
int rbtree_search(RBRoot* root, Type key);

// (�ǵݹ�ʵ��) ����"�����"�м�ֵΪkey�Ľڵ㡣
// �ɹ�: ���� 0;
// ʧ��: ���� -1;
int iterative_rbtree_search(RBRoot* root, Type key);

// ������С����ֵ(��ֵ���浽val��)
// �ɹ�: ���� 0;
// ʧ��: ���� -1;
int rbtree_minimum(RBRoot* root, int* val);

// ����������ֵ(��ֵ���浽val��)
// �ɹ�: ���� 0;
// ʧ��: ���� -1;
int rbtree_maximum(RBRoot* root, int* val);

// ��ӡ�����
void print_rbtree(RBRoot* root);