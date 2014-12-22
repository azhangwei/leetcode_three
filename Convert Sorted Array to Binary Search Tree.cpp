//#include <iostream>
//#include <vector>
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
//TreeNode *sortedArrayToBST(vector<int> &num);
//TreeNode *sortedArrayToBST(vector<int> &num,int startt,int endd);
//int main()
//{
//	vector<int> aa;
//	aa.push_back(-4);
//	aa.push_back(0);
//	aa.push_back(3);
//	TreeNode *rot=sortedArrayToBST(aa);
//	return 0;
//}
//
//TreeNode *sortedArrayToBST(vector<int> &num)
//{
//     int len=num.size();
//	 return sortedArrayToBST(num,0,len-1);
//}
//TreeNode *sortedArrayToBST(vector<int> &num,int startt,int endd)
//{
//	int len_array=endd-startt+1;
//	if(len_array==0)
//		return NULL;
//	if(len_array==1)
//	{
//		TreeNode *root=new TreeNode(num[startt]);
//		return root;
//	}
//	int mid=len_array/2+startt;
//	TreeNode *root=new TreeNode(num[mid]);
//	if(mid>startt)
//	  root->left=sortedArrayToBST(num,startt,mid-1);
//	if(mid<endd)
//		root->right=sortedArrayToBST(num,mid+1,endd);
//	return root;
//
//}