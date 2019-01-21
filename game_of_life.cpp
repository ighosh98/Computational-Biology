// Implementation on Conway's Game of Life algorithm for prediction of the bacterial colony population
//https://web.stanford.edu/class/archive/cs/cs106b/cs106b.1164/assn/life.html
#include <bits/stdc++.h>
#include "console.h"
#include "filelib.h"
#include "strlib.h"
#include "grid.h"
#include "gwindow.h"
#include "simpio.h"
#include "lifegui.h"
using namespace std;
Grid<char> random;
Grid<char> getGrid(string filename);
void print(Grid<char> &grid)
{

}
void tick(grid<char> &grid, char wrap)
{

}
void animate(Grid<char> &grid, char wrap)
{

}
int countNeighbours(Grid<char> &grid, int row, int col, char wrap)
{

}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);	
	cout << "Game of life \n Simulation of the lifecycle of a bacterial colony.\n ";
    cout<<"- A cell with 1 or fewer neighbors dies.\n";
    cout<<"- Locations with 2 neighbors remain stable.\n";
    cout<<"- Locations with 3 neighbors will create life.\n";
    cout<<"- A cell with 4 or more neighbors dies.\n\n";
}
