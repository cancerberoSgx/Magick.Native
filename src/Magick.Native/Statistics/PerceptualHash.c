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
#include "PerceptualHash.h"

MAGICK_NATIVE_EXPORT void PerceptualHash_DisposeList(ChannelPerceptualHash *list)
{
  RelinquishMagickMemory(list);
}

MAGICK_NATIVE_EXPORT const ChannelPerceptualHash *PerceptualHash_GetInstance(const Image *instance, const ChannelPerceptualHash *list, const size_t channel)
{
  if ((GetPixelChannelTraits(instance, (PixelChannel)channel) & UpdatePixelTrait) == 0)
    return (ChannelPerceptualHash *)NULL;

  return &list[(PixelChannel)channel];
}