#ifndef MAIN_H
#define MAIN_H

char **tokenator(char *str, const char separator);
char *_strdup(char *str);
char **_strtok(char *str, char separator);
int getexeve(char argv[0], char **argv, env);
#endif
