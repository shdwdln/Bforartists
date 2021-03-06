/*
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * The Original Code is Copyright (C) Blender Foundation.
 * All rights reserved.
 */

/** \file
 * \ingroup modifiers
 */


#ifndef __MOD_GPENCIL_UTIL_H__
#define __MOD_GPENCIL_UTIL_H__

struct GHash;
struct MDeformVert;
struct Main;
struct Material;
struct Object;
struct bGPDlayer;
struct bGPDstroke;

bool is_stroke_affected_by_modifier(
        struct Object *ob, char *mlayername, int mpassindex,
        int gpl_passindex, int minpoints,
        bGPDlayer *gpl, bGPDstroke *gps,
        bool inv1, bool inv2, bool inv3);

float get_modifier_point_weight(struct MDeformVert *dvert, bool inverse, int def_nr);

void gpencil_apply_modifier_material(
        struct Main *bmain, struct Object *ob, struct Material *mat,
        struct GHash *gh_color, struct bGPDstroke *gps, bool crt_material);

#endif  /* __MOD_GPENCIL_UTIL_H__ */
