#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Person {
    public:
        int id, age, weight, height; // declare all the variables
        float bmi;
        string name;
        float CalcMBI() { //a function use to calculate the BMI
            return (float) weight / ((height*0.01) * (height*0.01));
        }
        void infoShow(){ //a function use to show the information
            cout<< "ID: "<<id<<"\nname: "<<name<<"\nAge: "<<age<<"\nBMI: "<<bmi<<endl;
        }

        Person(int ID, string Name, int Age, int Weight, int Height) { //constructor
            id = ID, name = Name, age = Age, weight = Weight, height = Height; 
            bmi = CalcMBI();
        }
};
int main(){
    Person p1(1, "Yun", 19, 50, 165), p2(2, "Yang", 20, 57, 174), p3(3, "Xuan", 18, 63, 178);
    p1.infoShow(); //call function to show the information of p1
    p2.infoShow(); //call function to show the information of p1
    p3.infoShow(); //call function to show the information of p1
    
    return 0;
}
