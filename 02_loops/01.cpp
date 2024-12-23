// // sum of all number form 1 to N which are divisible by 3
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     int sum = 0;

//     cout << "Enter N:";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         if (i % 3 == 0)
//         {
//             sum += i;
//         }
//     }

//     cout << "sum :" << sum;
//     return 0;
// }

//=============================================now print factorial of num N

#include <iostream>
using namespace std;
int main(){
int n ;

cout<<"Enter N:";
cin>>n;
for (int i = 1; i<= n; ++i){
    int fact=1;
    for(int j =1; j<=i ; ++j){
        fact *=j;
    }
    cout<< "fact "<< i<<" is " << fact<<endl ;
}
    return 0;
}
