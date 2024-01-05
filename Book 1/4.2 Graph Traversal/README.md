## **4.2 Graph Traversal**

### <a href="/4.2 Graph Traversal/a. Finding Connected Components/">**a. Finding Connected Components**</a>

1. Entry Level: Kattis - wheresmyinternet * (check connectivity to vertex 1) [<a href="a. Finding Connected Components/Kattis_wheresmyinternet.cpp">Solution</a>]
2. UVa 00459 - Graph Connectivity * (also solvable with UFDS)
3. UVa 11749 - Poor Trade Advisor * (find the largest CC with highest average PPA; also solvable with UFDS)
4. UVa 11906 - Knight in a War Grid * (DFS/BFS for reachability, several tricky cases; be careful when M = 0, N = 0, or = N)
5. Kattis - dominoes2 * (unlike UVa 11504, we treat SCCs as CCs; also available at UVa 11518 - Dominos 2)
6. Kattis - reachableroads * (report number of CC-1)
7. Kattis - terraces * (group cells with similar height together; if it cannot flow to any other component with lower height, add this CC-size to answer)

**Extra UVa** 
- 00260
- 00280
- 10687
- 11841
- 11902

**Extra Kattis**
- cartrouble 
- daceydice
- foldingacube
- moneymatters
- pearwise
- secuitybadge



### <a href="/4.2 Graph Traversal/b. Flood Fill, Easier/">**b. Flood Fill, Easier**</a>
1. Entry Level: UVa 00572 - Oil Deposits * (count number of CCs) [<a href="b. Flood Fill, Easier/UVa_00572.cpp">Solution</a>]
2. UVa 00352 - The Seasonal War * (count number of CCs; see UVa 00572)
3. UVa 00871 - Counting Cells in a Blob * (find the largest CC size)
4. UVa 11953 - Battleships * (interesting twist of flood fill problem)
5. Kattis - amoebas * (easy floodfill)
6. Kattis - countingstars * (basic flood fill problem; count CCs)
7. Kattis - gold * (flood fill with extra blocking constraint; also available at UVa 11561 - Getting Gold)

**Extra UVa**
- 00469
- 00657
- 00722
- 10336
- 11244
- 11470

**Extra Kattis**
- floodit



### <a href="/4.2 Graph Traversal/c. Flood Fill, Harder/">**c. Flood Fill, Harder**</a>
1. Entry Level: UVa 11094 - Continents * (tricky flood fill; scrolling)
2. UVa 00852 - Deciding victory in Go * (interesting board game ‘Go’)
3. UVa 01103 - Ancient Messages * (LA 5130 - WorldFinals Orlando11; major hint: each hieroglyph has unique number of white CCs)
4. UVa 11585 - Nurikabe * (polynomial-time verifier for an NP-complete puzzle Nurikabe; this verifier requires clever usage of flood fill algorithm)
5. Kattis - 10kindsofpeople * (intelligent flood fill; just run once to avoid TLE as there are many queries)
6. Kattis - coast * (intelligent flood fill; give sentinel to represent sea; floodfill from sea; count crossings to lands)
7. Kattis - islands3 * (optimistic flood fill; assume all Cs are Ls)

**Extra UVa**
- 00601
- 00705
- 00758
- 00776
- 00782
- 00784
- 00785
- 10592
- 10707
- 10946
- 11110

**Extra Kattis**
- island
- vindiagrams



### <a href="/4.2 Graph Traversal/d. Topological Sort/">**d. Topological Sort**</a>
1. Entry Level: Kattis - builddeps * (the graph is acyclic; toposort with DFS from the changed file)
2. UVa 00200 - Rare Order * (toposort)
3. UVa 00872 - Ordering * (similar to UVa 00124; use backtracking)
4. UVa 11060 - Beverages * (Kahn’s algorithm—modified BFS toposort)
5. Kattis - brexit * (toposort; chain reaction; modified Kahn’s algorithm)
6. Kattis - conservation * (modified Kahn’s algorithm; greedily process all steps in a certain lab before alternating to the other lab)
7. Kattis - pickupsticks * (cycle check + toposort if DAG; also available at item UVa 11686 - Pick up sticks)

**Extra UVa**
- 00124
- 10305

**Extra Kattis**
- brexitnegotiations
- collapse
- digicomp2
- easyascab
- grapevine
- managingpackaging



### <a href="/4.2 Graph Traversal/e. Bipartite or Cycle Check/">**e. Bipartite or Cycle Check**</a>
1. Entry Level: Kattis - runningmom * (find a cycle in a directed graph)
2. UVa 10004 - Bicoloring * (Bipartite Graph check)
3. UVa 10116 - Robot Motion * (traversal on implicit graph; cycle check)
4. UVa 10505 - Montesco vs Capuleto * (bipartite; take max(left, right))
5. Kattis - hoppers * (the answer is number of CC-1 if there is at least one bipartite component in the graph; or number of CC otherwise)
6. Kattis - molekule * (undirected tree is also Bipartite/bi-colorable; bi-color it with 0 and 1; direct all edges from 0 to 1 (or vice versa))
7. Kattis - torn2pieces * (construct graph from strings; traversal from source to target; reachability check; print path)

**Extra UVa**
- 00840
- 10510
- 11080
- 11396

**Extra Kattis**
- amanda
- ballsandneedles
- breakingbad
- familydag
- pubs



### <a href="/4.2 Graph Traversal/f. Finding Articulation Points\Bridges/">**f. Finding Articulation Points\Bridges**</a>
1. Entry Level: UVa 00315 - Network * (finding articulation points)
2. UVa 10765 - Doves and Bombs * (finding articulation points)
3. UVa 12363 - Hedge Mazes * (LA 5796 - Latin America; transform input to graph of its bridges; see if b is reachable from a with only the bridges)
4. UVa 12783 - Weak Links * (finding bridges)
5. Kattis - birthday * (check if the input graph contains any bridge; N is small though so weaker solution can still be accepted)
6. Kattis - caveexploration * (find size of bi-connected components that contains vertex 0; identify the bridges)
7. Kattis - intercept * (Articulation Points in SSSP Spanning DAG; clever modification of Dijkstra’s)

**Extra UVa**
- 00610
- 00796
- 10199

**Extra Kattis**
- kingpinescape



### <a href="/4.2 Graph Traversal/g. Finding Strongly Connected Components/">**g. Finding Strongly Connected Components**</a>
1. Entry Level: UVa 11838 - Come and Go * (see if input graph is an SCC)
2. UVa 00247 - Calling Circles * (SCC + printing solution)
3. UVa 11709 - Trust Groups * (find the number of SCCs)
4. UVa 11770 - Lighting Away * (similar to UVa 11504)
5. Kattis - cantinaofbabel * (build directed graph ‘can speak’; compute the largest SCC of ‘can speak’; keep this largest SCC)
6. Kattis - dominos * (count the number of SCCs without incoming edge from a vertex outside that SCC; also available at UVa 11504 - Dominos)
7. Kattis - equivalences * (contract input directed graph into SCCs; count SCCs that have in-/out-degrees = 0; report the max)

**Extra UVa**
- 01229

**Extra Kattis**
- loopycabdrivers
- reversingroads
- test2



### <a href="/4.2 Graph Traversal/h. Ad Hoc Graph Traversal/">**h. Ad Hoc Graph Traversal**</a>
1. Entry Level: UVa 12376 - As Long as I Learn, I Live * (simulated greedy traversal on DAG)
2. UVa 00824 - Coast Tracker * (traversal on implicit graph)
3. UVa 11831 - Sticker Collector ... * (traversal on implicit graph)
4. UVa 12442 - Forwarding Emails * (modified DFS; special graph)
5. Kattis - faultyrobot * (interesting graph traversal variant)
6. Kattis - promotions * (modified DFS; special graph; DAG; also available at UVa 13015 - Promotions)
7. Kattis - succession * ((upwards) traversal of family DAG; use unordered maps; make the founder has very large starting blood to avoid fraction)

**Extra UVa**
- 00118
- 00168
- 00173
- 00318
- 00614
- 00781
- 10113
- 10377
- 12582
- 12648
- 13038

**Extra Kattis**
- ads
- brickwall
- droppingdirections
- hogwarts2
- jetpack
- kingofthewaves
- silueta

**Others**
- IOI 2011 - Tropical Garden (graph traversal; DFS; involving cycle)