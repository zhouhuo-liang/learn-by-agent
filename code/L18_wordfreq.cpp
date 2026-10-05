#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>
#include<algorithm>
#include<utility>
#include<cctype>
#include<fstream>
using namespace std;
bool compare(const pair<string,int>& a , const pair<string,int>& b){
    if(a.second != b.second){
        return a.second>b.second;
    }
    return a.first < b.first;
}
string clean_word(const string& word){
    string result ;
    for(char ch : word){
        unsigned char c = static_cast<unsigned char>(ch);
        if(isalnum(c)){
            result += static_cast<char>(tolower(c));
        }
    }
    return result;
}
int main(){

    unordered_map<string,int> freq;
    string filename = "L18_input.txt";
    ifstream input(filename);
    if(!input){
        cout<<"文件打开失败："<<filename<<endl;
        return 1;
    }
    string word;
    while(input>>word){
        string cleaned = clean_word(word);
        if(!cleaned.empty()){
            freq[cleaned]++;
        }
    }

    vector<pair<string,int>> items(freq.begin(),freq.end());
    sort(items.begin(),items.end(),compare);
    cout<<"词频统计："<<endl;
    for(const auto& entry : items){
        cout<<entry.first<<"->"<<entry.second<<endl;
    }
    return 0;
}
