## **3.2 Complete Search**

### <a href="/3.2 Complete Search/a. Pre-calculate-able/">**a. Pre-calculate-able**</a>
1. Entry Level: UVa 00750 - 8 Queens Chess ... * (classic backtracking problem; only 92 possible 8-queens positions)
2. UVa 00165 - Stamps * (requires some DP too; can be pre-calculated as h and k are small)
3. UVa 10128 - Queue * (backtracking with pruning; try all N! permutations that satisfy the requirement; 13! will TLE; pre-calculate the results)
4. UVa 10276 - Hanoi Tower ... * (insert a number one by one; 1  N  50)
5. Kattis - cardtrick2 * (n  13, we can simulate the process using queue and precalculate all 13 possible answers)
6. Kattis - foolingaround * (there are only 379 di↵erent values of N where Bob wins; pre-calculateable)
7. Kattis - sgcoin * (we can either brute force short string message; precompute all possible hash values; or come up with O(1) solution)

**Extra UVa**
- 00167
- 00256
- 00347
- 00861
- 10177
- 11085

**Extra Kattis**
- 4thought
- chocolates 
- lastfactorialdigit 
- luckynumber
- mancala,
- primematrix



### <a href="/3.2 Complete Search/b. Iterative (Two Nested Loops)/">**b. Iterative (Two Nested Loops)**</a>
1. Entry Level: Kattis - pet * (very simple 2D nested loops problem)
2. UVa 00592 - Island of Logic * (key idea: there are only 35 ⇤ 2 possible states: the status of each person and whether it is day or night)
3. UVa 01588 - Kickdown * (LA 3712 - NorthEasternEurope06; good iterative brute force problem; beware of corner cases)
4. UVa 12488 - Start Grid * (2 nested loops; simulate overtaking process)
5. Kattis - blackfriday * (2D nested loops; frequency counting)
6. Kattis - closestsums * (sort and then do O(n2) pairings; also available at UVa 10487 - Closest Sums)
7. Kattis - golombrulers * (2D nested loops; additional 1D loops for checking)

**Extra UVa**
- 00105
- 00617
- 01260
- 10041
- 10570
- 12583
- 13018

**Extra Kattis**
- 8queens 
- antiarithmetic
- bestrelayteam
- bikegears 
- kafkaesque
- liga 
- peg 
- putovanje 
- reduction 
- register 
- summertrip 
- telephones 
- tourdefrance



### <a href="/3.2 Complete Search/c. Iterative (Three or More Nested Loops, Easier)/">**c. Iterative (Three or More Nested Loops, Easier)**</a>
1. Entry Level: UVa 00441 - Lotto * (6 nested loops; easy)
2. UVa 00735 - Dart-a-Mania * (3 nested loops; then count)
3. UVa 12515 - Movie Police * (3 nested loops)
4. UVa 12844 - Outwitting the ... * (5 nested loops; scaled down version of UVa 10202; do observations first)
5. Kattis - cudoviste * (4 nested loops; the inner loops is just 2x2; 5 possibilities of crushed cars; skip 2x2 area that contains building)
6. Kattis - npuzzle * (4 nested loops; easy)
7. Kattis - set * (4 nested loops; easy)

**Extra UVa**
- 00154
- 00626 
- 00703 
- 10102 
- 10662 
- 11059 
- 12498 
- 12801

**Extra Kattis**
- mathhomework
- patuljci
- safehouses



### <a href="/3.2 Complete Search/d. Iterative (Three or More Nested Loops, Harder)/">**d. Iterative (Three or More Nested Loops, Harder)**</a>
1. Entry Level: UVa 00386 - Perfect Cubes * (4 nested loops with pruning)
2. UVa 10660 - Citizen attention ... * (7 nested loops; Manhattan distance)
3. UVa 11236 - Grocery Store * (3 nested loops for a, b, c; derive d from a, b, c; check if you have 949 lines of output)
4. UVa 11804 - Argentina * (5 nested loops)
5. Kattis - calculatingdartscores * (6 nested loops; is a*i +b*j + c*k == n)
6. Kattis - lektira * (2 nested loops to try all 2 cutting points plus 1 more loop to actually do the reversing of sub words)
7. Kattis - tautology * (try all 25 = 32 values with pruning; also available at UVa 11108 - Tautology)

**Extra UVa**
- 00253
- 00296 
- 10360 
- 10365 
- 10483 
- 10502 
- 10973 
- 11342 
- 11548,
- 11565 
- 11959 
- 11975 
- 12337

**Extra Kattis**
- goblingardenguards 
- misa 
- medals



### <a href="/3.2 Complete Search/e. Iterative (Permutation)/">**e. Iterative (Permutation)**</a>
1. Entry Level: UVa 11742 - Social Constraints * (try all permutations)
2. UVa 00234 - Switching Channels * (LA 5173 - WorldFinals Phoenix94; use next permutation; simulation)
3. UVa 01064 - Network * (LA 3808 - WorldFinals Tokyo07; permutation of up to 5 messages; simulation; mind the word ‘consecutive’)
4. UVa 12249 - Overlapping Scenes * (LA 4994 - KualaLumpur10; try all permutations; a bit of string matching)
5. Kattis - dancerecital * (try all R! permutations; compare adjacent routines)
6. Kattis - dreamer * (try all 8! permutations of digits; check if the date is valid; output earliest valid date)
7. Kattis - veci * (try all permutations; get the one that is larger than X)

**Extra UVa**
- 00140 
- 00146 
- 00418 
- 01209 
- 11412

**Extra Kattis**
- classpicture 
- towering 
- victorythroughsynergy



### <a href="/3.2 Complete Search/f. Iterative (Combination)/">**f. Iterative (Combination)**</a>
1. Entry Level: UVa 00639 - Don’t Get Rooked * (generate 2^(4x4) = 2^16 combinations and prune)
2. UVa 01047 - Zones * (LA 3278 - WorldFinals Shanghai05; try all 2^n subsets of towers to be taken; use inclusion-exclusion principle)
3. UVa 11659 - Informants * (try all 220 bitmask and check)
4. UVa 12694 - Meeting Room ... * (LA 6606 - Phuket13; it is safest to just brute force all 220 possibilities; greedy solution should be possible too)
5. Kattis - geppetto * (try all 2N subsets of ingredients)
6. Kattis - squaredeal * (try all 3! permutations of rectangles and try all 23 combinations of rectangle orientations; test figure 1.a and 1.b conditions)
7. Kattis - zagrade * (try all subsets of bracket pairs to be removed)

**Extra UVa**
- 00435
- 00517 
- 11205 
- 12346 
- 12348 
- 12406 
- 13103

**Extra Kattis**
- buildingboundaries
- doubleplusgood 
- perket



### <a href="/3.2 Complete Search/g. Try All Possible Answer(s)/">**g. Try All Possible Answer(s)**</a>
1. Entry Level: Kattis - flexible * (try all possible answers)
2. UVa 00188 - Perfect Hash * (3 nested loops; try until an answer is found)
3. UVa 00725 - Division * (try all possible answers)
4. UVa 10908 - Largest Square * (4 nested loops; try all odd square lengths)
5. Kattis - communication * (try all possible bytes; apply the bitmask formula)
6. Kattis - islands * (try all possible subsets; prune the non-contiguous ones  (only 55 valid bitmasks between [0..1023]); check the ‘island’ property)
7. Kattis - walls * (try whether the answer is 1/2/3/4; or Impossible; use up to 4 nested loops)

**Extra UVa**
- 00102
- 00471

**Extra Kattis**
- cookingwater 
- gradecurving 
- heirsdilemma 
- owlandfox 
- parking2 
- prinova 
- savingforretirement



### <a href="/3.2 Complete Search/h. Mathematical Simulation (Complete Search), Easier/">**h. Mathematical Simulation (Complete Search), Easier**</a>
1. Entry Level: Kattis - easiest * (complete search; sum of digits)
2. UVa 00382 - Perfection * (do trial division)
3. UVa 01225 - Digit Counting * (LA 3996 - Danang07; N is small)
4. UVa 10346 - Peter’s Smoke * (interesting simulation problem)
5. Kattis - growlinggears * (physics of parabola; derivation; try all gears)
6. Kattis - trollhunt * (brute force; simple)
7. Kattis - videospeedup * (brute force; simple for loop; do as asked)

**Extra UVa**
- 00100
- 00371
- 00654
- 00906 
- 01583
- 10783
- 10879
- 11001
- 11150
- 11247
- 11313
- 11877
- 11934
- 12527
- 12938
- 13059
- 13131

**Extra Kattis**
- aboveaverage 
- dicecup 
- harshadnumbers 
- socialrunning 
- sodaslurper 
- somesum 
- sumoftheothers 
- tri 
- zamka



### <a href="/3.2 Complete Search/i. Mathematical Simulation (Complete Search), Harder/">**i. Mathematical Simulation (Complete Search), Harder**</a>
1. Entry Level: UVa 00616 - Coconuts, Revisited * (brute force up to pn)
2. UVa 11130 - Billiard bounces * (mirror the billiard table to the right (and/or top); deal with one straight line instead of bouncing lines)
3. UVa 11254 - Consecutive Integers * (use sum of arithmetic progression; brute force all values of r from sqrt(2n) down to 1; stop at the first valid a)
4. UVa 11490 - Just Another Problem * (let missing people = 2 * a², thickness of soldiers = b, derive a formula involving a, b, and the given S)
5. Kattis - crackingrsa * (a bit number theory; solvable with complete search)
6. Kattis - falling * (rework the formula; complete search up to sqrt(D))
7. Kattis - thanosthehero * (for-loop from backwards)

**Extra UVa**
- 00493 
- 00550 
- 00697 
- 00846 
- 10025 
- 10035 
- 11968 
- 12290 
- 12665
- 12792 
- 12895

**Extra Kattis**
- disgruntledjudge
- houselawn 
- lipschitzconstant 
- milestones 
- repeatingdecimal 
- robotopia 
- stopcounting 
- trick



### <a href="/3.2 Complete Search/j. Josephus Problem/">**j. Josephus Problem**</a>
1. Entry Level: UVa 00151 - Power Crisis * (the original Josephus problem)
2. UVa 01176 - A Benevolent Josephus * (LA 2346 - Dhaka01; special case when k = 2; use Josephus recurrence; simulation)
3. UVa 10774 - Repeated Josephus * (repeated special case of Josephus when k = 2)
4. UVa 11351 - Last Man Standing * (use general case Josephus recurrence)
5. Kattis - eenymeeny * (Josephus problem; small n; just simulate)
6. Kattis - musicalchairs * (Josephus variant; brute force)
7. Kattis - toys * (use general case Josephus recurrence)

**Extra UVa**
- 00130
- 00133
- 00305
- 00402
- 00440
- 10015
- 10771

**Extra Kattis**
- coconut



### <a href="/3.2 Complete Search/k. Recursive Backtracking (Easier)/">**k. Recursive Backtracking (Easier)**</a>
1. Entry Level: UVa 10344 - 23 Out of 5 * (5 operands + 3 operators)
2. UVa 00729 - The Hamming ... * (generate all bit strings)
3. UVa 10576 - Y2K Accounting Bug * (generate all; prune; take max)
4. UVa 12840 - The Archery Puzzle * (simple backtracking)
5. Kattis - goodmorning * (we can use backtracking to generate all possible (small) numbers that can be pressed according to the constraints)
6. Kattis - natjecanje * (4 options for each team with kayak: do nothing, pass to left (if damaged), keep to self (if damaged), pass to right (if damaged))
7. Kattis - paintings * (try all possible paintings based on Catherine’s preference; skip hideous color pairs)

**Extra UVa**
- 00380 
- 00487 
- 00524 
- 00529 
- 00571 
- 00598 
- 00628
- 00677 
- 00868
- 10452 
- 10503 
- 10624 
- 10776 
- 10950 
- 11201 
- 11961

**Extra Kattis**
- draughts



### <a href="/3.2 Complete Search/l. Recursive Backtracking (Harder)/">**l. Recursive Backtracking (Harder)**</a>
1. Entry Level: UVa 00208 - Firetruck * (LA 5147 - WorldFinals SanAntonio91; backtracking with some pruning)
2. UVa 00222 - Budget Travel * (LA 5161 - WorldFinals Indianapolis93; cannot use DP ‘tank’ is floating-point; use backtracking)
3. UVa 00307 - Sticks * (sort the sticks in descending length; group similar lengths; brute force the number of sticks; backtracking to check feasibility)
4. UVa 01262 - Password * (LA 4845 - Daejeon10; sort grid columns; process common passwords in lexicographic order; skip two similar passwords)
5. Kattis - dobra * (try all possible 3n changes of ‘ ’ (to a vowel, an ‘L’, or other consonant not ‘L’); prune invalid states; count valid states)
6. Kattis - fruitbaskets * (interesting backtracking problem; compute the small numbers < 200; output all minus this value computed via backtracking)
7. Kattis - pagelayout * (a bit of geometry; O(2^n X n²) iterative bitmask will TLE; need to use recursive backtracking with pruning)

**Extra UVa**
- 00129 
- 00301 
- 00331 
- 00416 
- 00433 
- 00565 
- 10001 
- 10063 
- 10094
- 10460 
- 10475 
- 10582 
- 11052 
- 11753

**Extra Kattis**
- carvet
- primes
- solitaire

