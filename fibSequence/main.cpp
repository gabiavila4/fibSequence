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

int main() {
    // insert code here...
    std::cout << "Hello, World!\n";
    cout << "\n " << fib_seq(10) << endl;
    return 0;
}
