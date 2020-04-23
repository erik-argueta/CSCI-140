// Fig 6.22: maximum.h
// Function template maximum header
//
// [Type Parameters] or Placeholders "T" are used to specify the types of the function's
// parameters to specify the function's return type and to declare
// variables within the body of the function defined

#ifndef maximum_h
#define maximum_h

template <typename T> // or template<class T>
T maximum(T value1, T value2, T value3)
{
	// assume value1 is maximum
	T maximumValue{value1};

	// determine whether value2 is greater than maximumValue
	if (value2 > maximumValue)
	{
		maximumValue = value2;
	}


	// determine whether value3 is greater than maximumValue
	if (value3 > maximumValue)
	{
		maximumValue = value3;
	}

	return maximumValue;
}


#endif /* maximum_h */
