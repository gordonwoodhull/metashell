#ifndef METASHELL_CXCURSOR_HPP
#define METASHELL_CXCURSOR_HPP

// Metashell - Interactive C++ template metaprogramming shell
// Copyright (C) 2013, Abel Sinkovics (abel@sinkovics.hu)
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include <metashell/iface/cxtype.hpp>
#include <metashell/iface/cxcursor.hpp>

#include <clang-c/Index.h>

#include <string>
#include <memory>

namespace metashell
{
  namespace clang
  {
    class cxcursor : public iface::cxcursor
    {
    public:
      explicit cxcursor(CXCursor cursor_);

      virtual std::string spelling() const override;

      virtual std::unique_ptr<iface::cxtype> type() const override;

      virtual bool variable_declaration() const override;
    private:
      CXCursor _cursor;
    };
  }
}

#endif

