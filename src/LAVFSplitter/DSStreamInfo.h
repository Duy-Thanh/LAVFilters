/*
 *      Copyright (C) 2010 Hendrik Leppkes
 *      http://www.1f0.de
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; see the file COPYING.  If not, write to
 *  the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 *  http://www.gnu.org/copyleft/gpl.html
 *
 *  Contributions by Ti-BEN from the XBMC DSPlayer Project, also under GPLv2
 */

#pragma once

#include <string>

class CDSStreamInfo
{
public:
  CDSStreamInfo(AVStream *avstream, const char* containerFormat, HRESULT &hr);
  ~CDSStreamInfo();

  CMediaType mtype;

  STDMETHODIMP CreateAudioMediaType(AVStream *avstream);
  STDMETHODIMP CreateVideoMediaType(AVStream *avstream);
  STDMETHODIMP CreateSubtitleMediaType(AVStream *avstream);

private:
  std::string m_containerFormat;
};
