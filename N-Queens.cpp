//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//void Perm(vector<int>&list,int k,int m,vector<vector<int> >&re);
//void solveHui(vector<int>&solve,int n,vector<vector<string> > &re,int k);
//bool isValid(vector<int> &solve,int k);
//void geneResult(vector<vector<string> > &re,vector<int>&solve);
//inline void Swap(int &a,int &b)
//{
//	int temp=a;a=b;b=temp;
//}
// vector<vector<string> > solveNQueens(int n);
//int main()
//{
//	int n=4;
//	vector<vector<string> >rr=solveNQueens(n);
//	return 0;
//}
//
//vector<vector<string> > solveNQueens(int n)
//{
//	vector<vector<string> >re;
//	vector<int> solve(n);
//	for(int i=0;i<n;i++)
//		solve[i]=-1;
//	solveHui(solve,n,re,0);
//	return re;
//}
//void solveHui(vector<int>&solve,int n,vector<vector<string> > &re,int k)
//{
//    for(int i=0;i<n;i++)
//	{
//		solve[k]=i;
//		if(isValid(solve,k))
//		{
//			if(k==n-1)
//			{
//				geneResult(re,solve);
//				return;
//			}
//			solveHui(solve,n,re,k+1);
//		}
//		solve[k]=-1;
//	}
//}
//void geneResult(vector<vector<string> > &re,vector<int>&solve)
//{
//	string tmp;
//	for(int i=0;i<solve.size();i++)
//	{
//		tmp=tmp+'.';
//	}
//	vector<string> tm;
//	for(int i=0;i<solve.size();i++)
//	{
//		tmp[solve[i]]='Q';
//		tm.push_back(tmp);
//		tmp[solve[i]]='.';
//	}
//	re.push_back(tm);
//	return;
//}
//bool isValid(vector<int> &solve,int k)
//{
//	int x=k;
//	int y=solve[k];
//	for(int i=0;i<k;i++)
//	{
//		int tmp_x=i;
//		int tmp_y=solve[i];
//		int a=abs(tmp_x-x);
//		int b=abs(tmp_y-y);
//		if(a==0||b==0||a==b)
//			return false;
//	}
//	return true;
//}
//
/////////////////////////////////////////////////////我的方法，暴力排序，时间超！！笨蛋！
////vector<vector<string> > solveNQueens(int n)
////{
////	vector<vector<int> >re;
////	vector<int>list(n);
////	vector<vector<string> >result;
////	for(int i=0;i<n;i++)
////	{
////		list[i]=i;
////	}
////	Perm(list,0,n,re);
////	for(int i=0;i<re.size();i++)
////	{
////		bool bre=false;
////		for(int j=0;j<n-1;j++)
////		{
////			for(int k=j+1;k<n;k++)
////			{
////				int a=abs(k-j);
////				int b=abs(re[i][j]-re[i][k]);
////				if(a==b)
////				{
////					bre=true;
////					break;
////				}
////			}
////			if(bre)
////				break;
////		}
////		if(bre==false)
////		{
////			string res;
////			vector<string> tmp;
////			for(int kk=0;kk<n;kk++)
////			{
////				res=res+'.';
////			}
////			for(int kk=0;kk<n;kk++)
////			{
////				res[re[i][kk]]='Q';
////				tmp.push_back(res);
////				res[re[i][kk]]='.';
////			}
////			result.push_back(tmp);
////		}
////	}
////	return result;
////}
////void Perm(vector<int>&list,int k,int m,vector<vector<int> >&re)//k表示前缀的位置,m是要排列的数目.
////{
////	if(k==m-1)//前缀是最后一个位置,此时打印排列数.
////	{
////		re.push_back(list);
////		return;
////	}
////	else
////	{
////		for(int i=k;i<m;i++)
////		{
////			//交换前缀,使之产生下一个前缀.
////			Swap(list[k],list[i]);
////			Perm(list,k+1,m,re);
////			//将前缀换回来,继续做上一个的前缀排列.
////			Swap(list[k],list[i]);
////		}
////	}
////}
//
