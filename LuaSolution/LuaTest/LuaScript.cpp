#include "stdafx.h"
#include "LuaScript.h"
#include "Func_.h"
void ILuaScript::InitLua()
{
	m_L = luaL_newstate();
	luaL_openlibs(m_L);
	if (!m_L)
		return;
	RegLuaFunc();
}
void ILuaScript::UnInitLua()
{
	lua_close(m_L);

}
int Lua_OpenNpc(lua_State* L)
{
	const char* szName = lua_tostring(L, 1);
	OpenNpc(szName);
	return 0;
}
int Lua_FindWay(lua_State* L)
{
	int x = lua_tointeger(L, 1);
	int y = lua_tointeger(L, 2);
	FindWay(x, y);
	return 0;
}
int Lua_Add(lua_State* L)
{
	int x = lua_tointeger(L, 1);
	int y = lua_tointeger(L, 2);
	int z = x + y;
	lua_pushinteger(L, z);
	return 1;
}
int Lua_ShowValue(lua_State* L)
{
	int value = lua_tointeger(L, 1);
	CString strBuf;
	strBuf.Format("%d", value);
	AfxMessageBox(strBuf);
	return 0;
}
int Lua_ReturnValue(lua_State* L)
{
	lua_pushinteger(L, 11);
	lua_pushinteger(L, 55);
	lua_pushinteger(L, 88);
	return 3;
}
int Lua_skill(lua_State* L)
{
	const char* skill = lua_tostring(L, 1);
	AfxMessageBox(skill);
	return 0;
}
int Lua_search(lua_State* L)
{
	const char* search = lua_tostring(L, 1);
	AfxMessageBox(search);
	return 0;
}
void ILuaScript::RegLuaFunc()
{
	lua_register(m_L, "OpenNpc", Lua_OpenNpc);
	lua_register(m_L, "FindWay", Lua_FindWay);
	lua_register(m_L, "Add", Lua_Add);
	lua_register(m_L, "ShowValue", Lua_ShowValue);
	lua_register(m_L, "ReturnValue", Lua_ReturnValue);
	lua_register(m_L, "Skill", Lua_skill);
	lua_register(m_L, "Search", Lua_search);
}

