#include<iostream>
#include<vector>
using namespace std;
void change2d(vector< vector<int> > & v){
    v[0][1]=100;
}
int main(){
    vector< vector<int> >v;
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v2.push_back(4);
    v2.push_back(6);
    v3.push_back(7);
    v3.push_back(8);
    v3.push_back(12);
    v3.push_back(10);

    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    cout<<v[0][1]<<endl;
    change2d(v);
    cout<<v[0][1]<<endl;

    cout<<v[0].size()<<endl;
    cout<<v[1].size()<<endl;
    cout<<v[2].size()<<endl;
}