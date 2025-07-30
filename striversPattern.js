//pattern using javaScript

// //pattern 16
// let n = 5;
// for(let i = 1; i<=n; i++){
//     let line = "";
//     for(let j = 1; j<=i; j++){
//         line += String.fromCharCode(65 + i - 1);
//     }
//     console.log(line);
// }

// //pattern 17
// let n = 4;
// for(let i = 1; i<=n; i++) {
// 	let line = "";
// 	let space = n-i;
// 	while(space) {
// 		line += " ";
// 		space--;
// 	}
// 	for(let j = 1; j<=i; j++) {
// 		line += String.fromCharCode(65 + j - 1)
// 	}
// 	let start = String.fromCharCode(65 + i -2);
// 	for(let j = 1; j<=i-1; j++) {
// 		line += start;
// 	    start = String.fromCharCode(start.charCodeAt(0) - 1);
// 	}
// 	console.log(line);
// }

// //pattern 18
// let n = 5;
// for(let i = 1; i<=n; i++){
//     let line = "";
//     for(let j = 1; j<=i; j++){
//         let ch = String.fromCharCode(65 + n - i + j - 1);//Turns the number into letters (65 = 'A')
//         line = line + ch;
//     }
//     console.log(line); //every print of console it store string in new line
// }

// //pattern 19
// let n = 5;
// for(let i = 1; i<=n; i++) {
// 	let line = "";
// 	for(let j = 1; j<=n-i+1; j++) {
// 		line += "*";
// 	}
// 	let space = i-1;
// 	while(space) {
// 		line += "  ";
// 		space--;
// 	}
// 	for(let j =1; j<=n-i+1; j++) {
// 		line += "*";
// 	}
// 	console.log(line);
// }
// for(let i = 1; i<=n; i++) {
// 	let line = "";
// 	for(let j = 1; j<=i; j++) {
// 		line += "*";
// 	}
// 	let space = n-i;
// 	while(space) {
// 		line += "  ";
// 		space--;
// 	}
// 	for(let j =1; j<=i; j++) {
// 		line += "*";
// 	}
// 	console.log(line);
// }

// // pattern 20
// let n = 5;
// for(let i = 1; i<=n; i++){
//     let line = "";
//     for(let j = 1; j<=i; j++){
//         line += "*";
//     }
//     space = n-i;
//     while(space){
//         line += "  ";
//         space--;
//     }
//     for(let j = 1; j<=i; j++){
//         line += "*";
//     }
//     console.log(line);
// }
// for(let i = 1; i<=n; i++){
//     let line = "";
//     for (let j = 1; j<=n-i; j++){
//         line+="*";
//     }
//     let space = i;
//     while(space){
//         line += "  ";
//         space--;
//     }
//     for(let j = 1; j<=n-i; j++){
//         line += "*";
//     }
//     console.log(line);
// }

// // pattern 21
// let n = 5;
// for(let i = 1; i<=n; i++){
//     let line = "";
//     for(let j = 1; j<=n; j++){
//         if(i==1 || j==1 || i==n || j==n) line += "*";
//         else line += " ";
//     }
//     console.log(line);
// }

// pattern 22
let n = 4;
let size = n * 2 - 1;
for (let i = 0; i < size; i++) {
  let line = "";
  for (let j = 0; j < size; j++) {
    // find minimm distance to any age (Top,Bottom,left,Right)
    let min = Math.min(i, j, size - i - 1, size - j - 1); //index start from 0 to size-1 so distance from bottom is size-1-j
    line += n - min;
  }
  console.log(line);
}
