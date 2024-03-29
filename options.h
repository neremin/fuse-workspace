/*
  2010, 2011 Stef Bon <stefbon@gmail.com>

  This program is free software; you can redistribute it and/or
  modify it under the terms of the GNU General Public License
  as published by the Free Software Foundation; either version 2
  of the License, or (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

*/
#ifndef FUSE_WORKSPACE_OPTIONS_H
#define FUSE_WORKSPACE_OPTIONS_H

#define FUSE_WORKSPACE_CONFIGFILE "/etc/fuse-workspace/options"
#define FUSE_WORKSPACE_BASEMAP "/etc/fuse-workspace/base"

struct fs_options_struct {
    unsigned char fuse_logging;
    unsigned char main_logging;
    unsigned char fschangenotify_logging;
    unsigned char entry_logging;
    unsigned char path_logging;
    unsigned char skiplist_logging;
    char *configfile;
    char *basemap;
    double attr_timeout;
    double entry_timeout;
    double negative_timeout;
};


// Prototypes

int parse_arguments(int argc, char *argv[], struct fuse_args *fs_fuse_args, unsigned int *error);

#endif



