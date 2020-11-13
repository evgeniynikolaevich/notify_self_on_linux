#include<iostream>
#include <chrono>
#include <thread>


using namespace std;


void notifier(int* time_for_work){
    char x;
    char temp;
    cout << "Press Enter to Continue";
    cin.get(temp);
    if (temp){
    while(*time_for_work != 0){
        *time_for_work++;
        std::this_thread::sleep_for(std::chrono::milliseconds(60));
        cout<<&time_for_work<<endl;
        }
    }
}



int main(){
    int time_for_work = 1560;
    notifier(&time_for_work);

    return 0;
}