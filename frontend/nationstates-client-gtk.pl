#!/usr/bin/perl -w

# This file is part of nationstates-client.
#
# nationstates-client is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# nationstates-client is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with nationstates-client.  If not, see <http://www.gnu.org/licenses/>.

use strict;
use Gtk2 -init;

# Define runtime variables

$workpath = "~/.nationstates"; # Application folder
$configpath = $workpath."/config"; # Configuration path
$datapath = $workpath."/data"; # Data path

# Create window

$window = Gtk2:Window->new ('toplevel');
$window->signal_connect (delete_event => sub { Gtk2->main_quit });
# TODO: Finish the window creation logic, referencing the original C++ code

