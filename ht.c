#include "ht.h"
#include <stdlib.h>


/*TODO this is a primitive version with no hash collision resolution yet*/
ht_t* ht_ctor(int capacity){
	ht_t* ht=malloc(sizeof(ht_t));
	ht->capacity=capacity;
	ht->bucket=malloc(sizeof(bucket_t)*capacity);	
}

void ht_dtor(ht_t* ht){
	free(ht->bucket);
	free(ht);
}

/*return type is for error report*/
int ht_insert(int IP, int MAC){
	
}

/*return type is for error report*/
int ht_search(int key){
	
}

/*return type is for error report*/
int ht_delete(int IP, int MAC){
	
}


