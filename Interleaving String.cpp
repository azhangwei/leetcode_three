//#include <string>
//#include <iostream>
//#include <vector>
//using namespace std;
//
//bool isInterleave(string s1, string s2, string s3);
//void all_c(string s1,int s1_start,string s3,int s3_start,vector<vector<int> >&mark,vector<int> &tmp);
//int main()
//{
//	string a="a";
//	string b="";
//	string c="a";
//	bool re=isInterleave(a,b,c);
//	return 0;
//}
////////////////////////////////////////////////////////二维动态规划
//bool isInterleave(string s1, string s2, string s3)
//{
//	if(s1.size()+s2.size()!=s3.size())
//		return false;
//	vector<vector<bool> > mark(s1.size()+1,vector<bool>(s2.size()+1));
//	mark[0][0]=true;
//	for(int i=0;i<s1.size();i++)
//	{
//		if(s1[i]==s3[i])
//			mark[i+1][0]=true;
//		else
//			break;
//	}
//	for(int i=0;i<s2.size();i++)
//	{
//		if(s2[i]==s3[i])
//			mark[0][i+1]=true;
//		else
//			break;
//	}
//	for(int i=1;i<=s1.size();i++)
//		for(int j=1;j<=s2.size();j++)
//		{
//			if(mark[i-1][j]==true&&s1[i-1]==s3[i+j-1])
//			{
//				mark[i][j]=true;
//				continue;
//			}	
//			if(mark[i][j-1]==true&&s2[j-1]==s3[i+j-1])
//			{
//				mark[i][j]=true;
//				continue;
//			}
//		}
//	return mark[s1.size()][s2.size()];
//}
////////////////////////////////////////////////////////////我的方法，时间超
////bool isInterleave(string s1, string s2, string s3)
////{
////       vector<vector<int> >mark,mark_two;
////	   vector<int> tmp(s3.size());
////	   vector<int> tmp_two(s3.size());
////	   all_c(s1,0,s3,0,mark,tmp);
////	   all_c(s2,0,s3,0,mark_two,tmp_two);
////	   for(int i=0;i<mark.size();i++)
////		   for(int j=0;j<mark_two.size();j++)
////		   {
////			   vector<int> re(s3.size());
////			   for(int k=0;k<s3.size();k++)
////			   {
////				   re[i]=mark[i][k]||mark_two[j][k];
////			   }
////			   int k;
////			   for( k=0;k<s3.size();k++)
////			   {
////				   if(re[i]==0)
////					   break;
////			   }
////			   if(k==s3.size())
////				   return true;
////		   }
////
////	   return false;
////}
////void all_c(string s1,int s1_start,string s3,int s3_start,vector<vector<int> >&mark,vector<int> &tmp)
////{
////	if(s1_start==s1.size())
////	{
////		mark.push_back(tmp);
////		return;
////	}
////	char first_s1=s1[s1_start];
////	for(int i=s3_start;i<s3.size();i++)
////	{
////		if(s3[i]==first_s1)
////		{
////			tmp[i]=1;
////			all_c(s1,s1_start+1,s3,i+1,mark,tmp);
////			tmp[i]=0;
////		}
////	}
////	return;
////}