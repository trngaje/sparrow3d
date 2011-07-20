/*
 The contents of this file are subject to the Mozilla Public License        
 Version 1.1 (the "License"); you may not use this file except in           
 compliance with the License. You may obtain a copy of the License at       
 http://www.mozilla.org/MPL/                                                
                                                                            
 Software distributed under the License is distributed on an "AS IS"        
 basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See the    
 License for the specific language governing rights and limitations         
 under the License.                                                         
                                                                            
 Alternatively, the contents of this file may be used under the terms       
 of the GNU Lesser General Public license (the  "LGPL License"), in which case the  
 provisions of LGPL License are applicable instead of those                  
 above.                                                                     
                                                                            
 For feedback and questions about my Files and Projects please mail me,     
 Alexander Matthes (Ziz) , zizsdl_at_googlemail.com                         
*/
#ifndef _SPARROW_PRIMITVES_H
#define _SPARROW_PRIMITVES_H

#include "sparrowDefines.h"
#include <SDL.h>

/* Selects the Render Surface. Attention: With every Target change the
 * Z Buffer will be cleaned! */
PREFIX void spSelectRenderTarget(SDL_Surface* target);

/* This texture will be used for all following draw operations with textures */
PREFIX void spBindTexture(SDL_Surface* texture);

/* Activates the Z test (default) */
PREFIX void spZTest();

/* Deactivates the Z test */
PREFIX void spNoZTest();

/* Activates the Z set (default) */
PREFIX void spZSet();

/* Deactivates the Z set */
PREFIX void spNoZSet();

/* Clears the Rendertarget with the color. But attention: The z Buffer will
 * not be cleaned! */
PREFIX void spClearTarget(Uint16 color);

/* Draws a Triangle without texture and without alpha value */
PREFIX void spTriangle(Sint16 x1, Sint16 y1, Sint32 z1, Uint16 c1, Sint16 x2, Sint16 y2, Sint32 z2, Uint16 c2, Sint16 x3, Sint16 y3, Sint32 z3, Uint16 c3);

/* Draws a Triangle without texture and with alpha value */
PREFIX void spTriangle_alpha(Sint16 x1, Sint16 y1, Sint32 z1, Uint16 c1, Uint8 a1, Sint16 x2, Sint16 y2, Sint32 z2, Uint16 c2, Uint8 a2, Sint16 x3, Sint16 y3, Sint32 z3, Uint16 c3, Uint8 a3);

/* Draws a Triangle with texture and without alpha value */
PREFIX void spTriangle_tex(Sint16 x1, Sint16 y1, Sint32 z1, Sint16 u1, Sint16 v1, Uint16 c1, Sint16 x2, Sint16 y2, Sint32 z2, Sint16 u2, Sint16 v2, Uint16 c2, Sint16 x3, Sint16 y3, Sint32 z3, Sint16 u3, Sint16 v3, Uint16 c3);

/* Draws a Triangle with texture and with alpha value */
PREFIX void spTriangle_tex_alpha(Sint16 x1, Sint16 y1, Sint32 z1, Sint16 u1, Sint16 v1, Uint16 c1, Uint8 a1, Sint16 x2, Sint16 y2, Sint32 z2, Sint16 u2, Sint16 v2, Uint16 c2, Uint8 a2, Sint16 x3, Sint16 y3, Sint32 z3, Sint16 u3, Sint16 v3, Uint16 c3, Uint8 a3);

/* Draws a Quad without texture and without alpha value */
PREFIX void spQuad(Sint16 x1, Sint16 y1, Sint32 z1, Uint16 c1, Sint16 x2, Sint16 y2, Sint32 z2, Uint16 c2, Sint16 x3, Sint16 y3, Sint32 z3, Uint16 c3, Sint16 y4, Sint32 z4, Uint16 c4);

/* Draws a Quad without texture and with alpha value */
PREFIX void spQuad_alpha(Sint16 x1, Sint16 y1, Sint32 z1, Uint16 c1, Uint8 a1, Sint16 x2, Sint16 y2, Sint32 z2, Uint16 c2, Uint8 a2, Sint16 x3, Sint16 y3, Sint32 z3, Uint16 c3, Uint8 a3, Sint16 x4, Sint16 y4, Sint32 z4, Uint16 c4, Uint8 a4);

/* Draws a Quad with texture and without alpha value */
PREFIX void spQuad_tex(Sint16 x1, Sint16 y1, Sint32 z1, Sint16 u1, Sint16 v1, Uint16 c1, Sint16 x2, Sint16 y2, Sint32 z2, Sint16 u2, Sint16 v2, Uint16 c2, Sint16 x3, Sint16 y3, Sint32 z3, Sint16 u3, Sint16 v3, Uint16 c3, Sint16 x4, Sint16 y4, Sint32 z4, Sint16 u4, Sint16 v4, Uint16 c4);

/* Draws a Quad with texture and with alpha value */
PREFIX void spQuad_tex_alpha(Sint16 x1, Sint16 y1, Sint32 z1, Sint16 u1, Sint16 v1, Uint16 c1, Uint8 a1, Sint16 x2, Sint16 y2, Sint32 z2, Sint16 u2, Sint16 v2, Uint16 c2, Uint8 a2, Sint16 x3, Sint16 y3, Sint32 z3, Sint16 u3, Sint16 v3, Uint16 c3, Uint8 a3, Sint16 x4, Sint16 y4, Sint32 z4, Sint16 u4, Sint16 v4, Uint16 c4, Uint8 a4);


/* Reallocates the zBuffer. If you switch to a new Render Target, this function
 * is called */
PREFIX void spReAllocateZBuffer(int x,int y);

/* Reset the zBuffer. If you switch to a new Render Target, this function
 * is NOT called. You have to call it before you draw by yourself! */
PREFIX void spResetZBuffer();

/* Returns the Z Buffer Array*/
PREFIX Sint32* spGetZBuffer();

#endif