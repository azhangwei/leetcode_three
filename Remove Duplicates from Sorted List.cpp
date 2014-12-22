//#include <iostream>
//
//using namespace std;
//
//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode(int x) : val(x), next(NULL) {}
//};
//
//ListNode *deleteDuplicates(ListNode *head);
//
//int main()
//{
//	
//	return 0;
//}
//
//ListNode *deleteDuplicates(ListNode *head)
//{
//	if(head==NULL||head->next==NULL)
//		return head;
//	int now_value=head->val;
//	ListNode *dele_double=head;
//	ListNode *dele=head->next;
//    while(dele)
//	{
//		if(dele->val==now_value)
//		{
//			dele=dele->next;
//		}
//		else
//		{
//			dele_double->next=dele;
//			dele_double=dele_double->next;
//			now_value=dele->val;
//			dele=dele->next;
//		}
//	}
//	dele_double->next=NULL;
//	return head;
//}