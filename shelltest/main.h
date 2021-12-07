#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
typedef struct listpath_s
{
	char *route;
	struct listpath_s *next;
} listpath_t;
char **tokenator(char *str, const char separator);
char *_strdup(char *str);
char **_strtok(char *str, char separator);
int getexeve(char **argv);
char *_getenv(const char *name);
char *getroute(char *getpath, char *firstarg);
listpath_t *path_linked_list(listpath_t **head, char *str);
void freezedLinkedList(listpath_t *pathLink);
int freezer(char *str);
 char *_strcat(char *dest, char *src);
#endif
