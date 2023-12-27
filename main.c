#include "./sql/sqlite3.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
  sqlite3 *db;
  int rc = sqlite3_open("minimarket.db", &db);

  if (rc != SQLITE_OK) {
      printf("Cannot open database: %s\n", sqlite3_errmsg(db));
      sqlite3_close(db);
      return 1;
  }

  printf("Hey\n");
  return 0;
}
