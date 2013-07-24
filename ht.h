#ifndef HASHTABLE_H
#define HASHTABLE_H

typedef struct bucket{
	int data;
	struct bucket* next;
}bucket_t;


typedef struct ht_t{
    int count; /*count the number of buckets being used; 
	            TODO dont need this for static ht
				For dynamic ht, will need to update this*/	
    int capacity;/*number of buckets*/

    /*array holding value*/
	bucket_t* bucket;/*TODO For array in C, ther is a limit of how many elements could be stored. not sure if this would affect me*/
}ht_t;


ht_t* ht_ctor(int capacity);

void ht_dtor(ht_t* ht);

/*return type is for error report*/
int ht_insert(int IP, int MAC);

/*return type is for error report*/
int ht_search(int key);

/*return type is for error report*/
int ht_delete(int IP, int MAC);

#endif
