//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//bool isScramble(string s1, string s2);
//bool isequal(string s1,string s2);
//
//int main()
//{
//	string a="abcd";
//	string b="bdac";
//	bool re=isScramble(a,b);
//	return 0;
//}
//
//bool isScramble(string s1, string s2) 
//{
//  if(s1.size()!=s2.size())
//	  return false;
//  if(s1==s2)
//	  return true;
//  char s1_one=s1[0];
//  for(int i=0;i<s1.size()-1;i++)
//  {
//
//      string s1_front=s1.substr(0,i+1);
//	  string s1_front_back=s1.substr(i+1,s1.size()-i-1);
//	  
//	  string s2_front=s2.substr(0,i+1);
//	  string s2_front_back=s2.substr(i+1,s2.size()-i-1);
//	  string s2_back=s2.substr(s2.size()-1-i,i+1);
//	  string s2_back_back=s2.substr(0,s2.size()-i-1);
//
//	  if(isequal(s1_front,s2_front))
//	  {
//		  if(isequal(s1_front_back,s2_front_back)&&isScramble(s1_front,s2_front)&&isScramble(s1_front_back,s2_front_back))
//			  return true;
//	  }
//	  if(isequal(s1_front,s2_back))
//	  {
//		  if(isequal(s1_front_back,s2_back_back)&&isScramble(s1_front,s2_back)&&isScramble(s1_front_back,s2_back_back))
//			  return true;
//	  }
//  }
//  return false;
//}
//
//bool isequal(string s1,string s2)
//{
//	vector<int>num1(256);
//	vector<int>num2(256);
//	if(s1.size()!=s2.size())
//		return false;
//	for(int i=0;i<s1.size();i++)
//	{
//		num1[s1[i]]++;
//		num2[s2[i]]++;
//	}
//	for(int i=0;i<256;i++)
//	{
//		if(num1[i]!=num2[i])
//			return false;
//	}
//	return true;
//}