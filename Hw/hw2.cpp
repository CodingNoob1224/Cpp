#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
class Person {
    private:
        int id, age; // declare all the variables
        string name;
    public:
        void set_data(int a, int b, string str){ // use to set all the data at the same time
            id = a;
            age = b;
            name = str;
        }
        int get_id(){ //use to get id
            return id;
        }
        int get_age(){ //use to get age
            return age;
        }
        string get_name(){ //use to get name
            return name;
        }
};
int main(){
    Person p1,p2,p3;
    p1.set_data(1, 19, "John"); //set data for p1
    p2.set_data(2, 20, "Mary"); //set data for p2
    p3.set_data(3, 21, "Peter"); //set data for p3
    
    // output
    cout<<p1.get_id()<<" "<<p1.get_name()<<" "<<p1.get_age()<<endl; 
    cout<<p2.get_id()<<" "<<p2.get_name()<<" "<<p2.get_age()<<endl;
    cout<<p3.get_id()<<" "<<p3.get_name()<<" "<<p3.get_age()<<endl;
    return 0;
}
