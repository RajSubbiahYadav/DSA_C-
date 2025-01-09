//========================================== square pattern
// * * * * 
// * * * *
// * * * *
// * * * *
// #include <iostream>
// using namespace std;

// int main()
// {

//     int n = 4;

//     for (int i = 1; i <= n; i++)
//     { // outerloop
//         for (int j = 1; j <= n; j++)
//         { // innerloop
//             cout << "* ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

//================================

// #include <iostream>
// using namespace std;

// int main(){

//     int n = 5
//     ;

//     for (int i = 0; i < n; i++){               // outerloop
//         char ch = 'A';
//         for (int j = 0; j < n; j++){           // innerloop
//             cout << ch<<" ";
//             ch = ch + 1;

//         }
//         cout << endl;
//     }

//     return 0;
// }

// A B C D E 
// A B C D E
// A B C D E
// A B C D E
// A B C D E

//==============================================
// #include <iostream>
// using namespace std;

// int main(){

//     int n = 4;
//     int num  = 1;

//     for (int i = 0; i < n; i++){               // outerloop
        
//         for (int j = 0; j < n; j++){           // innerloop
//             cout << num<<"  ";
//             num ++;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// // 1  2  3  
// // 4  5  6
// // 7  8  9

//=====================================================
// #include <iostream>
// using namespace std;

// int main(){

//     int n = 4;
//     char num  = 'A';

//     for (int i = 0; i < n; i++){               // outerloop
        
//         for (int j = 0; j < n; j++){           // innerloop
//             cout << num<<"  ";
//             num ++;
//         }
//         cout << endl;
//     }
//     cout << "after pattern: "<<num << endl;
//     return 0;
// }

// // A  B  C  D  
// // E  F  G  H
// // I  J  K  L
// // M  N  O  P
// // after pattern: Q

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ Triangle Pattern

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<< "Enter Number: ";
//     cin>> n; 

//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < i + 1; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Enter Number: 5
// *
// * *
// * * *
// * * * *
// * * * * *

//===============================================

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<< "Enter Number: ";
//     cin>> n; 
//     int num=1;
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < i + 1; j++){
//             cout << num<<" ";
//         }
//         num++;
//         cout << endl;
//     }
//     return 0;
// }

// Enter Number: 4
// 1
// 2 2
// 3 3 3
// 4 4 4 4


//=========================

// #include <iostream>
// using namespace std;

// int main(){

//     int n;
//     cout<< "Enter Number: ";
//     cin>> n;
//     char ch ='A';
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < i + 1; j++){
//             cout << ch <<" ";
//         }
//         ch++;
//         cout << endl;
//     }
//     return 0;
// }

// Enter Number: 5
// A
// B B
// C C C
// D D D D
// E E E E E

//===================================================

// #include <iostream>
// using namespace std;

// int main(){

//     int n;
//     cout<< "Enter Number: ";
//     cin>> n;
//     for (int i = 0; i < n; i++){
//         int num = 1;
//         for (int j = 1; j <= i + 1; j++){
//             cout << j <<" ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Enter Number: 5
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

//=================================================== REVERSE TRIANGLE PATTERN

// #include <iostream>
// using namespace std;

// int main(){

//     int n;
//     cout<< "Enter Number: ";
//     cin>> n;
//     for (int i = 0; i < n; i++){
//         int num = 1;
//         for (int j = i+1 ; j >0; j--){
//             cout << j <<" ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Enter Number: 5
// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1

// #include <iostream>
// using namespace std;

// int main(){

//     int n;
//     cout<< "Enter Number: ";
//     cin>> n;
    
//     for (int i = 0; i < n; i++){
//         for (char j = 'A' + i ; j >='A'; j--){  
//             cout << j<<" ";    
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Enter Number: 5
// A
// B A
// C B A
// D C B A
// E D C B A
//===================================================== FLOYD'S TRIANGLE 

// #include <iostream>
// using namespace std;

// int main(){

//     int n;
//     cout<< "Enter Number: ";
//     cin>> n;
//     int num = 1;
//     for (int i = 0; i < n; i++){
//         for (int j = 0 ; j <i+1; j++){
//             cout << num <<" ";
//             num++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Enter Number: 4
// 1
// 2 3
// 4 5 6
// 7 8 9 10

// #include <iostream>
// using namespace std;

// int main(){

//     int n;
//     cout<< "Enter Number: ";
//     cin>> n;
//     char num = 'A';
//     for (int i = 0; i < n; i++){
//         for (int j = 0 ; j <i+1; j++){
//             cout << num <<" ";
//             num++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Enter Number: 5
// A
// B C
// D E F
// G H I J
// K L M N O

//+++++++++++++++++++++++++++++++++++++++++++++++++++++INVERTED TRIANGLE PATTERN

// #include <iostream>
// using namespace std;

// int main(){

//     int n;
//     cout<< "Enter Number: ";
//     cin>> n;
    

//     for (int i = 0; i < n; i++){

//         for (int j = 0 ; j < i; j++){           //spaces
//             cout <<" "<<" ";
//         }
//         for(int j = 0; j<n-i; j++){             //numbers
//                 cout <<(i+1)<<" ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Enter Number: 4
// 1 1 1 1
//   2 2 2
//     3 3
//       4


// #include <iostream>
// using namespace std;

// int main(){

//     int n;
//     cout<< "Enter Number: ";
//     cin>> n;
    
// char ch = 'A';
//     for (int i = 0; i < n; i++){

//         for (int j = 0 ; j < i; j++){           //spaces
//             cout <<" "<<" ";
//         }
//         for(int j = 0; j<n-i; j++){             //numbers
//                 cout <<ch<<" ";
//         }
//         ch++;
//         cout << endl;
//     }
//     return 0;
// }

// Enter Number: 5
// A A A A A
//   B B B B
//     C C C
//       D D
//         E

//++++++++++++++++++++++++++++++++++++++++++++++++++++++pyramid pattern

// #include <iostream>
// using namespace std;

// int main(){

//     int n;
//     cout<< "Enter Number: ";
//     cin>> n;
    
//     for (int i = 0; i < n; i++){
//         // spaces : n - i - 1
//         for (int j = 0 ; j < n -i -1; j++){           //spaces
//             cout <<" "<<" ";
//         }
//         //number1
//         for(int j = 1; j<=i+1; j++){             //numbers
//                 cout <<j <<" ";
                
//         }
//         //number2
//         for(int j = i ; j >=1 ;j--){
//             cout<<j<<" ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Enter Number: 4
//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1

//++++++++++++++++++++++++++++++++++++++++++++++++++++++  HALLOW DAIMOND PATTERN

// #include <iostream>
// using namespace std;

// int main(){

//     int n;
//     cout<< "Enter Number: ";
//     cin>> n;
//     //top
//     for (int i = 0; i < n; i++){
       
//         for (int j = 0 ; j < n -i -1; j++){           //spaces
//             cout <<" "; 
//         }
//         cout<<"*";
    
//         if (i != 0){
      
//         for (int j = 0 ; j < 2 * i -1; j++){           //spaces
//             cout <<" ";
//         }
//         cout<<'*';
//         }       
//         cout << endl;
//     }
//     //bottom
//     for (int i = 0; i < n - 1; i++){
//         for (int j = 0 ; j < i +1; j++){           //spaces
//             cout <<" "; 
//         }
//         cout<<"*";
//         if(i != n-2){
//             for (int j = 0 ; j < 2* (n-i)-5; j++){           //spaces
//             cout <<" ";
//         }
//         cout<<'*';
//         }
//         cout<< endl;
//     }
    
//     return 0;
// }

// Enter Number: 5
//     *
//    * *
//   *   *
//  *     *
// *       *
//  *     *
//   *   *
//    * *
//     *

//===========================================================BUTTERFLY PATTERN

#include<iostream>
using namespace std;

int main(){

int n;
    cout<< "Enter Number: ";
    cin>> n;
//top
for(int i = 0 ; i<n ; i++){
    for(int j = 0 ; j<i+1 ;j++){
        cout<<"#"<<" ";
    }

    for (int j = 0; j < 2 * (n - i)-2; j++) {
            cout << " "<<" ";
        }
        for (int j = 0; j <= i; j++) {
            cout << "#"<<" ";
        }
    cout<<endl;
}
//bottom
for(int i = 0 ; i<n ; i++){
    for(int j = 0; j < n-i; j++) {
        cout<<"#"<<" ";
    }

    for (int j = 0; j < 2 * i; j++) {
            cout << " "<<" ";
        }
        for (int j = 0; j <n-i; j++) {
            cout << "#"<<" ";
        }
    
    cout<<endl;
}


    return 0;
}