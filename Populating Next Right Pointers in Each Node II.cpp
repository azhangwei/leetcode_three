//#include<iostream>
//
//using namespace std;
//  
//struct TreeLinkNode {
//   int val;
//   TreeLinkNode *left, *right, *next;
//   TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
//  };
//
//void connect(TreeLinkNode *root);
//
//int main()
//{
//	TreeLinkNode *ro=new TreeLinkNode(10);
//	TreeLinkNode *r=new TreeLinkNode(12);
//	ro->right=r;
//	connect(ro);
//	return 0;
//}
//
//void connect(TreeLinkNode *root)
//{
//	if(root==NULL)
//		return;
//	TreeLinkNode *pt=root;
//	TreeLinkNode *Ri=NULL;
//	TreeLinkNode *next=NULL;
//	while(pt)
//	{
//		Ri=NULL;
//		for(;pt;pt=pt->next)
//		{
//			if(pt->left!=NULL)
//			{
//				if(next==NULL)
//				{
//					next=pt->left;
//					Ri=next;
//				}
//				else
//				{
//				  Ri->next=pt->left;
//				  Ri=Ri->next;
//				}
//			}
//			if(pt->right!=NULL)
//			{
//				if(next==NULL)
//				{
//					next=pt->right;
//					Ri=next;
//				}
//				else
//				{
//					Ri->next=pt->right;
//					Ri=Ri->next;
//				}
//			}
//		}
//		pt=next;
//		next=NULL;
//	}
//}
//        