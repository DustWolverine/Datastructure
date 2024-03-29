#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
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

class Stack{
    int capacity;
    int top;
    int *arr;
    public:
    Stack(){
        top=-1;
        capacity=10;
        arr=new int[capacity]; 
    }
    void push(int x){
         if(top>=(capacity-1)){
            cout<<"Stack Overflow"<<" ";
            return ;
         }
         else {
            top++;
            arr[top]=x;
         }
    }
    int pop(){
        if(top<0){
            cout<<"Stack is empty"<<endl;
            return 0;
        }
        else {
        int val=arr[top];
        top--;
        return val;
        }
    }
    int topElement(){
        return arr[top];
    }
    bool isEmpty(){
        return (top<0);
    }
    int size(){
        return top+1;
    }
};

int main()
{
fast_cin();
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

Stack mystack;
mystack.push(7);
mystack.push(9);
mystack.push(10);
mystack.push(12);
mystack.push(12);

mystack.push(12);
mystack.push(12);
mystack.push(12);
mystack.push(12);
mystack.push(12);

cout<<mystack.size()<<endl;


while(!mystack.isEmpty()){
        int val=mystack.topElement();
        cout<<val<<" ";
        mystack.pop();
}




    return 0;
}