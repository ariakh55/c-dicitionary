# Dicitonary Library (using C lang)

This is simple library helping you define dictionaries in C using functions.

## Intro
This library is fully written in C lang. the defenition is simple. All you have to do is to include dict.h
and compile dict.c with the main code file.

## How it works
This type of dictionaries are created by using two structs; one for holding size and index pointers and the other one
is for holding the key and value of each member.

## Usage

- Dict:
	Define dictionaries using this keyword;
	- example:
		```c Dict objects; ```
- Dict DictCreate(void):
	Create and pass the dictionary to a defined dictonary;
	- in:
		void
	- out:
		Dict
	- example:
		```c objects = DictCreate(); ```
- DictDestroy(Dict):
	Used for Deleting and Disposing created dictonaries;
	- in:
		Dict
	- out:
		void
	- example:
		```c DictDestroy(objects); ```
- DictInsert(Dict, const char *key, const char *value):
	Used to Insert members inside defined Dict /w key and value;
	- in:
		Dict, char *, char *
	- out:
		Dict
	-example:
		```c DictInsert(obejcts, "Key", "Value"); ```
- DictSearch(Dict, const char* key):
	Searches through the defined Dict and returns the value binded to the key.
	- in:
		Dict, char*
	- out:
		char*
	- example:
		```c 
			puts(DictSearch(objects, "Key")); //value is returned
			puts(DictSearch(objects, "p")); //0 is returned
		```
- DictDelete(Dict, const char* key):
	Used for deleting members using the key;
	- in:
		Dict, char*
	- out:
		void
	-example:
		```c DictDelete(objects, "Key"); ```

Re-enhanced by AriaKH55
