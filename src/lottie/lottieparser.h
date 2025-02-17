/* 
 * Copyright (c) 2018 Samsung Electronics Co., Ltd. All rights reserved.
 * 
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 * 
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef LOTTIEPARSER_H
#define LOTTIEPARSER_H

#include "rlottie.h"
#include "lottiemodel.h"
#include <memory>

class LottieParserImpl;
class LottieParser {
public:
    ~LottieParser();
    LottieParser(char *str, const char *dir_path,
                 const std::vector<std::pair<std::uint32_t, std::uint32_t>> &colorReplacements = {},
                 rlottie::FitzModifier fitzModifier = rlottie::FitzModifier::None,
                 rlottie::ParserColorFormat colorFormat = rlottie::ParserColorFormat::Rgb);
    std::shared_ptr<LOTModel> model();
private:
   std::unique_ptr<LottieParserImpl>  d;
};

#endif // LOTTIEPARSER_H
