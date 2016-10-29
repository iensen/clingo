// {{{ GPL License

// This file is part of gringo - a grounder for logic programs.
// Copyright (C) 2013  Benjamin Kaufmann

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// }}}

#include <lua.hpp>
#include "gringo/lua.hh"
#include "clingo/clingocontrol.hh"

#if defined(_WIN32) || defined(__CYGWIN__)
#   define GRINGO_VISIBILITY_DEFAULT __declspec (dllexport)
#else
#   define GRINGO_VISIBILITY_DEFAULT __attribute__ ((visibility ("default")))
#endif

namespace {

DefaultGringoModule g_module;

} // namespace

extern "C" GRINGO_VISIBILITY_DEFAULT int luaopen_clingo(lua_State *L) {
    try                             { Gringo::Lua::initlib(L, g_module); }
    catch (std::exception const &e) { luaL_error(L, e.what()); }
    catch (...)                     { luaL_error(L, "unknown error"); }
    return 1;
}

