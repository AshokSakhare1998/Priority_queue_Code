#include<iostream>
#include<queue>
using namespace std;

int main(){
    int arr[6]={20,30,10,3,7,8};
    priority_queue<int>pq;
    cout<<"Array"<<endl;
    for(auto i : arr){
        cout<<i<<' ';
        
    }
    cout<<endl;
    for(int i=0; i<6; i++){
        pq.push(arr[i]);
        
    }
    cout<<"priority_queue :";
    while(!pq.empty()){
        cout<<pq.top()<<' ';
        pq.pop();
        
 
    }
    return 0;
}