//21

// function userDetails(user){
//     if(user.gender === "Male"){
//       console.log(`Hi Mr ${user.name}, How are you !!. You must be ${user.age} years old`);
//     }
//     else if(user.gender === "Female"){
//         console.log(`Hi Mrs ${user.name}, How are you !!. You must be ${user.age} years old`);
//     }
//     else{
//         console.log(`Hi ${user.name}, How are you !!. You must be ${user.age} years old`);
//     }

//     if(user.age>18){
//         console.log("You are eligible to vote");

//     }
//     else { 
//         console.log("Sorry you are not eligble for voting");
//     }
// }

// let user = {
//     name : "Vikhyat",
//     age : 23,
//     gender : "Male"
// };

// userDetails(user);


//Q2
// function arrNumbers(arr){
//     new_arr=[];
//     for (let i = 0 ; i<arr.length ; i++){
//         if(arr[i]%2===0){
//             new_arr.push(arr[i]);
//         }
//     }   
//     return new_arr;
// }

// let numbers = [1,2,3,4,5,6,7,8,9,10];

// result = arrNumbers(numbers);
// console.log(result);


//q3 with filters 
// function isEven(num){
//     if(num%2==0)
//         return num;
// }

// let numbers = [1,2,3,4,5,6,7,8,9,10];

// result = numbers.filter(isEven);
// console.log(result);


//q4

function age(users){
    return users.filter(agecheck);

    function agecheck(ages){
        if (ages.age>18)
        return ages    
        }

}

const users = [{
		name: "Harkirat",
		age: 17
	}, {
		name: "Vikhyat",
		age: 23
	}
]

result = age(users);
console.log(result);

