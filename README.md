
*****NOTE: My cousin borrowed my computer one month ago for his CS assignment using his github account, but I didn't realize. So this folder might shows two coordinators, one is "edwardyang12"(he), one is "ziyanc080"(me). But all the works are done by myself, without any collaboration with him or other people. I have already explained to the professor, and he suggested me write down here to inform the TA and graders. Thanks!******************************************

# HW1 EE599 - Computing Principles for Electrical Engineers
 
- Plesae clone the repository, edit [README.md](README.md) to answer the questions, and fill up functions to finish the hw.
- For non-coding quesitions, you will find **Answer** below each question. Please write your answer there.
- For coding questions, please make sure that your code can run ```blaze run/test```. In this homework, you will need to fill up [cpplib.cc](src/lib/cpplib.cc), [q5_student_test.cc](tests/q5_student_test.cc), [q6_student_test.cc](tests/q6_student_test.cc), [q7_student_test.cc](tests/q7_student_test.cc) for question  5, 6, 7.
- For submission, please push your answers to Github before the deadline.
- Deadline: Friday, September 4th by 6:30 pm
- Total: 120 points. 100 points is considered full credit.

## Question 1 (10 Points. Medium)

Use proof by contradiction to prove that the FindMax function always finds the maximum value in the input vector.

```cpp
int FindMax(std::vector<int> &inputs) {
   if (inputs.size() == 0) {
       return -1;
   }
   int result = INT32_MIN;
   for (auto n : inputs) {
       if (n > result) {
           result = n;
       }
   }
   return result;
}
```

Answer:

Assume to the contrary, this function cannot find the maximum value.

Suppose we have a number X, which is the largest number in input vector but not founded. 
When this number is sent to this for loop, and reach the if statement, since this value is greater than all others numbers, the "result" will takes the value of X.
Hence, the result takes the largest value.
But out assumption is, the result is not the largest number, which is contradictory to our proved.
SO our assumption is false. This function can find the largest number.

## Question 2 (20 Points. Medium)

What is the time complexity of the below functions?

```cpp
int Example1(int n) {
   int count = 0;                                  1
   for (int i = n; i > 0; i /= 2) {                logn
       for (int j = 0; j < i; j++) {               logn
           count += 1;                             1
       }   
   }
   return count;                                   1
}
```

Answer:

Run Time Analysis:
For outer for loop, since i get halved every time when this loop get excuted, the execution time is O(logn)
For inner for loop, since j adds from 0 to i, the executation time is the value of i each time.
Since we think normal arithmatic operation takes O(1) to complete, we simply ignore it here.
As a result, the total complexity is O(logn*logn) = O((logn)2)   

T(n) Calculation:
if n=0, T(n)=2
if n>0: T(n)=1+logn*(logn+1)+1 = O(logn*logn) 

```cpp
void Example2(int a = 0, int n) {
   int i = n;                                       1
   while (i > 0) {                                  logn
       a += i;                                      1
       i /= 2;                                      1
   }
}
```

Answer:

Run Time Analysis:
We analyse how many times the while loop get execueted. As shown here, i is initialized to n, and get halved every time this while loop get execueted.
As a result, it get execueted log(n) times.
Since we think normal arithmatic operation takes O(1) to complete, we simply ignore it here.
As a result, the total complexity is O(logn)

T(n) Calculation:
if n=0, T(n)=1
if n>0, T(n)=1+logn*2=O(logn)

```cpp
void Example3(int n) {
   int count = 0;                                   1
   for (int i=n/2; i<=n; i++) {                     n/2
       for (int j=1; j<=n; j = 2 * j) {             logn
           for (int k=1; k<=n; k = k * 2) {         logn
               count++;                             1
           }
       }
   }
}
```

Answer:

Run Time Analysis:
For outer loop, since i increases by 1 every time, and initializd at n/2, so it get executed n/2 times.
For 2nd outer loop, since j double every time until it reaches n, and initializes at 1, so it get executed logn times
For inner loop, the condition is similar to j, so it get executed logn times.
We think normal arithmatic operation takes O(1) to complete.
So the total complexity is O(n/2 * logn * logn) = O (nlogn*logn)

T(n) Calculation:
if n=0, T(n)=1
if n>0, T(n)=1 + n/2 * (logn * logn) = O (nlogn*logn)

```cpp
void Example4(int n) {
   int count = 0;                                   1
   for (int i=0; i<n; i++)                          n
       for (int j=i; j< i*i; j++)                   i2-i
           if (j%i == 0)                            1
           {
               for (int k=0; k<j; k++)              j
                   cout<<"*";                       1
           }
}
```

Answer:

Run Time Analysis:
For outer for loop, since i increases by 1 every time, and initializes at 0, so it get executed n times.
For inner loop, since j increases by 1 every time until reaches i*i, and initializes at i, so it get execueted i2-i each time.
For the k loop, since this only execuetes when j%i==0, which happens when j is the multiple of i. So, this get execueted when j=1i, 2i, 3i,,,ii, which is i times for each i

For the k loop itself, k loop is running j times for each j, so the running time for k loop is i+2i+3i+ ... +ii = O(i3) for each i

T(n) Calculation:
if n=0, T(n)=1

                      n
if n>0, T(n)=1 + n +  Σ( i2-i+i3 ) = O(n4)
                      i=0
(n4 means is n to the power of 4)

## Question 3 (10 Points. Easy)

What does it mean when we say that the Merge Sort (MS) algorithm is asymptotically more efficient than the Bubble Sort (BS) algorithm? Support your choice with an explanation.

1. MS will always be a better choice for small inputs
2. MS will always be a better choice for large inputs
3. BS will always be a better choice for small inputs
4. MS will always be a better choice for all inputs

Answer:

My answer: 4

Explanation: 

For bubble sort, in the worst case, every elements need to repeadtedly pass through the whole array, and the run time is O(n2)
For merge sort, when we have 1 input, the run time is O(1). When the inputs number increase, the run time T(n)=2T(n/2)+ 𝜭 (n) = O (nlogn)
So merge sort is better for all inputs in case of run time complexity (worst case).
 
## Question 4 (10 Points. Easy)

Create an account on GitHub and Stack Overflow and paste the link to your profile.

Answer:

GitHub profile link:

https://github.com/ziyanc080

Stack Overflow profile link:

https://stackexchange.com/users/19489462/ziyan-chen

## Question 5 (15 Points. Easy)

Write a simple function ```std::string CPPLib::PrintIntro()``` in [cpplib.cc](src/lib/cpplib.cc) to print your name, email, and any information about you that you want (e.g. your major, your expertise, your interests, etc) and write a test using GTest for your finction in [tests/q5_student_test.cc](tests/q5_student_test.cc).
We will run your code and see your printout!

Please create your test cases and run the following command to verify the functionality of your program.
```
bazel test tests:q5_student_test
```

## Question 6 (25 Points. Medium)

 Write a function ```std::vector<int> CPPLib::Flatten2DVector(const std::vector<std::vector<int>> &input)``` in [cpplib.cc](src/lib/cpplib.cc) to flatten a 2D vector into a 1D vector.

Example:\
Input: inputs = [[1, 2, 3, 4], [5, 6], [7, 8]].\
Output: result = [1, 2, 3, 4, 5, 6, 7, 8].

Write several tests using GTest for your function in [tests/q6_student_test.cc](tests/q6_student_test.cc).\
(Hint: inculde cases with empty vectors)

Please create your test cases and run the following command to verify the functionality of your program.
```
bazel test tests:q6_student_test
```

## Question 7 (30 Points. Medium)

Write a function ```double CPPLib::CalFactorial(int N)``` in [cpplib.cc](src/lib/cpplib.cc) using recursion to find the factorial of any number. Your function should accept positive numbers and return the factorial value. Further, write several tests using GTest for your function in [tests/q7_student_test.cc](tests/q7_student_test.cc) and compute the time complexity of your implementation.

*Definition of the factorial function*\
In mathematics, the factorial of a positive integer n, denoted by n!, is the product of all positive integers less than or equal to n:

```
n ! = n x (n - 1) x (n - 2) x (n - 3) ... (3) x (2) x (1)
```

For example, 4! = 4 × 3 × 2 × 1 = 24.\
The value of 0! is 1. For negative input, please return -1.

Please create your test cases and run the following command to verify the functionality of your program.
```
bazel test tests:q7_student_test
```

For question 5, 6, 7, if you want to run all the tests at the same time , you could run
```
bazel test tests:tests
```

Answer:

