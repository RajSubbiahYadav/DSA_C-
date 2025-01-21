#include<iostream>
using namespace std;
// .
// // int PrintFunction(){
// // cout<< "hello\n";            //
// // return 3;
// // }

// // int main(){
// // cout<<PrintFunction();
// //     return 0;
// // }

//sum of 2 number
double sum(double a , double b){
    double sum = a + b;
    return sum;
}

//min of 2 nums
int minofTwo(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main(){
    cout << minofTwo(50,5);

    return 0;
}

