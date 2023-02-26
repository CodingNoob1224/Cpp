#include <iostream>
#include <cstdlib>
using namespace std;
class Win{
    public:
        int height;
        int width;

        void getvalue(){
            cin >> height >> width; //scanf("%d %d", &height, &width);

        }
        int calculate(void){
            return height * width;
        }
        void show(void){
            cout<<"Area: "<<calculate()<<endl;
        }

    Win(int a, int b) {
        height = a;
        width = b;
    }

};
int main(){
    Win win1(1, 2);
    // win1.getvalue();
    // cin>>win1.height>>win1.width;
    win1.show();
    // win2.show();
    
    return 0;
}