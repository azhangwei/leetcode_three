//#include <iostream>
//
//using namespace std;
//
//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode(int x) : val(x), next(NULL) {}
//};
//ListNode *rotateRight(ListNode *head, int k);
//ListNode *rotateAll(ListNode *head);
//int main()
//{
//	ListNode *head=new ListNode(1);
//	ListNode *se=new ListNode(2);
//	ListNode *th=new ListNode(3);
//	head->next=se;
//	se->next=th;
//	ListNode *re=rotateRight(head,1);
//	return 0;
//}
//
//ListNode *rotateRight(ListNode *head, int k)
//{
//	if(head==NULL)
//		return NULL;
//	int len=0;
//	ListNode *first=head;
//	while(first)
//	{
//		len++;
//		first=first->next;
//	}
//	k=k%len;
//	k=len-k;
//	if(k==0)
//		return head;
//	first=head;
//	ListNode *second=head;
//	ListNode *last;
//	int i;
//	for(i=0;i<k&&second!=NULL;i++)
//	{
//		last=second;
//		second=second->next;
//	}
//	if(i<k)
//		return head;
//	last->next=NULL;
//	last=second;
//	if(second==NULL)
//		return head;
//	while(second->next)
//		second=second->next;
//	second->next=first;
//	return last;
//
//}
/////////////////////////////////////////整体旋转 这里没用，写程序前看清题目，考虑清楚。
//ListNode *rotateAll(ListNode *head)
//{
//	if(head==NULL||head->next==NULL)
//		return NULL;
//	ListNode *first=head;
//	ListNode *second=head->next;
//	ListNode *next=second->next;
//	first->next=NULL;
//	second->next=first;
//	while(next)
//	{
//		first=second;
//		second=next;
//		next=next->next;
//		second->next=first;
//	}
//	return second;
//	
//}