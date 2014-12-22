//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//vector<string> restoreIpAddresses(string s);
//int StrToInt(string s);
//int main()
//{
//	string s="010010";
//	vector<string> re=restoreIpAddresses(s);
//	return 0;
//}
//
//vector<string> restoreIpAddresses(string s)
//{
//	int len_s=s.size();
//	int max_len;
//	max_len=3;
//	string a,b,c,d;
//	vector<string>re;
//	int a_int,b_int,c_int,d_int;
//	for(int one=1;one<=max_len;one++)
//		for(int two=one+1;two<=one+1+max_len;two++)
//			for(int three=two+1;three<s.size();three++)
//				{
//					if(s.size()-three>max_len||three-two>max_len||two-one>max_len||one>max_len)
//						continue;
//					a=s.substr(0,one);
//					b=s.substr(one,two-one);
//					c=s.substr(two,three-two);
//					d=s.substr(three,s.size()-three);
//					a_int=StrToInt(a);
//					b_int=StrToInt(b);
//					c_int=StrToInt(c);
//					d_int=StrToInt(d);
//					if(a_int<256&&b_int<256&&c_int<256&&d_int<256)
//					{
//						string tmp=a+'.'+b+'.'+c+'.'+d;
//						re.push_back(tmp);
//					}
//				}
//	return re;
//}
//int StrToInt(string s)
//{
//	int re=0;
//	for(int i=0;i<s.size();i++)
//	{
//		re=re*10+s[i]-'0';
//	}
//	if(s[0]=='0'&&s.size()>=2)
//		re=256;
//	return re;
//}