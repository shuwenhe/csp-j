#include<iostream>

using namespace std;

int leap(int year){
    if (year%4 == 0 && year % 100 || year % 400 == 0)
        return 1;
    return 0;
}

int main(){
    int year = 2024;
    int l = leap(year);
    cout<<"l = "<<l<<endl;
    return 0;
}