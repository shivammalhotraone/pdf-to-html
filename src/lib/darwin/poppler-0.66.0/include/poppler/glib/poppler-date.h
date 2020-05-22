/* pdf-to-html-date.h: glib interface to pdf-to-html
 *
 * Copyright (C) 2009 Carlos Garcia Campos <carlosgc@gnome.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street - Fifth Floor, Boston, MA 02110-1301, USA.
 */

#ifndef __pdf-to-html_DATE_H__
#define __pdf-to-html_DATE_H__

#include "pdf-to-html.h"

G_BEGIN_DECLS
gboolean pdf-to-html_date_parse (const gchar *date,
			     time_t      *timet);
G_END_DECLS

#endif /* __pdf-to-html_DATE_H__ */
