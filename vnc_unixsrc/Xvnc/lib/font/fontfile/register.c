/* $XConsortium: register.c,v 1.3 94/04/17 20:17:07 gildea Exp $ */

/*

Copyright (c) 1994  X Consortium

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
X CONSORTIUM BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN
AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

Except as contained in this notice, the name of the X Consortium shall not be
used in advertising or otherwise to promote the sale, use or other dealings
in this Software without prior written authorization from the X Consortium.

*/

/*
 * This is in a separate source file so that small programs
 * such as mkfontdir that want to use the fontfile utilities don't
 * end up dragging in code from all the renderers, which is not small.
 */

extern void BitmapRegisterFontFileFunctions (void);
#ifndef CRAY
extern void SpeedoRegisterFontFileFunctions (void);
extern void Type1RegisterFontFileFunctions (void);
#endif
extern void FontFileRegisterLocalFpeFunctions (void);

void
FontFileRegisterFpeFunctions()
{
    BitmapRegisterFontFileFunctions ();
#ifndef CRAY
    SpeedoRegisterFontFileFunctions ();
    Type1RegisterFontFileFunctions();
#endif

    FontFileRegisterLocalFpeFunctions ();
}
