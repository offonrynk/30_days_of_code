#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *readline();
char **split_string(char *);

//---------------------------------------------------------------
/*!
 * helper function to compare 2 strings
 + enables qsort to sort the char string
 * @return integer value of strcmp
 */
int compareFunction(const void *a, const void *b)
{
  const char *s1 = *(const char **)a, *s2 = *(const char **)b;
  return strcmp(s1, s2);
}

int main()
{
  char *N_endptr;
  char *N_str = readline();
  int N = strtol(N_str, &N_endptr, 10);

  if (N_endptr == N_str || *N_endptr != '\0') {
    exit(EXIT_FAILURE);
  }

  char *myNameString[N]; // namestring
  int i = 0;             // local increment variable
  for (int N_itr = 0; N_itr < N; N_itr++) {
    char **firstNameEmailID = split_string(readline());

    char *firstName = firstNameEmailID[0];

    char *emailID = firstNameEmailID[1];

    //!< start of logic block for sorting
    if (strstr(emailID, "@gmail.com")) {
      myNameString[i++] = firstName;
    }
    qsort(myNameString, i, sizeof(char *), compareFunction);
  }

  for (int it = 0; it != i; ++it)
    printf("%s\n", myNameString[it]);

  //!< end of sort logic block

  return 0;
}

char *readline()
{
  size_t alloc_length = 1024;
  size_t data_length = 0;
  char *data = malloc(alloc_length);

  while (true) {
    char *cursor = data + data_length;
    char *line = fgets(cursor, alloc_length - data_length, stdin);

    if (!line) {
      break;
    }

    data_length += strlen(cursor);

    if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
      break;
    }

    size_t new_length = alloc_length << 1;
    data = realloc(data, new_length);

    if (!data) {
      break;
    }

    alloc_length = new_length;
  }

  if (data[data_length - 1] == '\n') {
    data[data_length - 1] = '\0';
  }

  data = realloc(data, data_length);

  return data;
}

char **split_string(char *str)
{
  char **splits = NULL;
  char *token = strtok(str, " ");

  int spaces = 0;

  while (token) {
    splits = realloc(splits, sizeof(char *) * ++spaces);
    if (!splits) {
      return splits;
    }

    splits[spaces - 1] = token;

    token = strtok(NULL, " ");
  }

  return splits;
}
