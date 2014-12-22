//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//vector<vector<int> > levelOrderBottom(TreeNode *root);
//int main()
//{
//
//	return 0;
//}
//vector<vector<int> > levelOrderBottom(TreeNode *root)
//{
//	vector<vector<int> > result;
//	vector<TreeNode *>one;
//	vector<TreeNode *>two;
//	vector<int>tmp;
//	if(root==NULL)
//		return result;
//	one.push_back(root);
//	while(one.size())
//	{
//		for(int i=0;i<one.size();i++)
//		{
//			tmp.push_back(one[i]->val);
//			if(one[i]->left!=NULL)
//				two.push_back(one[i]->left);
//			if(one[i]->right!=NULL)
//				two.push_back(one[i]->right);
//		}
//		one=two;
//		result.push_back(tmp);
//		tmp.clear();
//		two.clear();
//	}
//	reverse(result.begin(),result.end());
//	return result;
//}