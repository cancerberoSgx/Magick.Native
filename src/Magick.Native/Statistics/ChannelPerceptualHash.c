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
#include "ChannelPerceptualHash.h"

MAGICK_NATIVE_EXPORT const double ChannelPerceptualHash_GetHclpHuPhash(const ChannelPerceptualHash *instance, const size_t index)
{
  return instance->phash[1][index];
}

MAGICK_NATIVE_EXPORT const double ChannelPerceptualHash_GetSrgbHuPhash(const ChannelPerceptualHash *instance, const size_t index)
{
  return instance->phash[0][index];
}