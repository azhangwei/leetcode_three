//#include <iostream>
//#include <vector>
//#include <queue>
//#include <stack>
//using namespace std;
//
//
//struct TreeNode {
//      int val;
//      TreeNode *left;
//      TreeNode *right;
//      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//  };
//
//vector<vector<int> > zigzagLevelOrder(TreeNode *root);
//vector<vector<int> > levelOrder(TreeNode *root);
//
//int main()
//{
//
//	return 0;
//}
//
//vector<vector<int> > zigzagLevelOrder(TreeNode *root)
//{
//	vector<vector<int> >result;
//	vector<int>tmp;
//	if(root==NULL)
//		return result;
//	queue<TreeNode *>vol_one;
//	queue<TreeNode *>vol_two;
//	vol_one.push(root);
//	TreeNode *part;
//	while(vol_one.size())
//	{
//		while(vol_one.size())
//		{
//			part=vol_one.front();
//			vol_one.pop();
//			tmp.push_back(part->val);
//			if(part->left!=NULL)
//				vol_two.push(part->left);
//			if(part->right!=NULL)
//				vol_two.push(part->right);
//		}
//		if(tmp.size())
//		{
//			result.push_back(tmp);
//			tmp.clear();
//		}
//		while(vol_two.size())
//		{
//			part=vol_two.front();
//			vol_two.pop();
//			tmp.push_back(part->val);
//			if(part->left!=NULL)
//				vol_one.push(part->left);
//			if(part->right!=NULL)
//				vol_one.push(part->right);
//		}
//		if(tmp.size())
//		{
//			vector<int>bad;
//			for(int i=tmp.size()-1;i>=0;i--)
//				bad.push_back(tmp[i]);
//			result.push_back(bad);
//			tmp.clear();
//		}
//	}
//	return result;
//}
//
//vector<vector<int> > levelOrder(TreeNode *root)
//{
//	vector<vector<int> >result;
//	vector<int>tmp;
//	if(root==NULL)
//		return result;
//	queue<TreeNode *>vol_one;
//	queue<TreeNode *>vol_two;
//	vol_one.push(root);
//	TreeNode *part;
//	while(vol_one.size())
//	{
//		while(vol_one.size())
//		{
//			part=vol_one.front();
//			vol_one.pop();
//			tmp.push_back(part->val);
//			if(part->left!=NULL)
//				vol_two.push(part->left);
//			if(part->right!=NULL)
//				vol_two.push(part->right);
//		}
//		vol_one=vol_two;
//		while(vol_two.size())
//			vol_two.pop();
//		if(tmp.size())
//		{
//			result.push_back(tmp);
//			tmp.clear();
//		}
//	}
//	return result;
//}