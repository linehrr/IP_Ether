#include "ht.h"
#include <stdlib.h>
#include <stdio.h>

ht_t* ht_ctor(int capacity){
	ht_t* ht=malloc(sizeof(ht_t));
	ht->capacity=capacity;
	ht->bucket=malloc(sizeof(bucket_t)*capacity);	//TODO temporary for debuggin
	/*TODO the for loop in ctor and dtor are not very efficient,
	 * maybe I could implement this differently to make this more efficient
	*/
	int i;
	for(i=0;i<capacity;i++){
        bucket_t* tmp=&(ht->bucket[i]);
		tmp->next=NULL;
	}
	return ht;
}

void ht_dtor(ht_t* ht){
	/*free each collision list in bucket*/
	int capacity=ht->capacity;

	int i;
    for(i=0;i<capacity;i++){
		bucket_t* pbucket=&(ht->bucket[i]);
		if(pbucket->next!=NULL){
			pbucket=pbucket->next;
			while(pbucket->next!=NULL){
				bucket_t* tmp=pbucket;
				pbucket=pbucket->next;
				free(tmp);
			}
		}
	}
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


