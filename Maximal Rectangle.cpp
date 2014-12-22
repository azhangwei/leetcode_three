#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int maximalRectangle(vector<vector<char> > &matrix);
int max_Rec_Line(vector<int>&height);
int max_two(int a,int b)
{
	return a>b?a:b;
}

int main()
{
	vector<vector<char> > matrix(3,vector<char>(3));
	matrix[0][0]='0';
	matrix[0][1]='0';
	matrix[0][2]='0';
	matrix[1][0]='0';
	matrix[1][1]='0';
	matrix[1][2]='0';
	matrix[2][0]='1';
	matrix[2][1]='1';
	matrix[2][2]='1';
	int re=maximalRectangle(matrix);
	return 0;
}

int maximalRectangle(vector<vector<char> > &matrix)
{
	if(matrix.size()==0||matrix[0].size()==0)
		return 0;
	vector<vector<int> >mp(matrix[0].size(),vector<int>(matrix.size()));
	char tmp;
	int len_row;
	for(int i=0;i<matrix.size();i++)
	{
		len_row=0;
		for(int j=0;j<matrix[0].size();j++)
		{
			tmp=matrix[i][j];
			if(tmp=='1')
			{
				len_row++;
			}
			else
			{
				len_row=0;
			}
			mp[j][i]=len_row;
		}
	}
	int result=0;
	for(int i=0;i<matrix[0].size();i++)
	{
		result=max_two(result,max_Rec_Line(mp[i]));
	}
	return result;
}
int max_Rec_Line(vector<int>&height)
{
	stack<int>S;
	height.push_back(0);
	int result=0;
	for(int i=0;i<height.size();)
	{
		if(S.size()==0||height[i]>height[S.top()])
			S.push(i++);
		else
		{
			int tmp=S.top();
						S.pop();
			result=max_two(result,height[tmp]*(S.size()==0?i:i-S.top()-1));
		}
	}
	return result;
}