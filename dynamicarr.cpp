// Dynamic array

#include <iostream>
using namespace std;

class Dynamic{
    public:
        int size = 2;
        int arr[2] = {};
        int filled = 0;

        void check(){
            if(filled == size){
                expand_arr();
            }
        }

        void expand_arr(){
            cout << "hi" << endl;
            int size = 2 * size;
            int new_arr[size] = {};
            for(int i = 0; i < size/2; i++){
                new_arr[i] = arr[i];
            }
        }

        void append(int number){
            for(int i = 0; i < size; i++){
                if(arr[i] == 0){
                    arr[i] = number;
                    filled++;
                    check();
                    break;
                }

            }
        };
};

int main(){

    Dynamic example;
    example.append(1);
    example.append(3);


    return 0;
}