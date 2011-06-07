/*
 MySecureShell permit to add restriction to modified sftp-server
 when using MySecureShell as shell.
 Copyright (C) 2007 Sebastien Tardif

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation (version 2)

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */

#include "../config.h"

#ifndef _FILESYSTEMACL_H_
#define _FILESYSTEMACL_H_

#define FS_ENUM_USER		1
#define FS_ENUM_GROUP		2
#define FS_ENUM_USER_OBJ	3
#define FS_ENUM_GROUP_OBJ	4
#define FS_ENUM_OTHER		5

#if(HAVE_LIBACL)

int FSEnumAcl(const char *file, int resolvePath, void (*callback)(void *data, int type, int id, int mode), void *data, int *nbEntries);

#else

#define FSEnumAcl(_X, _Y, _Z)	SSH2_FX_OK

#endif //HAVE_LIBACL


#endif /* _FILESYSTEMACL_H_ */
