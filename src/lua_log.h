/**
 ** @node lua_log.h
 ** @section lua_log.h
 **/

#ifndef LUA_LOG_H
#define LUA_LOG_H

#include <lua.h>

/**
 ** @deftypefun void lua_log_init @
 **   (lua_State* @var{lua})
 ** Add the @code{mud.log} api to @var{lua} (@pxref{mud.log}).
 ** @end deftypefun
 **/
void lua_log_init(lua_State* lua);

#endif
