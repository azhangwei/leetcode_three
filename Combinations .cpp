//#include <iostream>
//#include <vector>
//
//using namespace std;
//vector<vector<int> > combine(int n, int k);
//void combine(int n, int k,vector<int>&part,vector<vector<int> >&re);
//int main()
//{
//	vector<vector<int> >re=combine(4,2);
//	return 0;
//}
//vector<vector<int> > combine(int n, int k)
//{
//	vector<int>part;
//	vector<vector<int> >re;
//	combine(n,k,part,re);
//	return re;
//}
//void combine(int n, int k,vector<int>&part,vector<vector<int> >&re)
//{
//	if(k==0)
//	{
//		vector<int>tmp;
//		for(int i=part.size()-1;i>=0;i--)
//			tmp.push_back(part[i]);
//		re.push_back(tmp);
//		return;
//	}
//	for(int i=n;i>=1;i--)
//	{
//		part.push_back(i);
//		combine(i-1,k-1,part,re);
//		part.pop_back();
//	}
//	return;
//}