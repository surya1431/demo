#include<cstdlib>
#include<iostream>
#include<ctime>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main() {
srand(time(NULL));

int i,k,num;
struct node { int n;
struct node *next;} ;
struct node *temp, *p1, *AOP[5];

for(i=0;i<5;i++){ AOP[i]= NULL;
cout<<"Input 5 members"<<endl;
for(i=0;i<5;i++) {
//num=rand()%500;
cin>>num;
k=num%10;
p1=new(node);
p1->n=num;
p1->next=NULL;
if(AOP[k]==NULL){ AOP[k]=p1;}
else { p1->next=AOP[k];
 AOP[k]=p1;}
 }

for(i=0;i<5;i++)
{temp=AOP[i];
cout<<"List number:"<<i+1<<":";
while(temp!=NULL)
 {cout<<" "<<temp->n;
temp=temp->next;
}
cout<<endl<<endl;
 }
  }
}
