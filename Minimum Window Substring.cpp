//#include <iostream>
//#include <string>
//#include <set>
//#include <vector>
//
//using namespace std;
//string minWindow(string S, string T);
//int main()
//{
//	string s="ADOBECODEBANC";
//	string t="ABC";
//	string re=minWindow(s,t);
//	return 0;
//}
//
//string minWindow(string S, string T)
//{
//	int lenS=S.size();
//	int lenT=T.size();
//	if(T.size()==0||S.size()<T.size())
//		return "";
//	vector<int> needFind(256);
//	vector<int>hasFind(256);
//	for(int i=0;i<lenT;i++)
//	{
//		needFind[T[i]]++;
//	}
//	int minDistance=INT_MAX;
//	int min_start=0,S_start=0;
//	int min_end=0,E_end=0;
//	int count=0;
//	for(int min_end=0;min_end<lenS;min_end++)
//	{
//		if(needFind[S[min_end]]==0) continue;
//		hasFind[S[min_end]]++;
//		if(hasFind[S[min_end]]<=needFind[S[min_end]])
//			count++;
//		if(count==lenT)
//		{
//			while(min_start<min_end)
//			{
//				if(needFind[S[min_start]]==0)
//				{
//					min_start++;
//				}
//				else if(hasFind[S[min_start]]>needFind[S[min_start]])
//				{
//					hasFind[S[min_start]]--;
//					min_start++;
//				}
//				else
//					break;
//			}
//			int len_tmp=min_end-min_start+1;
//			if(len_tmp<minDistance)
//			{
//				minDistance=len_tmp;
//				S_start=min_start;
//				E_end=min_end;
//			}
//		}
//	
//	}
//	if(minDistance==INT_MAX)
//		return "";
//	return S.substr(S_start,E_end-S_start+1);
//}
//
/////////////////////////////////////////////网上答案，很好
////string minWindow(string S, string T) {
////	int sLen=S.size();
////	int tLen=T.size();
////	if(tLen==0 || sLen<tLen) return "";
////
////	int needFind[256]={0};
////	int hasFind[256]={0};
////
////	for(int i=0;i<tLen;i++)
////	{
////		needFind[T[i]]++;
////	}
////
////	int minWindowLength=INT_MAX;
////	int minBegin=0;
////	int minEnd=sLen-1;
////	int begin=0;
////	int end=0;
////	for(int count=0;end<sLen;end++)
////	{
////		if(needFind[S[end]]==0) continue;
////
////		hasFind[S[end]]++;
////		if(hasFind[S[end]] <= needFind[S[end]])
////			count++;
////		if(count==tLen)
////		{
////			while(begin<end)
////			{
////				if(needFind[S[begin]]==0) 
////				{
////					begin++;
////					continue;
////				}
////				if(hasFind[S[begin]] > needFind[S[begin]])
////				{
////					hasFind[S[begin]]--;
////					begin++;
////					continue;
////				}
////				else
////					break;
////			}
////
////			int tmpWindowLength=end-begin+1;
////
////			if(tmpWindowLength < minWindowLength)
////			{
////				minBegin=begin;
////				minEnd=end;
////				minWindowLength=tmpWindowLength;
////			}
////		}
////	}
////	if(minWindowLength==INT_MAX)
////		return "";
////	return S.substr(minBegin,minWindowLength);
////}
//
///////////////////////////////////////////我的，时间超
////string minWindow(string S, string T)
////{
////	vector<vector<int> >table(256);
////	for(int i=0;i<S.size();i++)
////	{
////		table[int(S[i])].push_back(i);
////	}
////	set<int>lis;
////	vector<int>mar(S.size());
////	for(int i=0;i<T.size();i++)
////	{
////		for(int j=0;j<table[T[i]].size();j++)
////		{
////			mar[table[T[i]][j]]=i;
////		}
////	}
////	if(T.size()==1)
////		if(table[T[0]].size()>0)
////			return T;
////		else
////			return "";
////	for(int i=0;i<T.size();i++)
////	{
////		if(table[T[i]].size()==0)
////			return  "";
////		int num=0;
////		while(num<table[T[i]].size()&&table[T[i]][num]==-1)
////			num++;
////		if(num==table[T[i]].size())
////			return "";
////		lis.insert(table[T[i]][num]);
////		table[T[i]][num]=-1;
////	}
////	int len=0;
////	int max_len=S.size();
////	int star=-1,en;
////	while(1)
////	{
////		
////		int b=*lis.begin();
////		int a=*(--lis.end());
////		len=a-b+1;
////		if(len<=max_len)
////		{
////			max_len=len;
////			star=*(--lis.end());
////			en=*lis.begin();
////		}
////		int mm=mar[*lis.begin()];
////		int num=0;
////		while(num<table[T[mm]].size()>0&&table[T[mm]][num]==-1)
////			num++;
////		if(num==table[T[mm]].size())
////			break;
////		lis.erase(lis.begin());
////	    lis.insert(table[T[mm]][num]);
////		table[T[mm]][num]=-1;
////	}
////	if(star==-1)
////		return "";
////	else
////		return S.substr(en,star-en+1);
////}