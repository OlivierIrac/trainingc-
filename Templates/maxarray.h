/*
 * maxarray.h
 *
 *  Created on: 1 juin 2017
 *      Author: irac1
 */

#ifndef DEBUG_MAXARRAY_H_
#define DEBUG_MAXARRAY_H_

#include <array>

template <typename T>
T max(std::array<T,5> myArray) {
	T max=myArray[0];
	for (auto c: myArray)
		if (c>max)
			max=c;
	return max;
}

#endif /* DEBUG_MAXARRAY_H_ */
