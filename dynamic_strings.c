#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MALLOC_FAILED 1000

int main(void)
{
	char *s = "c run, c run unix, run unix run";
	
	char *t = ", go c, go!";
	
	char *u;

	size_t len = strlen(s) + strlen(t) + 1; /* 1 for the NULL char */

	/* how many objects times the size of the object */
	u = malloc(len * sizeof(char)); 

	/* malloc may fail so need to check to make sure it worked  */
	if (u == NULL) {
		printf("malloc failed. goodbye...\n");
		exit(MALLOC_FAILED);
	}
	
    /* the + 1 makes room for the null terminator */
	strncpy(u, s, strlen(s) + 1); 
	printf("u = \"%s\"\n", u);
	
	strncat(u, t, strlen(t) + 1);
	printf("u = \"%s\"\n", u);

	
    /*you allocated it you free it*/ 
	free(u);

	return 0;
}
