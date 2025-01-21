//=========================calculate sum of numbers from 1 to N

// #include<iostream>
// using namespace std;

// int sumN(int n){
//     int sum = 0;

//     for(int i =1 ; i<=n;i++){
//         sum +=i;
//     }

//     return sum;
// }


// int main(){

//     cout<< "Sum Of 5 :"<< sumN(5)<<endl;
//     cout<< "Sum Of 50 :"<< sumN(50)<<endl;


//     return 0;
// }

//==================================================== Nth Factorial

#include<iostream>
using namespace std;

int factorial(int n){
    int fact= 1;

    for(int i =1 ; i<=n;i++){
        fact *= i;
    }
    return fact;
}


int main(){

    cout << factorial(4) << endl;
    cout << factorial(5) << endl;

    return 0;
}