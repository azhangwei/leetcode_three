//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<int> plusOne(vector<int> &digits);
//
//int main()
//{
//	vector<int>test;
//	test.push_back(9);
//	vector<int>re=plusOne(test);
//	return 0;
//}
// vector<int> plusOne(vector<int> &digits)
// {
//	 int len_digits=digits.size()-1;
//	 int plus_one=1;
//	 int add_sum;
//	 while(plus_one==1&&len_digits>=0)
//	 {
//		 add_sum=digits[len_digits]+plus_one;
//		 digits[len_digits]=add_sum%10;
//		 plus_one=add_sum/10;
//		 len_digits--;
//	 }
//	vector<int> re;
//	if(plus_one==1)
//		re.push_back(1);
//	for(int i=0;i<digits.size();i++)
//		re.push_back(digits[i]);
//	return re;
// }