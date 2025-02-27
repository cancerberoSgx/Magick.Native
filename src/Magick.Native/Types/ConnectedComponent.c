// Copyright 2013-2019 Dirk Lemstra <https://github.com/dlemstra/Magick.Native/>
//
// Licensed under the ImageMagick License (the "License"); you may not use this file except in
// compliance with the License. You may obtain a copy of the License at
//
//   https://www.imagemagick.org/script/license.php
//
// Unless required by applicable law or agreed to in writing, software distributed under the
// License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions
// and limitations under the License.

#include "Stdafx.h"
#include "ConnectedComponent.h"
#include "Colors/MagickColor.h"

MAGICK_NATIVE_EXPORT void ConnectedComponent_DisposeList(CCObjectInfo *list)
{
  RelinquishMagickMemory(list);
}

MAGICK_NATIVE_EXPORT double ConnectedComponent_GetArea(const CCObjectInfo *instance)
{
  return instance->area;
}

MAGICK_NATIVE_EXPORT const PointInfo *ConnectedComponent_GetCentroid(const CCObjectInfo *instance)
{
  return &instance->centroid;
}

MAGICK_NATIVE_EXPORT const PixelInfo *ConnectedComponent_GetColor(const CCObjectInfo *instance)
{
  return MagickColor_Clone(&instance->color);
}

MAGICK_NATIVE_EXPORT size_t ConnectedComponent_GetHeight(const CCObjectInfo *instance)
{
  return instance->bounding_box.height;
}

MAGICK_NATIVE_EXPORT ssize_t ConnectedComponent_GetId(const CCObjectInfo *instance)
{
  return instance->id;
}

MAGICK_NATIVE_EXPORT size_t ConnectedComponent_GetWidth(const CCObjectInfo *instance)
{
  return instance->bounding_box.width;
}

MAGICK_NATIVE_EXPORT ssize_t ConnectedComponent_GetX(const CCObjectInfo *instance)
{
  return instance->bounding_box.x;
}

MAGICK_NATIVE_EXPORT ssize_t ConnectedComponent_GetY(const CCObjectInfo *instance)
{
  return instance->bounding_box.y;
}

MAGICK_NATIVE_EXPORT const CCObjectInfo *ConnectedComponent_GetInstance(const CCObjectInfo *list, const size_t index)
{
  return list + index;
}