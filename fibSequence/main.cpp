//
//  main.cpp
//  fibSequence
//
//  Created by Gabriela Avila on 9/8/25.
//

#include <iostream>
using namespace std;
int fib_seq(int n)
{
    //1)  How many times does your function get called when you call it with the input 10? 109 times
    //2) Consider the sequence of recursive calls that happens. What is a source of inefficiency? since I call my function twice within itself with n - 1 and n - 2 there is times where the same thing will be called multiple times. For example if I originally call fib_seq(10) then fib_seq(8) will be called twice. Once when n = 10 and another time when n = 9.
    static int count = 0;
    count ++;
    cout << count << " " << endl;
    if (n > 2)
    {
        return fib_seq(n-1) + fib_seq(n-2);
    }else if (n == 0)
    {
        return 0;
    }else {
        return 1;
    }
    return 0;
}

int fib_seq_m(int n)
{
    static vector<int> memo = vector<int>(100, -1);
    static int count = 0;
    count ++;
    cout << count << " " << endl;
    if (n > 0 && memo[n] != -1)
    {
        return memo[n];
    }
    int ans = 1;
    if (n == 0)
    {
        return memo[n] = 0;
    }else if (n ==1){
        return memo[n] = 1;
    }else{
        ans = fib_seq_m(n - 1) + fib_seq_m(n - 2);
    }
    memo[n] = ans;
    return ans;
    //4) How many times does your function get called when you call it with the input 10? 19 times
    
}

int main() {
    
    std::cout << "Hello, World!\n";
    cout << "\n " << fib_seq(10) << endl;
    cout << "\n " << fib_seq_m(10) << endl;
    
    //fib sequence with a loop
    int n = 10;
    int n1 = 0;
    int n2 = 1;
    int nextTerm;
        if (n == 0){
            cout << 0;
        }else if (n == 1){
            cout << 1;
        }

        int countt = 0;
        for (int i = 2; i <= n; ++i) {
            nextTerm = n1 + n2;
            countt ++;
            n1 = n2;
            n2 = nextTerm;
            cout << countt << " \n";
        }
    //3) How many iterations of your loop occur when the function is called with input 10? 9 times
        cout << nextTerm;
      
    
    
    return 0;
}
