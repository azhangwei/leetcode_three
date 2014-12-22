//#include<iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//int minDistance(string word1, string word2);
//int main()
//{
//	string a="abccd";
//	string b="abcde";
//	int re=minDistance(a,b);
//	return 0;
//}
//int minDistance(string word1, string word2)
//{
//	if(word1=="")
//		return word2.size();
//	if(word2=="")
//		return word1.size();
//	int len_one=word1.size();
//	int len_two=word2.size();
//	vector< vector<int> >mp(len_one,vector<int>(len_two));
//	for(int i=len_one-1;i>=0;i--)
//	{
//		for(int j=i;j<=len_one-1;j++)
//		{
//			if(word1[j]==word2[len_two-1])
//			{
//				mp[i][len_two-1]=len_one-i-1;
//				break;
//			}
//			else
//			{
//				mp[i][len_two-1]=len_one-i;
//			}
//		}
//	}
//	for(int i=len_two-1;i>=0;i--)
//	{
//		for(int j=i;j<=len_two-1;j++)
//		{
//			if(word2[j]==word1[len_one-1])
//			{
//				mp[len_one-1][i]=len_two-i-1;
//				break;
//			}
//			else
//			{
//				mp[len_one-1][i]=len_two-i;
//			}
//		}
//	}
//    int one,two,three;
//	int min_val=word1.size();
//	for(int i=len_one-2;i>=0;i--)
//		for(int j=len_two-2;j>=0;j--)
//		{
//			three=mp[i+1][j+1]+1;
//			two=mp[i][j+1]+1;
//			one=mp[i+1][j]+1;
//			if(word1[i]==word2[j])
//				three--;
//			if(three>two)
//				min_val=two;
//			else
//				min_val=three;
//			if(min_val>one)
//				min_val=one;
//			mp[i][j]=min_val;
//		}
//	return mp[0][0];
//}
//
//
