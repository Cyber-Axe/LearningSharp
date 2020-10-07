#include <iostream>
using namespace std;
int main(){
    int *point;
    int num = 1024;
    int &another_num = num;
    num++;
    cout<<*point<<endl;
    cout<<another_num<<endl;
    return 0;
}