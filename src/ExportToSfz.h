/**
 * File name: ExportToSfz.h
 * Project: Geonkick (A percussion synthesizer)
 *
 * Copyright (C) 2020 Iurie Nistor <http://iuriepage.wordpress.com>
 *
 * This file is part of Geonkick.
 *
 * GeonKick is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#ifndef GEONGKICK_EXPORT_TO_SFZ_H
#define GEONGKICK_EXPORT_TO_SFZ_H

#include "ExportAbstract.h"

class KitModel;

class ExportToSfz : public ExportAbstract {
 public:
        ExportToSfz(KitModel *model, const std::filesystem::path &file);
        bool doExport() override;
        
protected:
        std::filesystem::path dataPath() const;
        static std::string cleanName(const std::string &name);

 private:
        std::string sfzFileName;
        KitModel *kitModel;
};

#endif // GEONGKICK_EXPORT_TO_SFZ_H
