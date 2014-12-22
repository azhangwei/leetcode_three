//#include <iostream>
//#include <stack>
//#include <vector>
//using namespace std;
//
//int largestRectangleArea(vector<int> &height); 
//int max_larg(int a,int b)
//{
//	return a>b?a:b;
//}
//
//int main()
//{
//	vector<int>H;
//	H.push_back(2);
//	H.push_back(1);
//	H.push_back(5);
//	H.push_back(6);
//    H.push_back(2);
//	H.push_back(3);
//	int re=largestRectangleArea(H);
//	return 0;
//}
//
//int largestRectangleArea(vector<int> &height)
//{
//     stack<int>S;
//	 height.push_back(0);
//	 int result=0;
//	 for(int i=0;i<height.size();)
//	 {
//		 if(S.size()==0||height[i]>height[S.top()])
//			 S.push(i++);
//		 else
//		 {
//			 int tmp=S.top();
//			 S.pop();
//			 result=max_larg(result,height[tmp]*(S.size()==0?i:i-S.top()-1));
//		 }
//	 }
//	 return result;
//}