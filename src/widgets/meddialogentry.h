/*
 * meddialogentry.h
 *
 * Copyright 2013-2018 AmatCoder
 *
 * This file is part of Mednaffe.
 *
 * Mednaffe is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * Mednaffe is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Mednaffe; if not, see <http://www.gnu.org/licenses/>.
 *
 *
 */


#ifndef __MEDDIALOGENTRY_H__
#define __MEDDIALOGENTRY_H__

#include <gtk/gtk.h>

#include "medentry.h"


G_BEGIN_DECLS

typedef struct _MedDialogEntry MedDialogEntry;
typedef struct _MedDialogEntryClass MedDialogEntryClass;

struct _MedDialogEntry {
  MedEntry parent_instance;
};

struct _MedDialogEntryClass {
  MedEntryClass parent_class;
};


GType med_dialog_entry_get_type (void) G_GNUC_CONST;
MedDialogEntry* med_dialog_entry_new (void);
MedDialogEntry* med_dialog_entry_construct (GType object_type);


G_END_DECLS

#endif
