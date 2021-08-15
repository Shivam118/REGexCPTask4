// TASK 4
// Name: Shivam Sharma
/* AIM: Given an integer N, the task is to count the number of ways so that N can be written as the sum of a prime number and twice of a square, 
        i.e. N = 2*A2 + P, where P can be any prime number and A is any positive integer.
    Input: N = 9
    Output: 1
    Explanation:
        9 can be represented as sum of prime number and twice a square in only one way –
        N = 9 = 7 + 2*(1^2)
    Input: N = 15
    Output: 2
    Explanation:
        15 can be represented as sum of prime number and twice a square in two ways –
        N = 15 = 7 + 2 * (2^2)
        N = 15 = 13 + 2 * (1^2)
*/

#include<iostream>
using namespace std;

int Square(int x){
    return x*x;
}
bool isPrime(int eqB){
    if(eqB < 2){
        return false;
    }
    else if(eqB <= 3){
        return true;
    }
    else if(eqB%2 == 0 || eqB%3 == 0){
        return false;
    }
    for(int i = 5; i*i < eqB; i+=6){
        if(eqB%i == 0 || eqB%(i + 2) == 0){
            return false;
        }
    }
    return true;
}


int main(){
    int n, i, eqA, eqB, cnt=0;
    cout<<"Enter Number : ";
    cin>>n;
    for(i=0; i<n; i++){
        eqA = 2*(Square(i));
        eqB = n - eqA;
        if (isPrime(eqB)){
            cnt++;
        }
    }
    cout<<"No. of ways to represent "<<n<<" [as N=2*A^2 + P] : "<<cnt;
    return 0;
}


// for N = 25
// Output = 4