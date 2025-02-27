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
#pragma once

MAGICK_NATIVE_EXPORT PixelInfo *MagickColor_Create(void);

MAGICK_NATIVE_EXPORT void MagickColor_Dispose(PixelInfo *);

MAGICK_NATIVE_EXPORT MagickSizeType MagickColor_Count_Get(const PixelInfo *);

MAGICK_NATIVE_EXPORT Quantum MagickColor_Red_Get(const PixelInfo *);
MAGICK_NATIVE_EXPORT void MagickColor_Red_Set(PixelInfo *, const Quantum);

MAGICK_NATIVE_EXPORT Quantum MagickColor_Green_Get(const PixelInfo *);
MAGICK_NATIVE_EXPORT void MagickColor_Green_Set(PixelInfo *, const Quantum);

MAGICK_NATIVE_EXPORT Quantum MagickColor_Blue_Get(const PixelInfo *);
MAGICK_NATIVE_EXPORT void MagickColor_Blue_Set(PixelInfo *, const Quantum);

MAGICK_NATIVE_EXPORT Quantum MagickColor_Alpha_Get(const PixelInfo *);
MAGICK_NATIVE_EXPORT void MagickColor_Alpha_Set(PixelInfo *, const Quantum);

MAGICK_NATIVE_EXPORT Quantum MagickColor_Black_Get(const PixelInfo *);
MAGICK_NATIVE_EXPORT void MagickColor_Black_Set(PixelInfo *, const Quantum);

MAGICK_NATIVE_EXPORT MagickBooleanType MagickColor_IsCMYK_Get(const PixelInfo *);
MAGICK_NATIVE_EXPORT void MagickColor_IsCMYK_Set(PixelInfo *,MagickBooleanType);

MAGICK_NATIVE_EXPORT PixelInfo *MagickColor_Clone(const PixelInfo *);

MAGICK_NATIVE_EXPORT MagickBooleanType MagickColor_FuzzyEquals(const PixelInfo *, const PixelInfo *, const Quantum);

MAGICK_NATIVE_EXPORT MagickBooleanType MagickColor_Initialize(PixelInfo *, const char *);