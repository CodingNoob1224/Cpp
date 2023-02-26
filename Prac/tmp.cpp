#include <iostream>
#include <string>
using namespace std;
int main(){
    // string input_name;
    // int input_num;
    // cin>>input_name;
    // cin>>input_num;
    // cout<<input_name+" is "<<to_string(input_num)<<" years old. "<<endl;
    string str1, str2;
    getline(cin,str1);
    int count=10;
    // cin.getline(??,int); ?? char or string? 
    char s[10];
    cin.getline(s, count);
    cout<<"\""<<s<<"\""<<endl;
    cout<<"\""<<str1<<"\""<<endl;
    int count_str1, count_s;
    count_str1=str1.length();
    count_s=str2.size();
    return 0;
}