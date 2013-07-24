#include <stdio.h>
#include "ht.h"
#include <stdlib.h>
#include <assert.h>

void test_ht_ctor(){
	ht_t* ht=ht_ctor(20);
	ht->bucket[1].data=1;	
	
	assert(ht->bucket[1].data==1);
    free(ht->bucket);

	free(ht);	
}


void test_ht_dtor(){
    ht_t* ht=ht_ctor(20);
    ht->bucket[1].data=1;

    assert(ht->bucket[1].data==1);
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


