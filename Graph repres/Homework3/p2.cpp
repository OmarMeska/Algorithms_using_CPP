/*
If advanced for you , ignore it :) 

Assume M is binary adjacency matrix for a directed Graph 
 M[i][j] =1 if there is at least single edge between i ,j 
 
 When we compute the matrix c =M^2 ;
 c[i][j] = the number of paths between i and j that consists of 2 edges ;
 
 WHY ??
 assume for some k : M[i][k] =1  and M[k][j] =1 ;
  the matrix multiplication will sum for us M[i][k] *M[k][j] ;
   so for every node k where (i =>k and k=>j)1 is added to M[i][j] 
Generalization :
c= M^k = the number of paths between i and j that consists of k edges ;
in the homework example if we computed M^10 , c will be zeros 
as there is no path with 10 edges 


tip  :c [i][i]can tell us if there is a cycle passing with i with length k ;

what about undirected graphs ?
the same logic, but paths won`t be simple 
non simple path : 1-2-3-1-4-5-1-5-6-1 (as you see nodes are repeated ) 

Seniors : we can adjust the matrix M , such that c =M^k is the number of edges of at most k edges ;



 */