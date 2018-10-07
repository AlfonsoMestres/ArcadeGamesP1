#ifndef __String__
#define __String__

#include <stdlib.h>

class String {
	private:
		char* string;
	public:
		// Constructors
		String(const char* str);
		String(const String& str);

		// Functions
		int length();							// return the amount of char allocateds in the str
		void clear();							// remove every memory allocated 
		bool operator==(const String& str);		// strcmp( *x++ == *b++) ?
		String operator+(String str);			// actualMem + a.lenght() * char size and add a to the mem array

};

String::String(const char* str) { 
	string = (char*)malloc(sizeof(str));
	while (*string++ = *str++);
}

String::String(const String& str) {
	string = str.string;
}

int String::length() {
	int len = 0;
	while (*string++) { // Maybe this pointer will remaing last element when this finishes
		len++;
	}
	return len;
}

void String::clear() {
	// TODO: Not yet
	// while (*string = nullptr);
}

bool String::operator==(const String& str) {
	/*while (*string++ == *str++);*/
	return false;
}

String String::operator+(String str) {
	char* joinedStr;
	int ite, strLen = str.length();

	joinedStr = (char*)malloc(sizeof(str) + strLen);

	while (*string++ != 0) {
		*joinedStr++ = *string;
	}

	while (*str.string++ != 0) {
		*joinedStr++ = *str.string;
	}

	return String(joinedStr);
}

#endif