/*
 -------------------------------------------------------------------------------
 ioArray.h
 Array Project
 
 This template class add IO methods to the Array class. This is done because the
 Array class is meant to be implemented on Arduino, which can't have the IO
 methods.
 
 Initially created by Rowland O'Flaherty on 8/15/10.
 -------------------------------------------------------------------------------
 */

#ifndef _ioArray_h_
#define _ioArray_h_

//------------------------------------------------------------------------------
// Includes
//------------------------------------------------------------------------------
#include "../../libraryTemplateClasses/Array/Array.h"
#include <iostream>

template <typename T>
class ioArray : public Array<T>
{
	//--------------------------------------------------------------------------
	// Friend Functions
	//--------------------------------------------------------------------------
	
	
	//--------------------------------------------------------------------------
	// Friend Overloaded Operators
	//--------------------------------------------------------------------------
	template <typename U>
	friend std::ostream& operator<<(std::ostream& ostreamObj, const ioArray<U>& rhsObj);
	
public:
	//--------------------------------------------------------------------------
	// Constants, Enums, and Types
	//--------------------------------------------------------------------------
	
	
	//--------------------------------------------------------------------------
	// Lifecycle
	//--------------------------------------------------------------------------
	
	// Constructors
	ioArray();
	ioArray(int nElements);
	
	// Destructor
	virtual ~ioArray();
	
	// Copy constructor
	
	// Assignment operator
	
	
	//--------------------------------------------------------------------------
	// Overloaded Operators
	//--------------------------------------------------------------------------
	
	
	//--------------------------------------------------------------------------
	// Public Member Functions
	//--------------------------------------------------------------------------
	
	
	//--------------------------------------------------------------------------
	// Public Member Variables
	//--------------------------------------------------------------------------
	
	
	
protected:
	//--------------------------------------------------------------------------
	// Protected Member Functions
	//--------------------------------------------------------------------------
	
	
	//--------------------------------------------------------------------------
	// Protected Member Variables
	//--------------------------------------------------------------------------
	
	
	
private:
	//--------------------------------------------------------------------------
	// Lifecycle
	//--------------------------------------------------------------------------

	
	//--------------------------------------------------------------------------
	// Private Member Functions
	//--------------------------------------------------------------------------
	
	
	//--------------------------------------------------------------------------
	// Private Member Variables
	//--------------------------------------------------------------------------
	
	
};

#include "ioArray.cpp"

#endif