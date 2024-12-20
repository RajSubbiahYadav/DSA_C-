//while loop ;
//for loop;
//do while

#include <iostream>
using namespace std;

int main(){
    // int n =20;
    // int i=1;

    // while(i <=n){
    //     cout<<i <<" ";
    //     i++;
    // }
//======================================

    // int n=10;

    // for(int i=0; i<=10; i +=2){
    //     cout<<i<<" ";
    // }/
//======================================

    // int n;
    // int sum=0;
    // cout <<"Enter N:";
    // cin>>n;

    // // int i=1;
    // // while(i<=n){
    // //     i++;
    // //     sum += i;
    // // };
    // // cout << sum;

    // for(int i =1;i<=n; i++){
    //     sum += i; 
    //     if(i==50){                  //the loop will break after 50
    //         break;
    //     }
    // }
    // cout<<"sum :"<<sum;

//============================================= even   

    // int n;
    // int sum=0;
    // cout <<"Enter N:";
    // cin>>n;

    // for(int i =1;i<=n; i++){
    //     if(i%2==0){
    //         cout<< i<< " ";
    //         sum += i;
    //     }
    // }
    // cout<<endl<<"sum :"<<sum;
//==================================odd

    // int n;
    // int sum=0;
    // cout <<"Enter N:";
    // cin>>n;

    // for(int i =1;i<=n; i++){      //for
    //     if(i%2!=0){
    //         cout<< i<< " ";
    //         sum += i;
    //     }
    // }
    // cout<<endl<<"sum :"<<sum;

    // int i =1;                       //while
    // while(i<=n){
    //     i++;
    //     if(i%2!=0){
    //         cout<< i<< " ";
    //         sum += i;
    //     }
    // }
    // cout<<endl<<"sum :"<<sum;


//=========================================prime no

    int n ;
    bool isPrime = true;

    cout <<"Enter N:";
    cin>>n;

    for(int i =2; i <= n-1;i++){            // (i * i < n)
        if(n%i==0){
            isPrime= false;
            break;
        }
    }

    if(isPrime==true){
        cout<<"Prime";
    }else{
        cout<<"Non Prime";
    }


    return 0;
}