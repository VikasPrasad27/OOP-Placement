//STL - Standard Template Library its divided into 4 parts 1)Algorithms 2)Containers 3)Functions 4)Iterators
//2)Containers - vector,set,queue,pair,etc..

#include <iostream>
#include <vector>
using namespace std;

void pair(){
    pair<int,int>p ={1,3};
    cout<<p.first<<" "<<p.second;

    pair<int,pair<int,int>>p = {1,{2,3}};
    cout<<p.first<<" "<<p.second.second<<" "<<p.second.first;

}
void vector(){
    //vector is dynamic in nature hence used instead of array
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2); //dynamically push back , generally faster than push_back

    vector<pair<int,int>>vec;
    v.push_back({1,2});
    v.emplace_back(3,4);

    vector<int>ve(5,100); //{100,100,100,100,100}
    vector<int>ve(5);

    //acess
    cout<<v[0]<<"or"<<v.at[0];
    cout<<v.back()<<" ";

    for(auto it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }

    for(auto it:v){  //for each loop
        cout<<it<<" ";
    }
    //erase- v.earase(location to delete)
    v.erase(v.begin()+1);
    //{10,20,23,32,35}
    v.erase(v.begin()+2,v.begin()+4);//{10,20,36}

    //insert
    vector<int>v(2,100);
    v.insert(v.begin(),200);

    cout<<v.size();

    v.pop_back();
    v.clear();//erases enitire vector
    cout<<v.empty();
}

void list(){
    //list is similar to vector dynamic in nature but also gives front() operations
    //for vector singly Link list is maintaineds
    //for list doubly LL
     list<int>ls;
     ls.push_back(2);
     ls.emplace_back(3);

     ls.push_front(1);
     ls.emplace_front();

     //REST ALL FUNCTIONS ARE SIMILAR TO VECTOR
}

void deque(){
    deque<int>dq;
    dq.push_back(2);
    dq.emplace_back(3);

    dq.push_front(1);
    dq.emplace_front(2);

    dq.pop_front();
    dq.pop_back();

    dq.back();
    dq.front(); 
    //rest func similar to vector
}

void stack(){
    //LIFO - TC-0(1)
    stack<int>st;
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(4);
    st.emplace(5);

    cout<<st.top(); //5
    st.pop();
    cout<<st.top();//4
    cout<<st.size();//4
    cout<<st.empty();

    stack<int>str1,str2;
    str1.swap(str2);
}

void queue(){
    //FIFO TC-0(1)
    queue<int>1;
    q.push(1);
    q.push(3);
    q.emplace(4);//{1,3,4}

    q.back()+=5;//{1,3,9}

    cout<<q.back();//9
    cout<<q.front();//1
    q.pop();
    cout<<q.front();//3

    //size , swap same as swap
}

int main(){
    cout<<"hii";
    return 0;
}