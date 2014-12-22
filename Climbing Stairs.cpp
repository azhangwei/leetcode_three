//#include <iostream>
//
//using namespace std;
//
//int climbStairs(int n);
//
//int main()
//{
//	int re=climbStairs(4);
//	return 0;
//}
//int climbStairs(int n)
//{
//	int first=1;
//	int second=2;
//	int op;
//	if(n==1)
//		return first;
//	if(n==2)
//		return second;
//	for(int i=3;i<=n;i++)
//	{
//		op=first+second;
//		first=second;
//		second=op;
//	}
//	return op;
//}