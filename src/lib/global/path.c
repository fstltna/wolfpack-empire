/*
 *  Empire - A multi-player, client/server Internet based war game.
 *  Copyright (C) 1986-2017, Dave Pare, Jeff Bailey, Thomas Ruschak,
 *                Ken Stevens, Steve McClure, Markus Armbruster
 *
 *  Empire is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *  ---
 *
 *  See files README, COPYING and CREDITS in the root of the source
 *  tree for related information and legal notices.  It is expected
 *  that future projects/authors will amend these files as needed.
 *
 *  ---
 *
 *  path.c: Generated from path.c.in by make.
 *  path.c.in: Path initializations needed outside of the file
 *	       initialization tables
 *
 *  Known contributors to this file:
 *     Markus Armbruster, 2005-2008
 */

#include <config.h>

#include "optlist.h"

/* econfig file to try when user doesn't specify one */
char dflt_econfig[] = "/home/empowner/empire/etc/empire/econfig";

/*
 * Where to find configuration (absolute file name)
 * This is wherever econfig is actually looked for.
 */
char *configdir;

/* User configuration tables to load (relative to configdir) */
char *custom_tables = "";

/* Update schedule (absolute file name) */
char *schedulefil;

/* Where to find built-in configuration tables (relative to configdir) */
char *builtindir_conf = "/home/empowner/empire/share/empire/builtin";
/* Where to find built-in configuration tables (absolute) */
char *builtindir;

/* Where to find info pages (relative to configdir) */
char *infodir_conf = "/home/empowner/empire/share/empire/info.nr";
/* Where to find info pages (absolute) */
char *infodir;

/* Where this game's data is stored (relative to configdir) */
char *gamedir_conf = "/home/empowner/empire/var/empire";
/* Where this game's data is stored (absolute) */
char *gamedir;

/* These are relative to gamedir: */
char teldir[]	= "tel";
char motdfil[]	= "motd";
char downfil[]	= "down";
char annfil[]	= "ann";

char *listen_addr = "";
char *loginport = "6665";

/*
 * Emacs magic:
 * Local Variables:
 * mode: C
 * End:
 */
