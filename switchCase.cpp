#include <iostream>
using namespace std;

// int main()
// {
//     int n = 1;
//     char ch = 'A';

//     switch(ch){ //takes only integer and character value not take float and string value
//         case 1: cout << "This is First.";
//                 cout << "Again 1."
//         break;

//         case 2: cout << "This is Second.";
//         break;

//         case 3: cout << "This is Third.";
//         break;

//         case 'A': switch(n){
//             case 1 : cout << "This is " << n << " inside " << ch;
//             break;
//         }
//         break;

//         default: cout << "This is Default value.";
//     }
//     cout << endl;

//     return 0;
// }


// int main(){
//     int n = 1;
//     while(1){
//         switch(n){
//             case 1: cout << "This is 1.";
//             break;
//         }
//         exit(0); //exit with 0 means success. exit with non-zero values mean failure.
//     }
// }


// // continue : is not valid in switch case;
// // if you want to use continue inside swith case ensure the switch is inside loop.(if Switch inside loop then continue is valid.)
// int main(){
//     int n = 2;
//     switch(n){
//         case 1: cout << "This is one";
//         break;

//         case 2: cout << "This is two";
//         continue;

//         default: "This is default";
//     }
// }

// //calculator program
// int main() {
// 	int a;
// 	cout << "Enter the value of a: ";
// 	cin >> a;

// 	int b;
// 	cout << "Enter the value of b: ";
// 	cin >> b;

// 	char op;
// 	cout << "Enter the operation you want to perform: ";
// 	cin >> op;

// 	switch(op){
// 	    case '+': cout << "a + b = " << a+b;
// 	    break;

// 	    case '-': cout << "a - b = " << a-b;
// 	    break;

// 	    case '*': cout << "a * b = " << a*b;
// 	    break;

// 	    case '/': cout << "a / b = " << a/b;
// 	    break;

// 	    case '%': cout << "a % b = " << a%b;
// 	    break;

// 	    default: cout << "Enter valid operator." << endl;
// 	}
// }

int main() {
	int amount;
	cout << "Enter the amount: ";
	cin >> amount;
	int notes100 = 0, notes50 = 0, notes20=0, notes10 = 0, notes1 = 0;
	switch(1) {
	case 1:
		notes100 = amount/100;
		amount = amount%100;
		cout<< "100 Rs notes: " << notes100 << endl;

	case 2:
		notes50 = amount/50;
		amount = amount%50;
		cout<< "50 Rs notes: " << notes50 << endl;

	case 3:
		notes20 = amount/20;
		amount = amount%20;
		cout<< "20 Rs notes: " << notes20 << endl;

	case 4:
		notes10 = amount/10;
		amount = amount%10;
		cout<< "10 Rs notes: " << notes10 << endl;

	case 5:
		notes1 = amount;
		cout<< "1 Rs notes: " << notes1 << endl;
		break;
	}
}
