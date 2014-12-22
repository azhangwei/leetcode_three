//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//string addBinary(string a, string b);
//int main()
//{
//	string a="11";
//	string b="1";
//	string re=addBinary(a,b);
//	return 0;
//}
//string addBinary(string a, string b)
//{
//	reverse(a.begin(),a.end());
//	reverse(b.begin(),b.end());
//	int jin=0;
//	int len=0;
//	string re;
//	while(len<a.size()&&len<b.size())
//	{
//		int aa=a[len]-'0';
//		int bb=b[len]-'0';
//		int sum=aa+bb+jin;
//		jin=sum/2;
//		sum=sum%2;
//		re=re+char(sum+'0');
//		len++;
//	}
//	if(len==a.size())
//	{
//		for(int i=len;i<b.size();i++)
//		{
//			int bb=b[i]-'0';
//			int sum=bb+jin;
//			jin=sum/2;
//			sum=sum%2;
//			re=re+char(sum+'0');
//		}
//	}
//	if(len==b.size())
//	{
//		for(int i=len;i<a.size();i++)
//		{
//			int aa=a[i]-'0';
//			int sum=aa+jin;
//			jin=sum/2;
//			sum=sum%2;
//			re=re+char(sum+'0');
//		}
//	}
//	if(jin==1)
//		re=re+'1';
//	reverse(re.begin(),re.end());
//	return re;
//}