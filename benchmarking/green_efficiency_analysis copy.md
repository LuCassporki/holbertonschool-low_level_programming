In Step 0, a simple loop of 100 million iterations using baseline_loop.c is executed 3 times. 
A different execution time is returned each time by the clock() and CLOCKS_PER_SEC functions. 
This means that even in the exact same environment, the processing speed can change because of the operating system (OS). 
Scientifically, this acts as a reference measurement, like a control test. 
The keyword volatile is important because it prevents the compiler from deleting the loops, allowing us to see their real, complete execution time.



In Step 1, we compare two programs that do the exact same thing: counting even numbers in an array of 50,000 elements. 
One is naive, and the other is optimized. 
Scientifically, this shows how important the choice of an algorithm is for performance and execution speed, clearly illustrating Big-O complexity. 
We calculate the average of the three execution runs to get a realistic reference, 
and then we do a comparison calculation to find out exactly how much slower the naive program is compared to the optimized one.



In Step 2, we insert a time counter using clock() at the beginning and at the end of each phase of a program. 
This allows us to locate exactly which part of the algorithm takes the most time and therefore consumes the most energy. 
By identifying the most demanding parts of the code, we can know precisely what needs to be optimized.



In conclusion, this brings us back to the energy formula:
E = P x t
where energy (E) in Joules is equal to power (P) in Watts multiplied by time (t) in seconds. 
In this formula, energy is directly linked to time and electrical power. 
Since the electrical power delivered in a computer system stays roughly the same, 
energy mainly depends on time as the real variable in our case.


If energy depends on time, and if we want to save resources and improve global performance, 
it is essential that the execution time is as short as possible, meaning our optimization must be as good as possible. 
But to do that, we first need to find the cause of this extra time. 
It is like a factorization in mathematics: 
you need to find the system that gives the same result but with the most efficient structure possible. 


This is the main goal of the project. 
On a single machine, the impact is very small, but on a global scale, 
with billions of users making requests all over the world on the internet, these numbers add up. 
Every bit of unoptimized time and energy becomes significant. 


Welcome to the topic of Green Tech Efficiency.
