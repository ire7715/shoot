#ifndef __HTML_TREE_H__
#define __HTML_TREE_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define OUT_S html
#define oprintf(format, ...) fprintf(OUT_S, format, ##__VA_ARGS__)
FILE *html;

void headFile(char *);

#endif