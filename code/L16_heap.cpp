#include<iostream>
#include<vector>
#include<utility>
#include<queue>
#include<functional>
using namespace std;
struct min_heap{
    vector<int> data;

    void push(int value){
        data.push_back(value);
        int i = data.size()-1;

        while(i>0){
            int parent = (i-1)/2;
            if(data[parent]<=data[i]){
                break;
            }
            swap(data[parent],data[i]);
            i = parent;
        }

    }

    void print(){
        for(int x:data){
            cout<<x<<' ';
        }
        cout<<endl;
    }

    bool empty() const{
        return data.empty();
    }

    int top() const{
        return data[0];
    }

    void pop(){
        if(data.empty()){
            return ;
        }

        data[0]=data.back();
        data.pop_back();
        size_t i=0;
        while(1){
            size_t left = 2*i+1;
            size_t right = 2*i+2;
            if(left >= data.size()){
                break;
            }
            int smaller = left;
            if(right < data.size() && data[right]<data[left]){
                smaller = right;
            }
            if(data[i] <= data[smaller]){
                break;
            }
            swap(data[i],data[smaller]);
            i=smaller;
        }
    }
};



int main(){
    min_heap h;
    h.push(5);
    h.print();
    h.push(3);
    h.print();
    h.push(8);
    h.print();
    h.push(1);
    h.print();
    h.push(2);
    h.print();
    h.push(9);
    h.print();
    cout<<"依次取出: ";
    while(!h.empty()){
        cout<<h.top()<<' ';
        h.pop();
    }
    cout<<endl;
    priority_queue<int> max_pq;
    priority_queue<int,vector<int>,greater<int>> min_pq;
    for(int x:{5,3,8,1,2,9}){
        max_pq.push(x);
        min_pq.push(x);
    }
    cout << "最大优先: ";
    while (!max_pq.empty()) {
        cout << max_pq.top() << ' ';
        max_pq.pop();
    }
    cout << endl;

    cout << "最小优先: ";
    while (!min_pq.empty()) {
        cout << min_pq.top() << ' ';
        min_pq.pop();
    }
    cout << endl;
    return 0;
}
