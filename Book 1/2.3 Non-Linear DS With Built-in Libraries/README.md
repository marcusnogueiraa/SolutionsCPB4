## **2.3 Non-Linear DS With Built-in Libraries**

### <a href="/2.3 Non-Linear DS With Built-in Libraries/a. Priority Queue/">**a. Priority Queue**</a>
1. Entry Level: Kattis - numbertree * (not a direct priority queue problem, but the indexing strategy is similar to binary heap indexing)
2. UVa 01203 - Argus * (LA 3135 - Beijing04; priority queue simulation)
3. UVa 11997 - K Smallest Sums * (sort the lists; merge two sorted lists using priority queue to keep the K-th smallest sum every time)
4. UVa 13190 - Rockabye Tobby * (similar to UVa 01203; use PQ; use drug numbering id as tie-breaker)
5. Kattis - jugglingpatterns * (PQ simulation; reading comprehension)
6. Kattis - knigsoftheforest * (PQ simulation after sorting the entries by year)
7. Kattis - stockprices * (PQ simulation; both max and min PQ)

**Extra Kattis**
- alehouse 
- clinic 
- guessthedatastructure 
- janeeyre 
- rationalsequence2 
- rationalsequence3



### <a href="/2.3 Non-Linear DS With Built-in Libraries/b. Direct Addressing Table (DAT), ASCII/">**b. Direct Addressing Table (DAT), ASCII**</a>
1. Entry Level: UVa 00499 - What’s The Frequency ... * (ASCII keys)
2. UVa 10260 - Soundex * (DAT for soundex A-Z code mapping)
3. UVa 11340 - Newspaper * (ASCII keys)
4. UVa 11577 - Letter Frequency * (A-Z keys)
5. UVa 12626 - I (love) Pizza * (A-Z keys)
6. Kattis - alphabetspam * (count the frequencies of lowercase, uppercase, and whitespace characters)
7. Kattis - quickbrownfox * (pangram; frequency counting of 26 alphabets)

**Extra UVa**
- 00895
- 10008 
- 10062 
- 10252 
- 10293 
- 10625 
- 12820



### <a href="/2.3 Non-Linear DS With Built-in Libraries/c. Direct Addressing Table (DAT), Others/">**c. Direct Addressing Table (DAT), Others**</a>
1. Entry Level: Kattis - princesspeach * (DAT; linear pass)
2. UVa 01368 - DNA Consensus String * (for each column j, find the highest frequency character among all j-th column of all m DNA strings)
3. UVa 11203 - Can you decide it ... * (count frequency of x/y/z)
4. UVa 12650 - Dangerous Dive * (use 1D Boolean array for each person)
5. Kattis - bookingaroom * (only 100 rooms; use 1D Boolean array)
6. Kattis - busnumbers * (only 1 000 bus numbers; use 1D Boolean array)
7. Kattis - freefood * (only 365 days in a year)

**Extra UVa**
- 00755

**Extra Kattis**
- floppy
- hardware
- relocation



### <a href="/2.3 Non-Linear DS With Built-in Libraries/d. Hash Table (set)/">**d. Hash Table (set)**</a>
1. Entry Level: Kattis - cd * (unordered set is faster than set here; or use modified merge as the input is sorted; also available at UVa 11849 - CD)
2. UVa 10887 - Concatenation of ... * (Use O(MN) algorithm; concatenate all pairs of strings; put them in an unordered set; report set size)
3. UVa 12049 - Just Prune The List * (manipulate unordered multiset)
4. UVa 13148 - A Giveaway * (we can store all precomputed answers— which are given—into unordered set)
5. Kattis - esej * (use unordered set to prevent duplicate)
6. Kattis - greetingcard * (use unordered set; good question; major hint: only 12 neighbors)
7. Kattis - shiritori * (linear pass; use unordered set to keep track of words that have been called)

**Extra Kattis**
- bard 
- boatparts 
- deduplicatingfiles 
- engineeringenglish 
- everywhere 
- icpcawards 
- iwannabe 
- keywords 
- nodup 
- oddmanout 
- pizzahawaii 
- proofs
- securedoors 
- whatdoesthefoxsay



### <a href="/2.3 Non-Linear DS With Built-in Libraries/e. Hash Table (map), Easier/">**e. Hash Table (map), Easier**</a>
1. Entry Level: Kattis - recount * (use unordered map; frequency counting)
2. UVa 00902 - Password Search * (read char by char; count word freq)
3. UVa 11348 - Exhibition * (use unordered map and unordered set to count frequency; check uniqueness)
4. UVa 11629 - Ballot evaluation * (use unordered map)
5. Kattis - competitivearcadebasketball * (use unordered map)
6. Kattis - conformity * (use unordered map to count frequencies of the sorted permutations of 5 ids; also available at UVa 11286 - Conformity)
7. Kattis - grandpabernie * (use unordered map plus (sorted) vector)

**Extra UVa**
- 00484
- 00860 
- 10374 
- 10686 
- 12592

**Extra Kattis**
- babelfish
- costumecontest 
- election2 
- haypoints 
- marko 
- metaprogramming 
- rollcall 
- variablearithmetic



### <a href="/2.3 Non-Linear DS With Built-in Libraries/f. Hash Table (map), Harder/">**f. Hash Table (map), Harder**</a>
1. Entry Level: Kattis - conversationlog * (use combo DS: unordered map, set, plus (sorted) vector)
2. UVa 00417 - Word Index * (generate all words with brute force up to depth 5 and give them appropriate indices; add to unordered map)
3. UVa 10145 - Lock Manager * (use unordered map and unordered set)
4. UVa 11860 - Document Analyzer * (use unordered set to get unique strings and use unordered map with linear scan to get the answer)
5. Kattis - addingwords * (use unordered map)
6. Kattis - awkwardparty * (use unordered map to running max and running min; report the largest di↵erence)
7. Kattis - basicinterpreter * (the harder version of Kattis - variablearithmetic; tedious; be careful; print string inside double quotes verbatim)

**Extra UVa**
- 10132
- 11917

**Extra Kattis**
- iforaneye
- magicalcows 
- minorsetback 
- parallelanalysis 
- recenice
- snowflakes



### <a href="/2.3 Non-Linear DS With Built-in Libraries/g. Balanced BST (set)/">**g. Balanced BST (set)**</a>
1. Entry Level: UVa 10815 - Andy’s First Dictionary * (use set and string; sorted output)
2. UVa 00978 - Lemmings Battle * (simulation; use multiset)
3. UVa 11136 - Hoax or what * (use multiset)
4. UVa 13037 - Chocolate * (we can use set or a sorted array)
5. Kattis - bst * (simulate special BST [1..N] insertions using set)
6. Kattis - candydivision * (complete search from 1 to √N; insert all divisors into set for automatic sorting and elimination of duplicates)
7. Kattis - compoundwords * (use set extensively; iterator)

**Extra UVa**
- 00501
- 11062

**Extra Kattis**
- caching
- ministryofmagic 
- missinggnomes 
- orphanbackups 
- palindromicpassword 
- raceday 
- raidteams



### <a href="/2.3 Non-Linear DS With Built-in Libraries/h. Balanced BST (map)/">**h. Balanced BST (map)**</a>
1. Entry Level: Kattis - doctorkattis * (Max Priority Queue with frequent (increaseKey) updates; use map)
2. UVa 10138 - CDVII * (use map to map plates to bills, entrance time, and position; sorted output)
3. UVa 11308 - Bankrupt Baker * (use map and set)
4. UVa 12504 - Updating a ... * (use map; string to string; order needed)
5. Kattis - administrativeproblems * (use several maps as the output (of spy names) has to be sorted; be careful of corner cases)
6. Kattis - kattissquest * (use map of priority queues; other solutions exist)
7. Kattis - srednji * (go left and right of B; use fast data structure like map to help determine the result fast)

**Extra UVa**
- 00939
- 10420

**Extra Kattis**
- baconeggsandspam 
- cakeymccakeface 
- fantasydraft 
- hardwoodspecies 
- notamused 
- opensource 
- problemclassification 
- warehouse 
- zoo



### <a href="/2.3 Non-Linear DS With Built-in Libraries/i. Order Statistics Tree/">**i. Order Statistics Tree**</a>
1. Entry Level: UVa 10909 - Lucky Number * (involves dynamic selection; use pb ds, Fenwick Tree, or augment balanced BST)
2. Kattis - babynames * (dynamic rank problem; use two pb ds)
3. Kattis - continuousmedian * (dynamic selection problem; specifically the median values; pb ds helps)
4. Kattis - cookieselection * (map large integers to up to 600K integers; use pb ds or Fenwick Tree and the select(median) operation of Fenwick Tree)
5. Kattis - gcpc * (dynamic rank problem; pb ds helps)

