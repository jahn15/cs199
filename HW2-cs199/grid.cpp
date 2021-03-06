#include "grid.hpp"

// Define your functions here 
int main(){
  
  // Creates a square grid with the side of the square being equal to the parameter
 Grid::Grid(int dimension){
	this.dimension = dimension;
  }
    // Copy Constructor
 Grid::Grid(const Grid & obj){
	*arr = new int;
	**arr = *obj.arr
  }
    
 Grid::~Grid(){
   clear();
  }
  
    // Overloaded assigment operator. In this method you have to overload the assigment operator for the grid class such that when I do something like Grid a = Grid b, it should make "a" = "b"
 const Grid::Grid & operator = (const Grid & obj){
	dimension = obj.dimension;
	arr = obj.arr;
  }
  

    // This function will take two integers and swap the values in the rows of the Grid object
  Grid::swapRows(int row1, int row2){
	int temp = row1;
	row2 = row1;
	row1 = temp;
  }
  
    /** This function takes in a grid object and adds the values in the cells of the two grids. Remember this operator will translate to:
  *
  *  Grid a;
  *  Grid b;
  *  a+b -> a.operator+(b)
  *  Store the result in a new grid object and return that object by value
  */
  const Grid::Grid operator + (const Grid & obj2){
   this.dimension = this.dimension + obj2.dimension;
   &&this. arr = &&this.arr + &&obj2;
  }
    // The fuction will take two integers and swap the values in the columns of the Grid object.
  void Grid::swapColumns(){
	temp new Grid();
    temp.Grid(this);
	for(size_t i=0 ; i<Grid.size(); i++)
		for (size_t j=0; j<Grid.size(); j++)
			    &&this.arr[i][j] = temp[j][i];
				&&this.arr[j][i] = temp[i][j];

    
  }
  
    // This function takes in a Grid object by reference and creates a new Grid object with the values in the grid being set to the product of the indices of the cell and the value in the Grid object. Example - if the 2-D grid had the value at 5 at index (2,5). The value of the cell at (2,5) in the new grid would be 2*5*5
  Grid::Grid multCoords(Grid & obj){
	obj = new Grid();
	temp.Grid(obj);
  }
 
  // Responsible for printing the grid 
  void Grid::printGrid(){
	stdout << "double pointer arr is : " << &&arr << " and value for dimension is : " << dimension << endl;
  }
  return 0;
  }