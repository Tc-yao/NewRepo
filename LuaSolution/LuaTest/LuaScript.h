#pragma once

class ILuaScript
{
public:
	ILuaScript()
		:m_L(nullptr)
	{
		InitLua();
	}
	~ILuaScript()
	{
		UnInitLua();
	}
	lua_State* GetState()
	{
		return m_L;
	}
protected:
	void InitLua();
	void UnInitLua();
	void RegLuaFunc();
private:
	lua_State *m_L;//×´Ì¬»ú
	
};