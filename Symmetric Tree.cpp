//#include <iostream>
//using namespace std;
//
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//bool isSymmetric(TreeNode *root);
//bool isSy(TreeNode *L,TreeNode *R);
//int main()
//{
//
//}
//bool isSymmetric(TreeNode *root)
//{
//	if(root==NULL)
//		return true;
//	return isSy(root->left,root->right);
//}
//
//bool isSy(TreeNode *L,TreeNode *R)
//{
//	if(L==NULL&&R==NULL)
//		return true;
//	if(L==NULL||R==NULL)
//		return false;
//
//	if(L->val!=R->val)
//		return false;
//	else
//		return isSy(L->right,R->left)&&isSy(R->right,L->left);
//}