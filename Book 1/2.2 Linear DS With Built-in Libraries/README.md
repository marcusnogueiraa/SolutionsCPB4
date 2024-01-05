## **2.2 Linear DS With Built-in Libraries**

### <a href="/2.2 Linear DS With Built-in Libraries/a. 1D Array Manipulation, Medium/">**a. 1D Array Manipulation, Medium**</a>
1. Entry Level: Kattis - jollyjumpers * (1D Boolean flags to check [1..n-1]; also available at UVa 10038 - Jolly Jumpers)
2. UVa 12150 - Pole Position * (simple manipulation)
3. UVa 12356 - Army Buddies * (similar to deletion in doubly linked lists but we can still use a 1D array for the underlying data structure)
4. UVa 13181 - Sleeping in hostels * (find the largest gap between two Xs; special corner cases at the two end points)
5. Kattis - baloni * (clever use of 1D histogram array to decompose the shots as per requirement)
6. Kattis - downtime * (1D array; use Fenwick Tree-like operation for Range Update Point Query)
7. Kattis - greedilyincreasing * (just 1D array manipulation; this is not the DPLIS problem)

**Extra UVa**
- 00414
- 00482
- 00591
- 10050
- 11192
- 11496
- 11608
- 11875
- 12854
- 12959
- 12996
- 13026

**Extra Kattis**
- erase



### <a href="/2.2 Linear DS With Built-in Libraries/b. 1D Array Manipulation, Harder/">**b. 1D Array Manipulation, Harder**</a>
1. Entry Level: UVa 10978 - Let’s Play Magic * (1D string array)
2. UVa 11222 - Only I did it * (use several 1D arrays)
3. UVa 12662 - Good Teacher * (1D array manipulation; brute force)
4. UVa 13048 - Burger Stand * (use 1D Boolean array; simulate)
5. Kattis - divideby100 * (big 1D character array processing; be careful)
6. Kattis - mastermind * (1D array manipulation to count r and s)
7. Kattis - pivot * (static range min/max query problem; special condition allows this problem to be solvable in O(n) using help of 1D arrays)

**Extra UVa**
- 00230
- 00394
- 00467
- 00665
- 00946
- 11093
- 11850

**Extra Kattis**
- astro
- flippingpatties
- inverteddeck 
- physicalmusic 
- piperotation
- queens 
- rockband 
- traffic
- upsanddownsofinvesting



### <a href="/2.2 Linear DS With Built-in Libraries/c. 2D Array Manipulation, Easier/">**c. 2D Array Manipulation, Easier**</a>
1. Entry Level: Kattis - epigdanceo↵ * (count number of CCs on 2D grid; simpler solution exists: count the number of blank columns plus one)
2. UVa 11581 - Grid Successors * (simulate the process)
3. UVa 12187 - Brothers * (simulate the process)
4. UVa 12667 - Last Blood * (1D+2D arrays to store submission status)
5. Kattis - flowshop * (interesting 2D array manipulation)
6. Kattis - imageprocessing * (interesting 2D array manipulation)
7. Kattis - nineknights * (2D array checks; 8 directions)

**Extra UVa**
- 00541
- 00585
- 10703 
- 10920
- 11040
- 11349 
- 11835 
- 12981

**Extra Kattis**
- compromise
- thisaintyourgrandpascheckerboard



### <a href="/2.2 Linear DS With Built-in Libraries/d. 2D Array Manipulation, Harder/">**d. 2D Array Manipulation, Harder**</a>
1. Entry Level: Kattis - 2048 * (just a 2D array manipulation problem; utilize symmetry using 90 degrees rotation(s) to reduce 4 cases into 1)
2. UVa 00466 - Mirror Mirror * (core functions: rotate and reflect)
3. UVa 11360 - Have Fun with Matrices * (do as asked)
4. UVa 12291 - Polyomino Composer * (do as asked; a bit tedious)
5. Kattis - flagquiz * (array of array of strings; be careful; duplicates may exists)
6. Kattis - funhouse * (2D array manipulation; note the direction update)
7. Kattis - rings2 * (more challenging 2D array manipulation; special output formatting style)

**Extra UVa**
- 00101
- 00434
- 00512
- 00707
- 10016
- 10855
- 12398

**Extra Kattis**
- apples
- falcondive
- keypad
- prva
- tetris



### <a href="/2.2 Linear DS With Built-in Libraries/e. Sorting, Easier/">**e. Sorting, Easier**</a>
1. Entry Level: Kattis - basicprogramming2 * (a nice problem about basic sorting applications)
2. UVa 10107 - What is the Median? * (find median of a growing/dynamic list of integers; we can use multiple calls of nth element in algorithm)
3. UVa 12541 - Birthdates * (LA 6148 - HatYai12; sort; youngest + oldest)
4. UVa 12709 - Falling Ants * (LA 6650 - Dhaka13; although the problem has a complicated story, it has a very easy solution with sort routine)
5. Kattis - height * (insertion sort simulation)
6. Kattis - mjehuric * (a direct simulation of a bubble sort algorithm)
7. Kattis - sidewayssorting * (stable sort or sort multi-fields of columns of a 2D array; ignore case)

**Extra UVa**
- 00400
- 00855
- 10880
- 10905
- 11039
- 11588
- 11777
- 11824
- 12071
- 12861
- 13113

**Extra Kattis**
- closingtheloop
- cups
- judging



### <a href="/2.2 Linear DS With Built-in Libraries/f. Sorting, Harder/">**f. Sorting, Harder**</a>
1. Entry Level: Kattis - sortofsorting * (stable sort or sort multi-fields)
2. UVa 01610 - Party Games * (LA 6196 - MidAtlanticUSA12; median)
3. UVa 10258 - Contest Scoreboard * (multi-fields sorting; use sort; similar to UVa 00790)
4. UVa 11321 - Sort Sort and Sort * (be careful with negative mod!)
5. Kattis - classy * (sort using modified comparison function; a bit of string parsing/tokenization)
6. Kattis - dyslectionary * (sort the reverse of original string; output formatting)
7. Kattis - musicyourway * (stable sort; custom comparison function)

**Extra UVa**
- 00123
- 00450
- 00790
- 10194
- 10698
- 11300

**Extra Kattis**
- addemup
- booking
- chartingprogress 
- dirtydriving 
- gearchanging 
- includescoring 
- lawnmower 
- longswaps
- retribution 
- zipfsong



### <a href="/2.2 Linear DS With Built-in Libraries/g. Special Sorting Problems/">**g. Special Sorting Problems**</a>
1. Entry Level: UVa 11462 - Age Sort * (standard Counting Sort problem)
2. UVa 00612 - DNA Sorting * (needs O(n2) stable sort)
3. UVa 11495 - Bubbles and Buckets * (requires O(n log n) merge sort)
4. UVa 13212 - How many inversions? * (requires O(n log n) merge sort)
5. Kattis - bread * (inversion index; hard to derive)
6. Kattis - magicsequence * (Radix Sort in custom base to avoid TLE)
7. Kattis - mali * (Counting Sort two arrays; greedy matching largest+smallest at that point)

**Extra UVa**
- 00299
- 10327

**Extra Kattis**
- excursion
- froshweek
- gamenight
- sort
- ultraquicksort



### <a href="/2.2 Linear DS With Built-in Libraries/h. Bit Manipulation/">**h. Bit Manipulation**</a>
1. Entry Level: UVa 11933 - Splitting Numbers * (simple bit exercise)
2. UVa 10264 - The Most Potent Corner * (heavy bitmask manipulation)
3. UVa 12571 - Brother & Sisters * (precalculate AND operations)
4. UVa 12720 - Algorithm of Phil * (observe the pattern in this binary to decimal conversion variant; involves modular arithmetic)
5. Kattis - bitbybit * (be very careful with and + or corner cases)
6. Kattis - deathstar * (can be solved with bit manipulation)
7. Kattis - snapperhard * (bit manipulation; find the pattern; the easier version is also available at Kattis - snappereasy *)

**Extra UVa**
- 00594 
- 00700 
- 01241 
- 10469 
- 11173 
- 11760
- 11926

**Extra Kattis**
- bits 
- hypercube 
- iboard 
- zebrasocelots

**Others**
- IOI 2011 - Pigeons (simpler with bit manipulation)



### <a href="/2.2 Linear DS With Built-in Libraries/i. Big Integer26/">**i. Big Integer26**</a>
1. Entry Level: UVa 10925 - Krakovia * (Big Integer addition and division)
2. UVa 00713 - Adding Reversed ... * (use StringBu↵er reverse())
3. UVa 10523 - Very Easy * (Big Integer addition, multiplication, power)
4. UVa 11879 - Multiple of 17 * (Big Integer: mod, divide, subtract, equals)
5. Kattis - primaryarithmetic * (not a Big Integer problem but a simulation of basic addition)
6. Kattis - simpleaddition * (that A+B on Big Integer question)
7. Kattis - wizardofodds * (if K is bigger than 350, the answer is clear; else just check if 2^K >= N)

**Extra UVa**
- 00424
- 00465 
- 00619 
- 00748
- 01226 
- 01647 
- 10013
- 10083 
- 10106
- 10198 
- 10430 
- 10433 
- 10464
- 10494 
- 10519
- 10992 
- 11448 
- 11664 
- 11821,
- 11830 
- 12143 
- 12459 
- 12930

**Extra Kattis**
- disastrousdoubling
- generalizedrecursivefunctions
- threepowers



### <a href="/2.2 Linear DS With Built-in Libraries/j. Stack/">**j. Stack**</a>
1. Entry Level: Kattis - evenup * (use stack to solve this problem)
2. UVa 00514 - Rails * (use stack to simulate the process)
3. UVa 01062 - Containers * (LA 3752 - WorldFinals Tokyo07; simulation with stack; maximum answer is 26 stacks; O(n) solution exists)
4. UVa 13055 - Inception * (nice problem about stack)
5. Kattis - pairingsocks * (simulation using two stacks; just do as asked)
6. Kattis - restaurant * (simulation with stack-based concept; drop plates at stack 2 (LIFO); use move 2->1 to reverse order; take from stack 1 (FIFO))
7. Kattis - throwns * (use stack of egg positions to help with the undo operation; be careful of corner cases involving modulo operation)

**Extra UVa**
- 00127
- 00732
- 10858

**Extra Kattis**
- dream 
- reversebinary
- symmetricorder 
- thegrandadventure



### <a href="/2.2 Linear DS With Built-in Libraries/k. Special Stack-based Problems/">**k. Special Stack-based Problems**</a>
1. Entry Level: UVa 00551 - Nesting a Bunch of ... * (bracket matching; use stack)
2. UVa 00673 - Parentheses Balance * (similar to UVa 00551; classic)
3. UVa 00727 - Equation * (Infix to Postfix conversion problem)
4. UVa 11111 - Generalized Matrioshkas * (bracket matching with twists)
5. Kattis - bungeebuilder * (clever usage of stack; linear pass; bracket (mountain) matching variant)
6. Kattis - circuitmath * (postfix calculator problem)
7. Kattis - delimitersoup * (bracket matching; stack)


### <a href="/2.2 Linear DS With Built-in Libraries/l. List\Queue\Deque/">**l. List\Queue\Deque**</a>
1. Entry Level: Kattis - joinstrings * (all ‘+’ operations must be O(1))
2. UVa 11988 - Broken Keyboard ... * (rare linked list problem)
3. UVa 10172 - The Lonesome Cargo ... * (use both queue and stack)
4. UVa 12108 - Extraordinarily Tired ... * (simulation with N queues)
5. Kattis - integerlists * (use deque for fast deletion from front (normal) & back (reversed list); use stack to reverse the final list if it is reversed at the end)
6. Kattis - sim * (use list and its iterator)
7. Kattis - teque * (all operations must be O(1))

**Extra UVa**
- 00246
- 00540
- 10935
- 11797
- 12100
- 12207

**Extra Kattis**
- backspace
- ferryloading3 
- ferryloading4 
- foosball 
- server 
- trendingtopic