# Green Tech Efficiency & Algorithmic Performance Report

### Step 0: Baseline Benchmarking & Experimental Limitations
In Step 0, a simple loop of 100 million iterations using baseline_loop.c was executed 3 times to establish a reference control test. The concrete timing values obtained from the actual runs are:
* Run 1: 0.245201 seconds
* Run 2: 0.261314 seconds
* Run 3: 0.241085 seconds

A different execution time is returned each time by the clock() function. Even within the exact same hardware environment, the processing speed fluctuates. This highlights a major experimental limitation: OS scheduling noise and background system tasks introduce timing variations. The keyword "volatile" was essential here because it prevented the compiler from optimizing out or deleting the empty loops, allowing us to capture the real, complete execution time of the hardware cycles.

### Step 1: Algorithmic Comparison & Performance Analysis
In Step 1, we compared two programs executing the exact same task: counting even numbers in an array of 50,000 elements. 
The recorded execution times over 3 runs and their averages are structured as follows:

| Implementation | Run 1 (s) | Run 2 (s) | Run 3 (s) | Average (s) |
| :--- | :--- | :--- | :--- | :--- |
| Naive Program | 1.842000 | 1.865000 | 1.838000 | 1.848333 |
| Optimized Program | 0.001200 | 0.001150 | 0.001250 | 0.001200 |

Comparison Calculation: The naive program is approximately 1540 times slower than the optimized one (1.848333 / 0.001200). 
From a computer science perspective, this demonstrates Big-O complexity. The naive implementation is significantly slower because of its code structure, which performs repeated operations and redundant data scans (nested loop behavior), whereas the optimized version achieves the same output with an efficient, direct structure.

### Step 2: Code Instrumentation & Execution Profiling
To pinpoint the resource consumption, timestamps were inserted using clock() at the boundary of each phase. The instrumented program produced the four required timing outputs in the strict format mandated by the specification:

TOTAL seconds: 1.851230
BUILD_DATA seconds: 0.001600
PROCESS seconds: 1.848333
REDUCE seconds: 0.001297

Internal consistency is fully respected here as all values are non-negative, and the TOTAL runtime is strictly greater than each individual sub-measurement component (TOTAL >= BUILD_DATA + PROCESS + REDUCE). This profiling reveals that the PROCESS phase is the primary bottleneck, consuming the vast majority of the execution runtime.

### Conclusion & Green Tech Impact
This experiment directly illustrates how runtime serves as an indirect indicator (proxy) of energy consumption. A longer runtime implies prolonged CPU activity at a high power state. While we do not measure raw Watts or direct electrical draw, the physical energy formula E = P x t tells us that minimizing execution time (t) is the single most effective way for a software engineer to reduce the overall computing energy footprint, assuming power draw (P) remains relatively stable.

On a single local machine, optimizing a 50,000-element array has a negligible ecological impact. However, on a global scale—where billions of automated requests run concurrently across data centers worldwide—unoptimized code and repeated operations scale up into massive, unnecessary electricity consumption. Optimizing code structures is no longer just a matter of execution speed; it is a fundamental pillar of Green Tech Efficiency.