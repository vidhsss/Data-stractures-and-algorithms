#include <stdio.h>
#include<iostream>
using namespace std;

bool ispossible(int arr[100][100], int x, int y, int n)
{
    if(arr[x][y]==1 && x<n && y<n && x>=0 && y>=0)
    {
        return true;
    }
    return false;
}
bool ratinmaze(int arr[100][100], int x, int y, int n, int solution[100][100])
{
    if (x==n-1 && y==n-1)
    {
        solution[x][y]=1;
        return true;
    }
    if(ispossible(arr,x,y,n))
    {
        if (solution[x][y]==1)
         return false;
        solution[x][y]=1;
        if (ratinmaze(arr,x+1,y,n,solution))
        {
            return true;
        }
        if(ratinmaze(arr,x,y+1,n,solution))
        {
            return true;
        }
        // if (ratinmaze(arr,x-1,y,n,solution))
        // {
        //     return true;
        // }
        // else if(ratinmaze(arr,x,y-1,n,solution))
        // {
        //     return true;
        // }
        solution[x][y]=0;
        return false;
    }
    return false;
}

// bool solveMazeUtil(
// 	int maze[N][N], int x,
// 	int y, int sol[N][N]);

/* A utility function to print
solution matrix sol[N][N] */
void printSolution(int sol[100][100],int N)
{
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			printf(" %d ", sol[i][j]);
		printf("\n");
	}
}



/* This function solves the Maze problem
using Backtracking. It mainly uses
solveMazeUtil() to solve the problem.
It returns false if no path is possible,
otherwise return true and prints the path
in the form of 1s. Please note that there
may be more than one solutions, this
function prints one of the feasible
solutions.*/
// bool solveMaze(int maze[N][N])
// {
// 	int sol[N][N] = { { 0, 0, 0, 0 },
// 					{ 0, 0, 0, 0 },
// 					{ 0, 0, 0, 0 },
// 					{ 0, 0, 0, 0 } };

// 	if (solveMazeUtil(
// 			maze, 0, 0, sol)
// 		== false) {
// 		printf("Solution doesn't exist");
// 		return false;
// 	}

// 	printSolution(sol);
// 	return true;
// }

/* A recursive utility function
to solve Maze problem */
// bool solveMazeUtil(
// 	int maze[N][N], int x,
// 	int y, int sol[N][N])
// {
// 	// if (x, y is goal) return true
// 	if (
// 		x == N - 1 && y == N - 1
// 		&& maze[x][y] == 1) {
// 		sol[x][y] = 1;
// 		return true;
// 	}

// 	// Check if maze[x][y] is valid
// 	if (isSafe(maze, x, y) == true) {
// 		// Check if the current block is already part of solution path.
// 		if (sol[x][y] == 1)
// 			return false;
	
// 		// mark x, y as part of solution path
// 		sol[x][y] = 1;

// 		/* Move forward in x direction */
// 		if (solveMazeUtil(
// 				maze, x + 1, y, sol)
// 			== true)
// 			return true;

// 		/* If moving in x direction
// 		doesn't give solution then
// 		Move down in y direction */
// 		if (solveMazeUtil(
// 				maze, x, y + 1, sol)
// 			== true)
// 			return true;
	
// 		/* If moving in y direction
// 		doesn't give solution then
// 		Move back in x direction */
// 		if (solveMazeUtil(
// 				maze, x - 1, y, sol)
// 			== true)
// 			return true;

// 		/* If moving backwards in x direction
// 		doesn't give solution then
// 		Move upwards in y direction */
// 		if (solveMazeUtil(
// 				maze, x, y - 1, sol)
// 			== true)
// 			return true;

// 		/* If none of the above movements
// 		work then BACKTRACK: unmark
// 		x, y as part of solution path */
// 		sol[x][y] = 0;
// 		return false;
// 	}

// 	return false;
// }


int main()
{
	int maze[100][100] ;
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cin>>maze[i][j];
        }
    }
    
    int sol[100][100];
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            sol[i][j]=0;
        }
    }
	if (ratinmaze( maze, 0, 0,N, sol)) {
		
        printSolution(sol,N);
		
	}


	
	return 0;
}
