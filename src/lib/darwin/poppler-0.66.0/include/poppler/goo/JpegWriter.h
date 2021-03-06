//========================================================================
//
// JpegWriter.h
//
// This file is licensed under the GPLv2 or later
//
// Copyright (C) 2009 Stefan Thomas <thomas@eload24.com>
// Copyright (C) 2010, 2012, 2017 Adrian Johnson <ajohnson@redneon.com>
// Copyright (C) 2010 Jürg Billeter <j@bitron.ch>
// Copyright (C) 2010 Harry Roberts <harry.roberts@midnight-labs.org>
// Copyright (C) 2010 Brian Cameron <brian.cameron@oracle.com>
// Copyright (C) 2011 Albert Astals Cid <aacid@kde.org>
// Copyright (C) 2011 Thomas Freitag <Thomas.Freitag@alfa.de>
//
//========================================================================

#ifndef JPEGWRITER_H
#define JPEGWRITER_H

#include "pdf-to-html-config.h"

#ifdef ENABLE_LIBJPEG

#include <sys/types.h>
#include "ImgWriter.h"

struct JpegWriterPrivate;

class JpegWriter : public ImgWriter
{
public:
  /* RGB                 - 3 bytes/pixel
   * GRAY                - 1 byte/pixel
   * CMYK                - 4 bytes/pixel
   */
  enum Format { RGB, GRAY, CMYK };

  JpegWriter(int quality, bool progressive, Format format = RGB);
  JpegWriter(Format format = RGB);
  ~JpegWriter();

  void setQuality(int quality);
  void setProgressive(bool progressive);
  bool init(FILE *f, int width, int height, int hDPI, int vDPI) override;

  bool writePointers(unsigned char **rowPointers, int rowCount) override;
  bool writeRow(unsigned char **row) override;

  bool close() override;
  bool supportCMYK() override;

private:
  JpegWriter(const JpegWriter &other);
  JpegWriter& operator=(const JpegWriter &other);

  JpegWriterPrivate *priv;
};

#endif

#endif
