#include "ListContainer.hpp"

/* Pure Virtual Functions */
// push the top pointer of the tree into container
void ListContainer::add_element(Base* element)
{
    lcontainer.push_back(element);
}
        
// iterate through trees and output the expressions (use stringify())
void ListContainer::print()
{
    for(list<Base*>::iterator i = lcontainer.begin(); i != lcontainer.end(); i++)
    {
        (*i)->stringify();
    }
}
        
// calls on the previously set sorting-algorithm. Checks if sort_function is not
// null, throw exception if otherwise
void ListContainer::sort()
{
    if(sort_function != NULL)
    {
        //calls on the previously set sorting-algorithm
        sort_function->sort(this);
    }
    else
    {
        //throw exception
      
    }
}

/* Functions Needed to Sort */
//switch tree locations
void ListContainer::swap(int i, int j)
{
  //find positions of i and j
  int count = 0;
  list<Base*>::iterator ii;
  list<Base*>::iterator jj;
  for(list<Base*>::iterator pos = lcontainer.begin(); pos != lcontainer.end(); pos++)
  {
    if (i == count)
    {
        ii = pos;
    }
    if (j == count)
    {
        jj = pos;
    }
    count++;
  }
  
  //swap i and j
  swap(i,j);
  
}
        
// get top ptr of tree at index i
Base* ListContainer::at(int i)
{
  int count = 0;
  for(list<Base*>::iterator j = lcontainer.begin(); j != lcontainer.end(); j++)
  {
    if (i == count)
    {
        return *j;
    }
    count++;
  }
}
        
// return container size
int ListContainer::size()
{
    return lcontainer.size();
}
