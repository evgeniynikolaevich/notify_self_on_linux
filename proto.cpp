#include<iostream>
#include <chrono>
#include <thread>


using namespace std;


void notifier(){
    char x;
    cout << "Press Enter to Continue";
   char temp;
    cin.get(temp);
    int counter =0;
    if (temp){
    while(counter != 1560){
        counter++;
        std::this_thread::sleep_for(std::chrono::milliseconds(60));
        cout<<counter<<endl;

    }
    }
}



int main(){

    notifier();

    return 0;
}