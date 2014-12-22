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
//ListNode *mergeTwoLists(ListNode *l1, ListNode *l2);
//
//int main()
//{
//	ListNode *l1=new ListNode(5);
//	ListNode *l2=new ListNode(1);
//	ListNode *l3=new ListNode(2);
//	ListNode *l4=new ListNode(4);
//	l2->next=l3;
//	l3->next=l4;
//	ListNode *re=mergeTwoLists(l1,l2);
//	return 0;
//}
//ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
//{
//	ListNode *head=NULL;
//	if(l1==NULL||l2==NULL)
//	{
//		if(l1==NULL)
//			return l2;
//		if(l2==NULL)
//			return l1;
//	}
//	ListNode *tmp=NULL;
//	while(l1&&l2)
//	{
//		if(l1->val<l2->val)
//		{
//			if(tmp==NULL)
//				tmp=l1;
//			else
//				tmp->next=l1;
//			l1=l1->next;
//		}
//		else
//		{
//			if(tmp==NULL)
//				tmp=l2;
//			else
//				tmp->next=l2;
//			l2=l2->next;
//		}
//		if(head==NULL)
//			head=tmp;
//	}
//	if(l1==NULL)
//		tmp->next=l2;
//	else
//		tmp->next=l1;
//	return head;
//}