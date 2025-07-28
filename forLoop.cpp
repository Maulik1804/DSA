// break keyword used for exits from loop.

#include <iostream>
using namespace std;

// int main()
// {
//   int n;
//   cin >> n;

// // //   cout << "Printing count from 1 to n: " << endl;
// // //   for(int i = 1; i<=n; i++){
// // //       cout << i << endl;
// // //   }

// // // for (int i=1,j=2,k=3; i>=1 && j>=2 && k>=3; i--,j--,k--){
// // //         cout << i << " " << j << " " << k;
// // //    }

//     for(int i = 1; i<=n; i++){
//         if(i == 2){
//             continue; //skip 2
//         }
//         cout << i << " ";
//     }
// }

// //print sum of 1 to n
// int main(){
//     int n;
//     cin >> n;

//     int sum = 0;
//     for(int i = 1; i<=n; i++){
//         sum += i;
//     }
//     cout << sum;
// }

// //fibonacci series
// int main(){
//     int n = 10;

//     int a = 0;
//     int b = 1;
//     cout << a << " " << b << " ";
//     for(int i = 1; i<=n; i++){
//         int nextNumber = a + b;
//         cout << nextNumber << " ";

//         a = b;
//         b = nextNumber;
//     }
// }

// // Prime number check
// int main(){
//     int n;
//     cin >> n;

//     bool isPrime = 1;
//     for (int i = 2; i<n; i++){
//         if(n % i == 0){
//             cout << n << " is Not a prime Number.";
//             isPrime = 0;
//             break;
//         }
//     }
//     if(isPrime == 1){
//         cout << n << " is a Prime Number.";
//     }
// }

// practice Question
//  int main(){
//      for(int i = 0; i<=15; i += 2){
//          cout << i << " ";
//          if( i&1 ){ //check if LSB is 1 then its odd then continue i++ inside body.
//              continue;
//          }
//          i++;
//      }
//  }

// int main(){
//     for(int i = 0; i<5; i++){
//         for(int j = i; j<=5; j++){
//             cout << i << " " << j;
//         }
//     }
// }
