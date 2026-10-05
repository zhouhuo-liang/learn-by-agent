#include<iostream>
#include<vector>
using namespace std;
struct hash_table{
    vector<vector<int>> buckets ;
    int count = 0;
    hash_table(){
        buckets.resize(7);
    }

    int hash_value(int value){
        int n = static_cast<int>(buckets.size());
        int index = value % n;
        if(index<0){
            index += n ;
        }
        return index;
    }
    bool contains(int value){
        int index = hash_value(value);
        for(int x: buckets[index]){
            if(x == value){
                return true;
            }
        }
        return false;
    }
    void insert(int value){
        if(contains(value)){
            return;
        }
        if(static_cast<double>(count+1)/buckets.size()>0.75){
            rehash(buckets.size()*2+1);
        }
        int index = hash_value(value);
        buckets[index].push_back(value);
        count++;
    }
    void print(){
        for(size_t i=0; i<buckets.size(); i++){
            cout<<"bucket "<<i<<": ";
            for(int value : buckets[i]){
                cout<<value<<' ';
            }
            cout<<endl;
        }
    }
    bool remove(int value){
        int index = hash_value(value);
        for(size_t i=0; i<buckets[index].size(); i++){
            if(value == buckets[index][i]){
                buckets[index].erase(buckets[index].begin()+i);
                count--;
                return true;
            }
        }
        return false;
    }
    double load_factor() const{
        return static_cast<double>(count)/buckets.size();
    }
    void rehash(size_t new_capacity){
        if(new_capacity==0){
            return ;
        }
        vector<vector<int>> old_buckets = buckets;
        buckets.clear();
        buckets.resize(new_capacity);
        count=0;
        for(size_t i=0;i<old_buckets.size();i++){
            for(int value:old_buckets[i]){
                insert(value);
            }
        }
    }
};

int main(){
    hash_table hs ;
    hs.insert(10);
    hs.insert(20);
    hs.insert(3);
    hs.insert(17);
    hs.insert(24);
    hs.insert(10);

    hs.print();
    cout<<"contains 17 "<<hs.contains(17)<<endl;
    cout<<"contains 5 "<<hs.contains(5)<<endl;

    cout<<"remove(3) :"<<hs.remove(3)<<endl;
    cout<<"remove(99) :"<<hs.remove(99)<<endl;
    cout<<"contains(3) :"<<hs.contains(3)<<endl;
    hs.print();
    cout << "count: " << hs.count << endl;
    cout<<"-------------------------------"<<endl;
    cout<<"扩容前的load_factor : "<<hs.load_factor()<<endl;
    cout<<"扩容前的bucket数 : "<<hs.buckets.size()<<endl;
    hs.insert(1);
    hs.insert(2);
    cout<<"扩容后的load_factor : "<<hs.load_factor()<<endl;
    cout<<"扩容后的bucket数 : "<<hs.buckets.size()<<endl;
    return 0;
}
