//#include <iostream>
//
//using namespace std;
//
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//int maxDepth(TreeNode *root);
//int Max_two(int a,int b);       
//int main()
//{
//	return 0;
//}
//
//int maxDepth(TreeNode *root)
//{
//	if(root==NULL)
//		return 0;
//	return 1+Max_two(maxDepth(root->left),maxDepth(root->right));
//}
//int Max_two(int a,int b)
//{
//	return a>b?a:b;
//}