//#include <iostream>
//#include <vector>
//#include <list>
//using namespace std;
//
//  struct TreeNode {
//      int val;
//      TreeNode *left;
//      TreeNode *right;
//      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//  };
//
//bool isSameTree(TreeNode *p, TreeNode *q);
//
//int main()
//{
//	TreeNode *root=new TreeNode(10);
//	TreeNode *ri=new TreeNode(2);
//	root->right=ri;
//	bool re=isSameTree(root,root);
//	return 0;
//}
//
//bool isSameTree(TreeNode *p, TreeNode *q)
//{
//	if(p==NULL&&q==NULL)
//		return true;
//	if(p==NULL||q==NULL)
//		return false;
//	list<TreeNode*>P_v;
//	list<TreeNode*>Q_v;
//	if(p->val==q->val)
//	{
//    	P_v.push_back(p);
//	    Q_v.push_back(q);
//	}
//	else
//		return false;
//	TreeNode *p_tmp;
//	TreeNode *q_tmp;
//	while(P_v.size())
//	{
//		int len=P_v.size();
//		for(int i=0;i<len;i++)
//		{
//			p_tmp=P_v.front();
//			P_v.pop_front();
//			q_tmp=Q_v.front();
//			Q_v.pop_front();
//			if(p_tmp->left!=NULL&&q_tmp->left!=NULL)
//			{
//				if(p_tmp->left->val!=q_tmp->left->val)
//					return false;
//				P_v.push_back(p_tmp->left);
//				Q_v.push_back(q_tmp->left);
//			}
//			else if(p_tmp->left==NULL&&q_tmp->left==NULL)
//			{
//
//			}
//			else
//				return false;
//			if(p_tmp->right!=NULL&&q_tmp->right!=NULL)
//			{
//				if(p_tmp->right->val!=q_tmp->right->val)
//					return false;
//				P_v.push_back(p_tmp->right);
//				Q_v.push_back(q_tmp->right);
//			}
//			else if(p_tmp->right==NULL&&q_tmp->right==NULL)
//			{
//
//			}
//			else
//				return false;
//		}
//	}
//		return true;
//}
//
