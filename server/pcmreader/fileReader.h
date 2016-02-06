/***
    This file is part of snapcast
    Copyright (C) 2014-2016  Johannes Pohl

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
***/

#ifndef FILE_READER_H
#define FILE_READER_H

#include "pcmReader.h"
#include <fstream>


/// Reads and decodes PCM data from a file
/**
 * Reads PCM from a file and passes the data to an encoder.
 * Implements EncoderListener to get the encoded data.
 * Data is passed to the PcmListener
 */
class FileReader : public PcmReader
{
public:
	/// ctor. Encoded PCM data is passed to the PipeListener
	FileReader(PcmListener* pcmListener, const ReaderUri& uri);
	virtual ~FileReader();

protected:
	void worker();
	std::ifstream ifs;
};


#endif
