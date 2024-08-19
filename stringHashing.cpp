/*Find a hash value of a string*/
#include<iostream>
using namespace std;

long long compute_hash(string &s){
    const int p = 31;
    const int m = 1e9+9;
    long long value = 0;
    long long power = 1;

    for(char c:s){
        value = (value + (c-'a'+1)*power) % m;
        power = (power*p) % m;
    }

    return value;
}

int main(){
    string s;
    cin>>s;

    long long hash = compute_hash(s);
    cout<<"The hash value of the string is:"<<" "<<hash<<endl;

    return 0;
}