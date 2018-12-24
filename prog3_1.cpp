#include <string>
#include <iostream>

using namespace std;

extern "C"{
  #include "lua.h"
  #include "lualib.h"
  #include "lauxlib.h"

}

int main(int argc, char* argv[]) {

  cout << "Assignment #3-1, Darpan Beri, darpanberi.99@gmail.com"<<endl;

  lua_State *L = luaL_newstate(); /* Initialize */

  luaL_openlibs(L);

  luaL_dofile(L, argv[1]); /* Execute the file in the env */

  lua_close(L); /* Close the enviornment */

  return 0;

}
