#include "html_tree.h"

/************************
 *	HTML functions
 ************************/

void headFile(char *title){	// Print head tag. Need a head file to describe html styles and scripts.
	if(html == NULL){
		fprintf(stderr, "didn't open html file \r\n");
		return ;
	}

	FILE *head = fopen("./html_head.head", "r");
	char c;

	if(head == NULL){
		fprintf(stderr, "head file missing\r\n");
		return ;
	}

	oprintf("<head><title>%s</title>", title);
	while((c = fgetc(head)) != EOF)
		fputc(c, html);
	oprintf("</head>");

	fclose(head);
}
/************************
 *	END HTML functions
 ************************/