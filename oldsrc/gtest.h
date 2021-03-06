/*
	This file is part of nationstates-linux.

    nationstates-linux is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    nationstates-linux is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with nationstates-linux.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef GTKMM_EXAMPLE_GTEST_H
#define GTKMM_EXAMPLE_GTEST_H

#include <gtkmm.h>
#include "treeview.h"
#include "functions.h"
#include "saveview.h"

class gTest : public Gtk::Window{
private:

	gTest();
	gTest(const gTest&);
	gTest& operator=(const gTest&);

public:

	static gTest& instance(){
		static gTest singleton;
		return singleton;
	}

	void goto_data(std::vector<Glib::ustring> nation_data);
	void goto_load(std::vector<Glib::ustring> nation_data);
	void goto_delete_all(Glib::ustring nationer);
	void goto_get_all(Glib::ustring nationer);

protected:

	void on_button_next();
	void on_button_update();
	void on_notebook_switch_page(Gtk::Widget* page, guint page_num);
	void force_notebook_refresh();

	std::vector< std::vector<Glib::ustring> > data_vectors;
	Glib::ustring current_time, nation;

	Gtk::Box main_box, big_box;
	Gtk::VBox right_box, v_header;
	Gtk::HBox header_box, description_box, Info3, Info4, Info5, Info6, event_box, save_box, nation_box, header_upper_box;
	Gtk::ScrolledWindow scrolled_save, scrolled_events, scrolled_stats;
	Gtk::Notebook notebook;
	Tree_View stats;
	Save_View saves;
	functions fun;
	Gtk::ButtonBox input_box, save_buttons;
	Gtk::Image flag;
	Gtk::Label fullname, events_label, description_label, rights, nation_label;
	Gtk::Entry nation_input;
	Gtk::Button next_button, update_button;
	Gtk::Window* errorPopup;
};

#endif
