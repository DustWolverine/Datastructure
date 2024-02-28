#pragma GCC optimize("Ofast")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
const ll MOD = 998244353;
const double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define endl "\n"
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

class Node{
    public:
    int data;
    Node *next;
    Node *prev;
    Node(int data){
        this->data=data;
        this->next=nullptr;
        this->prev=nullptr;
    }
};

Node *createLinkedList(vector<int>&v){
Node *head=new Node(v[0]);
Node *first=head;
first->prev=nullptr;
for(int i=1;i<v.size();i++){
    Node *newnode=new Node(v[i]);
    first->next=newnode;
    newnode->prev=first;
    first=newnode;
}
first->next=nullptr;
return head;

}

void traversal(Node *head){
while(head){
    cout<<head->data<<" ";
    head=head->next;
}
}
Node *insertFirst(Node *head,int data){
    Node *newnode=new Node(data);
    newnode->prev=nullptr;
    newnode->next=head;
    head->prev=newnode;
    return newnode;
}
int main()
{
fast_cin();
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
int n;cin>>n; 
vector<int> v; 
for(int i=0;i<n;i++){
    int no; cin>>no; 
    v.pb(no);
}
int data; cin>>data;
Node *head=createLinkedList(v);
Node *first=head;
traversal(head);
cout<<endl;
Node *pointer=insertFirst(first,data);
traversal(pointer);
    return 0;
}