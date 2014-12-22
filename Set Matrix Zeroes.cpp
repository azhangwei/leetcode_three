//#include<iostream>
//#include<vector>
//using namespace std;
//
//void setZeroes(vector<vector<int> > &matrix);
//
//int main()
//{
//	vector<vector<int>>re;
//	vector<int>oo;
//	oo.push_back(-4);
//	oo.push_back(-2147483648);
//	oo.push_back(6);
//	oo.push_back(-7);
//	oo.push_back(0);
//	re.push_back(oo);
//	oo.clear();
//	oo.push_back(-8);
//	oo.push_back(6);
//	oo.push_back(-8);
//	oo.push_back(-6);
//	oo.push_back(0);
//	re.push_back(oo);
//	oo.clear();
//	oo.push_back(2147483647);
//	oo.push_back(2);
//	oo.push_back(-9);
//	oo.push_back(-6);
//	oo.push_back(-10);
//	re.push_back(oo);
//	oo.clear();
//	setZeroes(re);
//	return 0;
//}
//
//void setZeroes(vector<vector<int> > &matrix)
//{
//	int height=matrix.size();
//	int width=matrix[0].size();
//
//	vector<int>H(height);
//	vector<int>W(width);
//
//	for(int i=0;i<height;i++)
//	{
//		for(int j=0;j<width;j++)
//		{
//			if(matrix[i][j]==0)
//			{
//				H[i]=1;
//				W[j]=1;
//			}
//		}
//	}
//	for(int i=0;i<height;i++)
//	{
//		if(H[i]==1)
//		{
//			for(int j=0;j<width;j++)
//			{
//				matrix[i][j]=0;
//			}
//		}
//	}
//	for(int i=0;i<width;i++)
//	{
//		if(W[i]==1)
//		{
//			for(int j=0;j<height;j++)
//			{
//				matrix[j][i]=0;
//			}
//		}
//	}
//}