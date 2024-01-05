## **2.4 DS With Our Own Libraries**

### <a href="/2.4 DS With Our Own Libraries/a. Graph Data Structures Problems/">**a. Graph Data Structures Problems**</a>
1. Entry Level: UVa 11991 - Easy Problem from ... * (Adjacency List)
2. UVa 00599 - The Forrest for the Trees * (V E = number of CCs; use a bitset of size 26 to count the number of vertices that have some edge)
3. UVa 10895 - Matrix Transpose * (transpose adjacency list)
4. UVa 11550 - Demanding Dilemma * (graph DS; incidence matrix)
5. Kattis - abinitio * (combo: EL input, AM as working graph DS, AL output (in hash format); all operations must be O(V ) or better)
6. Kattis - chopwood * (Pr¨ufer sequence; use priority queue)
7. Kattis - traveltheskies * ((graph) DS manipulation; an array of ALs (one per each day); simulate the number of people day by day)

**Extra UVa**
- 10928

**Extra Kattis**
- alphabetanimals
- flyingsafely
- railroad
- weakvertices



### <a href="/2.4 DS With Our Own Libraries/b. Union-Find Disjoint Sets/">**b. Union-Find Disjoint Sets**</a>
1. Entry Level: Kattis - unionfind * (basic UFDS; similar to UVa 00793)
2. UVa 01197 - The Suspects * (LA 2817 - Kaohsiung03; CCs)
3. UVa 01329 - Corporative Network * (LA 3027 - SouthEasternEurope04; interesting UFDS variant; modify the union and find routine)
4. UVa 10685 - Nature * (find the set with the largest item)
5. Kattis - control * (LA 7480 - Singapore15; simulation of UFDS; size of set; number of disjoint sets)
6. Kattis - ladice * (size of set; decrement one per usage)
7. Kattis - almostunionfind * (new operation: move; idea: do not destroy the parent array structure; also available at UVa 11987 - Almost Union-Find)

**Extra UVa**
- 00793
- 10158
- 10507
- 10583
- 10608
- 11690

**Extra Kattis**
- chatter
- forests
- more10
- swaptosort
- tildes
- virtualfriends



### <a href="/2.4 DS With Our Own Libraries/c. Tree-related Data Structures/">**c. Tree-related Data Structures**</a>
1. Entry Level: Kattis - fenwick * (basic Fenwick Tree; use long long)
2. UVa 11402 - Ahoy, Pirates * (Segment Tree with lazy updates)
3. UVa 11423 - Cache Simulator * (clever usage of Fenwick Tree and large array; important hint: look at the constraints carefully)
4. UVa 12299 - RMQ with Shifts * (Segment Tree with a few point (not range) updates; RMQs)
5. Kattis - justforsidekicks * (use six Fenwick Trees, one for each gem type)
6. Kattis - moviecollection * (LA 5902 - NorthWesternEurope11; not a stack but a dynamic RSQ problem; also available at UVa 01513 - Movie collection)
7. Kattis - supercomputer * (easy problem if we use Fenwick Tree)

**Extra UVa**
- 00297
- 01232
- 11235
- 11297
- 11350
- 12086
- 12532

**Extra Kattis**
- turbo
- worstweather