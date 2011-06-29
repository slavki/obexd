/*
 *
 *  OBEX library with GLib integration
 *
 *  Copyright (C) 2011  Intel Corporation. All rights reserved.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 2 as
 *  published by the Free Software Foundation.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#ifndef __GOBEX_DEFS_H
#define __GOBEX_DEFS_H

#include <glib.h>

typedef enum {
	G_OBEX_DATA_INHERIT,
	G_OBEX_DATA_COPY,
	G_OBEX_DATA_REF,
} GObexDataPolicy;

typedef enum {
	G_OBEX_ERROR_PARSE_ERROR,
	G_OBEX_ERROR_INVALID_ARGS,
	G_OBEX_ERROR_DISCONNECTED,
} GObexError;

#define G_OBEX_ERROR g_obex_error_quark()
GQuark g_obex_error_quark(void);

#endif /* __GOBEX_DEFS_H */
