#include "ht.h"
#include <stdlib.h>


/*TODO this is a primitive version with no hash collision resolution yet*/
ht_t* ht_ctor(int capacity){
	ht_t* ht=malloc(sizeof(ht_t));
	ht->capacity=capacity;
	ht->bucket=malloc(sizeof(bucket_t)*capacity);	
}

void ht_dtor(ht_t* ht){
	/*TODO free each collision list in bucket*/
	free(ht->bucket);
	free(ht);
}

/*TODO for now, use MAC as key, and store IP in the table*/
/*return type is for error report*/
int ht_insert(ht_t* ht, int IP, int MAC){
	
}

/*return type is for error report*/
int ht_search(ht_t* ht, int key){
	
}

/*return type is for error report*/
int ht_delete(ht_t* ht, int IP, int MAC){
	
}


