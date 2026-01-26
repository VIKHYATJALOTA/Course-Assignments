//Q1
// let color = "blue";
// let height = 172;
// let like_pizza = true;

// console.log(`My favourite color is ${color} and my height is ${height} cm and do I like pizza ?? ${like_pizza}`);


//q2

// function sum(a,b){
//     let c= a + b; 
//     console.log(`The sum of two number is ${c}` );
// }

// sum(1,2);

//q3

// function canVote(age){
//     if (age>18){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// vote = canVote(19);
// console.log(`Can this person vote : ${vote}`)

//q4
// function oddEven(num){
//     if (num%2===0){
//         console.log("The number is even");
//     }
//     else{
//          console.log("The number is odd");
//     }
//  }
//  oddEven(2);

//q5

function sum(num){
    let sum=0;
    for (let i=1;i<=num;i++){
        sum+=i;
    }
    return sum;
}
let num = 5;
let result = sum(num);

console.log(`The sum from 1 to ${num} is ${result}`);