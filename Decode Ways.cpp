//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//int numDecodings(string s);
//
//int main()
//{
//	string s="301";
//	int re=numDecodings(s);
//	return 0;
//}
//int numDecodings(string s)
//{
//	int len=s.size();
//	if(len==0||s[0]=='0')
//		return 0;
//	if(len==1)
//	{
//		if(s[0]=='0')
//		 return 0;
//		else
//		 return 1;
//	}
//	int sum=0;
//	vector<int>mark(len+1);
//	mark[0]=0;
//	if(s[0]=='0')
//		mark[1]=0;
//	else
//	    mark[1]=1;
//
//	for(int i=2;i<=len;i++)
//	{
//		if(s[i-1]!='0')
//		   mark[i]+=mark[i-1];
//		sum=int(s[i-2]-'0')*10+int(s[i-1]-'0');
//		if(sum<=26&&sum>=10)
//		{
//			if(i==2)
//				mark[i]+=1;
//			else
//			    mark[i]+=mark[i-2];
//		}
//	}
//	return mark[len];
//}