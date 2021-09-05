#ifndef CHOICE_H
#define CHOICE_H

char *mx_strdup(const char *str);

typedef char t_phrase;
t_phrase *MX_SUCCESS_PHRASE = "Follow me!";
t_phrase *MX_FAIL_PHRASE = "Perhaps I was wrong about you, Neo.";
t_phrase *MX_UNDEFINED_PHRASE = "Are you sure about that?";
int MX_RED_PILL = 1;
int MX_BLUE_PILL = 2;

#endif
