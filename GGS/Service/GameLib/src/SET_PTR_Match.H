// $Id: SET_PTR_Match.H 160 2007-06-22 15:21:10Z mburo $
// This is a GGS file, licensed under the GPL

/*
    (c) Igor Durdanovic, igord@research.nj.nec.com
    NEC Research Institute
    4 Independence Way
    Princeton, NJ 08540, USA

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/
//: SET_PTR_Match.H (bof) (c) Igor Durdanovic

#ifndef SET_PTR_Match_H
#define SET_PTR_Match_H

#include "SET_String.H"
#include "SET_PTR.H"
#include "VC_Match.H"

class SET_PTR_Match
  : public SET_PTR< VC_Match >
{
public:
  void to_set( SET_String& S ) const;
  
  void erase( bool Free ) { SET_PTR< VC_Match >::erase( Free ); }
  void erase( SET_String& Set, bool All ); // will erase Set along the way
  
private:
};

#endif

//: SET_PTR_Match.H (eof) (c) Igor
