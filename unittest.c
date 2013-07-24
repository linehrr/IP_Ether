#include <stdio.h>
#include "ht.h"
#include <stdlib.h>
#include <assert.h>

void test_ht_ctor(){
	ht_t* ht=ht_ctor(20);

	bucket_t* tmp=&(ht->bucket[1]);
	tmp->data=1;
	
	assert(tmp->data==1);//not helpful anymore
    free(ht->bucket);
	free(ht);	
}


void test_ht_dtor(){
    ht_t* ht=ht_ctor(20);
    (&(ht->bucket[1]))->data=1;

    assert((&(ht->bucket[1]))->data==1);//not helpful anymore
	ht_dtor(ht);
}

void test_ht_insert(){
	
}

void test_ht_search(){
	
}

void test_ht_delete(){
	
}

int main(){
	test_ht_ctor();
    test_ht_dtor();
	printf("end of main()! \n");	
	return 0;
}


