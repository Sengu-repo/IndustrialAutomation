// Copyright (C) 2008  Andreas Stewering
//
// This file is part of Etherlab.
//
// Etherlab is free software; you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// Etherlab is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Etherlab; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA//
// ====================================================================

function  slavedesc = getslavedesc(filename)
   //scilab_basename =  SCI
   //slavedesc_path = [scilab_basename+'/contrib/etherlab/modules/etherlab_base/slave_descriptions/'+filename+'_v6.dat']
   slavedesc_path = [getenv('ETLPATH')+'/modules/etherlab_base/slave_descriptions/'+filename+'_v6.dat']
   load(slavedesc_path);
endfunction  
