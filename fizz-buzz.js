let n=1;
let a=[];
for(n=1;n<=100;n++)
{
    if(n%3== 0 && n%5 == 0)
    {
    
        a.push("FizzBuzz");
    }
    else if(n%5 == 0)
    {

        a.push("Buzz");
    }
    else if(n%3 == 0){

        a.push("Fizz");
    }
    else{

        a.push(n);
    }
}
console.log(a);