#include<bits/stdc++.h>
using namespace std;
void display(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        cout<<v.at(i)<<" ";
    }

    cout<<endl;
}
int main(){ 
    vector<int> v;
    int element, size;
    cout<<"Enter the size of your vector"<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter an element to add to this vector: ";
        cin>>element;
       // cout<<v.at(i);
        v.push_back(element);
    }
    display(v);  
    v.pop_back();
    display(v);
     vector<int> :: iterator it= v.begin();
    v.insert(it,5);
    v.insert(it+1,4,566);

    display(v); 
 
    return 0;
}
     
   /* vector<int> vec1;      //zero length integer vector
    vector<char> vec2(4);  //4-element character vector
    vector<char> vec3(vec2);//4-element character vector from vec2
    vector<int> vec4(6,3); //6-element vector of 3s  */