#include <iostream>
#include<vector>
using namespace std;

void f1(vector<int>& v2){
    cout<<v2.size();
}

int main() {
    // Write C++ code here
    vector<int> v1(23,0);
    
    cout<<v1.size()<<endl;
    
    f1(v1);
    
    

    return 0;
}