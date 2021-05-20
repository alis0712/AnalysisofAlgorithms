# Analysis of Algorithms
In this project I worked on building an algorithm for Newton's method, which is often considered a greedy algorithm. Newton’s method is a root-finding algorithm which is extensively used in the field of numerical methods. The root-finding algorithm produces better approximations to the roots of a real valued function. 

I was asked to approximate the following values using Newton’s method and they are:
1) √2
2) sin (0.75)

For √2 the results were as follows:

![1](https://user-images.githubusercontent.com/62857780/119001428-f646e000-b959-11eb-8fa9-a870900eec9f.JPG)

For sin(0.75) the results were as follows: 

![1](https://user-images.githubusercontent.com/62857780/119003951-22636080-b95c-11eb-9545-60e9bb3f4440.JPG)

Based on the results I saw that if we compare problems 1 and 2, we notice that it takes roughly twice the amount of time for the solution to converge in problem 2 than in problem 1, we also notice that the solution tends to converge in a quadratic form thus proving the hypothesis that Newton’s method exhibits a quadratic convergence. Below is derivation for quadratic convergence: 

![1](https://user-images.githubusercontent.com/62857780/119004868-ec72ac00-b95c-11eb-92f3-eb577d9f075b.JPG)

![1](https://user-images.githubusercontent.com/62857780/119004949-01e7d600-b95d-11eb-87b0-0ed25a1d05ce.JPG)
