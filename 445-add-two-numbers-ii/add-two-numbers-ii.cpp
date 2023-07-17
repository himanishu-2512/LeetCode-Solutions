/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       stack<ListNode*> s1,s2;
       stack<int> s;
       ListNode* temp=l1;
       while(temp!=NULL){
         s1.push(temp);
         temp=temp->next;
       } 
       temp=l2;
       while(temp!=NULL){
         s2.push(temp);
         temp=temp->next;
       } 


  ListNode *d= new ListNode();
  ListNode* head=d;
 int carry=0;
  while(!s1.empty()&&!s2.empty()){
 int sum=s1.top()->val+s2.top()->val+carry;
   if(sum>=10){
   carry=sum/10;
   sum%=10;}
   else carry=0;
   s.push(sum);
  s1.pop();
  s2.pop();
  }
  while(!s1.empty()){
    int sum=s1.top()->val+carry;
   if(sum>=10){
   carry=sum/10;
   sum%=10;}

   else carry=0;
s.push(sum);
  s1.pop();
  }
while(!s2.empty()){
  int sum=s2.top()->val+carry;
   if(sum>=10){
   carry=sum/10;
   sum%=10;}
   else carry=0;
   s.push(sum);
  s2.pop();  
}
if(carry>0){
 s.push(carry);
}

while(!s.empty()){
  ListNode* temp=new ListNode(s.top());
  s.pop();
  d->next=temp;
  d=d->next;
}


  return head->next;


    }
};