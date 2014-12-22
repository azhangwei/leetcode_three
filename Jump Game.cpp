//#include <iostream>
//#include <vector>
//using namespace std;
//
//bool canJump(int A[], int n);
//bool isOK(vector<int>&mar);
//int main()
//{
//
//	return 0;
//}
///////////////////////////////////ʱ�䳬
////bool canJump(int A[], int n)
////{
////	vector<int>mark(n);
////	mark[0]=1;
////	int len;
////
////	for(int i=0;i<mark.size()-1;i++)
////	{
////		if(mark[i]==1)
////		{
////			len=A[i];
////			mark[i]=0;
////			for(int j=1;j<=len;j++)
////			{
////				if(i+j==n-1)
////					return true;
////				mark[i+j]=1;
////			}
////		}
////	}
////	return false;
////}
//bool canJump(int A[], int n)
//{
//	if(n<=1)
//		return true;
//	int loc=n-2;
//	while(loc>=0)
//	{
//		if(loc+A[loc]>=n-1)
//			return canJump(A,loc+1);
//		loc--;
//	}
//	return false;
//}
