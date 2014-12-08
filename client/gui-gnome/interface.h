/*	$Id: interface.h,v 1.19 2002/08/13 01:59:35 riq Exp $	*/
/* Tenes Empanadas Graciela
 *
 * Copyright (C) 2000 Ricardo Quesada
 *
 * Author: Ricardo Calixto Quesada <rquesada@core-sdi.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; only version 2 of the License
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307, USA.
 */
/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifndef __TEG_GUI_GNOME_INTERFACE_H
#define __TEG_GUI_GNOME_INTERFACE_H

extern GtkTextView *main_message_area;
extern GtkWidget *text_scrollbar;
extern GtkWidget *main_window;
extern GtkWidget *statusbar;
extern GtkWidget *canvas_map;

GtkWidget* create_mainwin(void);
int create_canvas_items(GtkWidget *canvas);
TEG_STATUS set_sensitive_tb(void);
void tropas_window( int src, int dst, int cant );
void reagrupe_window( int src, int dst, int cant );
void free_imlib_image (GtkObject *object, gpointer data);
void free_imlib_image_ptr (GtkObject *object, gpointer *data);


#endif /* __TEG_GUI_GNOME_INTERFACE_H */
