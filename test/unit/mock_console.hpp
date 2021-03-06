#ifndef METASHELL_MOCK_CONSOLE_HPP
#define METASHELL_MOCK_CONSOLE_HPP

// Metashell - Interactive C++ template metaprogramming shell
// Copyright (C) 2014, Abel Sinkovics (abel@sinkovics.hu)
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

#include <metashell/iface/console.hpp>

class mock_console : public metashell::iface::console
{
public:
  explicit mock_console(int width_ = 80);

  virtual void show(const metashell::data::colored_string& s_) override;
  virtual void new_line() override;

  virtual int width() const override;

  void clear();
  void set_width(int width_);

  const metashell::data::colored_string& content() const;
private:
  metashell::data::colored_string _content;
  int _width;
};

#endif

