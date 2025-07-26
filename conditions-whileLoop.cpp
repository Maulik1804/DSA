#include <iostream>
using namespace std;

// int main(){
//     int a = 5;
//     int b = 10;

//     if(a > b){
//         cout << "a is greater then b." << endl;
//     } else{
//         cout << "a is less then b." << endl;
//     }
// }

// int main() {
// 	int a,b;
// 	cout << "Enter value of a :";
// 	cin >> a ; //it dont read tab,space and enter for that we want to use cin.get() >> n;
// 	cout << "Enter value of b :";
// 	cin >> b; //used to take input from user
// 	if(a > b) {
// 		cout << "a is greater then b." << endl;
// 	} else if( b > a) {
// 		cout << "b is greater then a." << endl;
// 	} else {
// 	    cout << "number is 0." <<endl;
// 	}
// }

// int main(){
//     int a = 9;

//     if ( a == 9){
//         cout << "Niney" << endl;
//     }else if (a > 0){
//         cout << "positive";
//     }else{
//         cout << "negative";
//     }
//     cout << a;
// }

// int main(){
//     char a;
//     cout << "enter the value of a :";
//     cin >> a ;

//     if (a >= 'a' && a <= 'z'){
//         cout << "This is lowwercase letter.";
//     }else if(a >= 'A' && a <= 'Z'){
//         cout << "This is uppercae letter.";
//     }else if( a >= '0' && a <= '9'){
//         cout << "This is Number.";
//     }
// }

// // While loop
//  int main(){
//      int i = 0;
//      int n;
//      cout << "Enter the value of n : ";
//      cin >> n;

//      while(i<=n){
//          cout << i << endl;
//          i++;
//      }
//  }

// //print the sum of 1 to n
// int main(){
//     int sum = 0;
//     int i = 1;
//     int n;
//     cout << "Enter the value of n : ";
//     cin >> n;

//     while(i<=n){
//         sum = sum + i;
//         if(i == n ){
//             cout << "value of sum :" << sum << endl;
//         }
//         i++;
//     }
// }

// // print sum of even Number
// int main(){
//     int sum = 0;
//     int i = 1;
//     int n;
//     cout << "Enter value of n:";
//     cin >> n;

//     while(i<=n){
//         if((i % 2) == 0){
//             sum = sum + i;
//         }
//         i++;
//     }
//     cout << "sum :" << sum << endl;
// }

// // fahrenheit to celsius
// int main(){
//     float fahrenheit , celsius;
//     cout << "Enter the value in fahrenheit : ";
//     cin >> fahrenheit;

//     celsius = (fahrenheit - 32) * 5.0 / 9.0;

//     cout << "Temprature in celsius : " << celsius << endl;
// }

// prime or not
int main()
{
    int n;
    cout << "Enter the Number you Want to check: ";
    cin >> n;

    int i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "Not a prime number.";
            break;
        }
        else
        {
            cout << "It is a prime number.";
            break;
        }
        i++;
    }
}
