#include <iostream>
using namespace std;

// // pattern 1
// int main()
// {
//     int n;
//     cout << "Enter the value of n :";
//     cin >> n;

//     int i = 1;

//     while(i <= n){
//         int j = 1;
//         while(j <= n){
//             cout << "*";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// //pattern 2
// int main(){
//     int n;
//     cout << "Enter the value of n :";
//     cin >> n;

//     int i = 1;
//     while(i<=n){

//         int j = 1;
//         while(j <= n){
//             cout << i;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// //pattern 3
// int main(){
//     int n;
//     cout << "Enter the value of n :";
//     cin >> n;

//     int i = 1;
//     while(i <= n){
//         int j = 1;
//         while(j<=n){
//             cout << j;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// //pattern 4
// int main(){
//     int n;
//     cout << "Enter the value of n :";
//     cin >> n;

//     int i = 1;
//     while(i <= n){
//         int j = 1;
//         while(j<=n){
//             cout << n-j+1;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// //pattern 5
// int main(){
//     int n;
//     cout << "Enter the value of n :";
//     cin >> n;

//     int count = 1;
//     int i = 1;
//     while(i <= n){
//         int j = 1;
//         while(j<=n){
//             cout << count << " ";
//             count ++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// //pattern 6
// int main(){
//     int n;
//     cout << "Enter the value of n :";
//     cin >> n;

//     int i = 1;
//     while(i <= n){
//         int j = 1;
//         while(j <= i){
//             cout << "*";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// //pattern 7
// int main(){
//     int n;
//     cout << "Enter the value of n :";
//     cin >> n;

//     int i = 1;
//     while(i <= n){
//         int j = 1;
//         while(j <= i){
//             cout << i;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// //pattern 8
// int main(){
//     int n;
//     cout << "Enter the value of n :";
//     cin >> n;

//     int count = 1;
//     int i = 1;
//     while(i <= n){
//         int j = 1;
//         while(j <= i){
//             cout << count << " ";
//             count++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// //pattern 9
// int main(){
//     int n;
//     cout << "Enter the value of n :";
//     cin >> n;

//     int i = 1;
//     while(i <= n){
//         int j = 1;
//         while(j <= i){
//             cout << (i+j-1);
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// //pattern 10
// int main(){
//     int n;
//     cout << "Enter the value of n :";
//     cin >> n;

//     int i = 1;
//     while(i <= n){
//         int j = 1;
//         while(j <= i){
//             cout << (i-j+1) << " "; //second way is take int value = i; or value--;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// //pattern 11
// int main() {
// 	int n;
// 	cout << "Enter the value of n: ";
// 	cin >> n;

// 	char value = 'A';
// 	int i = 1;
// 	while (i <= n) {
// 		int j = 1;
// 		while ( j <= n) {
// 		    // char ch = 'A' + i - 1;
// 			cout << value; //cout << ch;
// 			j++;
// 		}
// 		cout << endl;
// 		value++;
// 		i++;
// 	}
// }

// //pattern 12
// int main() {
// 	int n;
// 	cout << "Enter the value of n: ";
// 	cin >> n;

// 	int i = 1;
// 	while (i <= n) {
// 		int j = 1;
// 		while ( j <= n) {
// 		    char ch = 'A' + j - 1;
// 		    cout << ch;
// 			j++;
// 		}
// 		cout << endl;
// 		i++;
// 	}
// }

// //pattern 13
// int main(){
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     char ch = 'A';
//     int i = 1;
//     while(i <= n){
//         int j = 1;
//         while(j <= n){
//             cout << ch;
//             ch++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// //pattern 14
// int main(){
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     char i = 1;
//     while(i <= n){
//         char j = 1;
//         while(j <= n){
//             char ch = 'A' + i + j - 2;
//             cout << ch;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// //pattern 15
// int main(){
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     char i = 1;
//     while(i <= n){
//         char j = 1;
//         while(j <= i){
//             char ch = 'A' + i - 1;
//             cout << ch;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// //pattern 16
// int main(){
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     char ch = 'A';
//     char i = 1;
//     while(i <= n){
//         char j = 1;
//         while(j <= i){
//             cout << ch;
//             ch++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// //pattern 17
// int main(){
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     int i = 1;
//     while(i <= n){
//         int j = 1;
//         while(j <= i){
//             char ch = 'A' + i + j - 2;
//             cout << ch;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// //pattern 18
// int main(){
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     int i = 1;
//     while(i <= n){
//         int j = 1;
//         // char start = 'A' + n - i;
//         while(j <= i){
//             char ch = 'A' + n + j - i - 1;
//             cout << ch;
//             // start++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// //pattern 19 (already solved this,but it was using second way)
// int main(){
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     int i = 1;
//     while(i <= n){
//         int j = 1;
//         char start = 'A' + i - 1;
//         while(j <= n){
//             char ch = start;
//             cout << ch;
//             start++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// //pattern 20
// int main(){
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     int i=1;
//     while(i<= n){
//         int space = n-i;
//         while(space){
//             cout << " ";
//             space--;
//         }
//         int j = 1;
//         while(j <= i){
//             cout << "*";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// //pattern 21
// int main() {
// 	int n;
// 	cout << "Enter the value of n: ";
// 	cin >> n;

// 	int i=1;
// 	while(i<= n) {
// 		int j = i;
// 		while(j <= n) {
// 			cout << "*";
// 			j++;
// 		}
// 		cout << endl;
// 		i++;
// 	}
// }

// //pattern 22
// int main() {
// 	int n;
// 	cout << "Enter the value of n: ";
// 	cin >> n;

// 	int i=1;
// 	while(i<= n) {
// 		int space = i-1;
//         while(space){
//             cout << " ";
//             space--;
//         }
//         int j = i;
// 		while(j <= n) {
// 			cout << "*";
// 			j++;
// 		}
// 		cout << endl;
// 		i++;
// 	}
// }

// //pattern 23
// int main() {
// 	int n;
// 	cout << "Enter the value of n: ";
// 	cin >> n;

// 	int i=1;
// 	while(i<= n) {
// 		int space = n-i;
//         while(space){
//             cout << " ";
//             space--;
//         }
//         int j = 1;
// 		while(j <= i) {
// 			cout << i;
// 			j++;
// 		}
// 		cout << endl;
// 		i++;
// 	}
// }

// //pattern 24
// int main() {
// 	int n;
// 	cout << "Enter the value of n: ";
// 	cin >> n;

//     int value = 1;
// 	int i=1;
// 	while(i<= n) {
// 		int space = n-i;
//         while(space){
//             cout << " ";
//             space--;
//         }
//         int j = 1;
// 		while(j <= i) {
// 			cout << value;
// 			value++;
// 			j++;
// 		}
// 		cout << endl;
// 		i++;
// 	}
// }

// //pattern 25
// int main() {
// 	int n;
// 	cout << "Enter the value of n: ";
// 	cin >> n;

// 	int i=1;
// 	while(i<= n) {
// 		int space = i - 1;
//         while(space){
//             cout << " ";
//             space--;
//         }
//         int j = i;
// 		while(j <= n) {
// 			cout << j;
// 			j++;
// 		}
// 		cout << endl;
// 		i++;
// 	}
// }

// //pattern 26(find pattern)
// int main() {
// 	int n;
// 	cout << "Enter the value of n: ";
// 	cin >> n;

// 	int i=1;
// 	while(i<= n) {
// 		int space = n-i;
//         while(space){
//             cout << " ";
//             space--;
//         }
//         int j = 1;
// 		while(j <= i) {
// 			cout << j ;
// 			j++;
// 		}
// 		int k = 1;
// 		while(k <= i-1){
// 		    cout << i - k;
// 		    k++;
// 		}
// 		cout << endl;
// 		i++;
// 	}
// }

// pattern 26
int main()
{
    int n;
    cout << "Enter the value of n:";
    cin >> n;

    int count = 5;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= count)
        {
            cout << j << " ";
            j++;
        }

        int star = i - 1;
        while (star)
        {
            cout << "*" << " " << "*" << " ";
            star--;
        }
        int k = 5;
        while (k >= i)
        {
            cout << k - i + 1 << " ";
            k--;
        }
        cout << endl;
        i++;
        count--;
    }
}