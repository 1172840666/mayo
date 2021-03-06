/****************************************************************************
** Copyright (c) 2020, Fougue Ltd. <http://www.fougue.pro>
** All rights reserved.
** See license at https://github.com/fougue/mayo/blob/master/LICENSE.txt
****************************************************************************/

#pragma once

#include "../base/property_builtins.h"
#include "../base/property_enumeration.h"
#include "graphics_entity.h"

#include <QtCore/QCoreApplication>

namespace Mayo {

class GraphicsEntityBasePropertyOwner : public PropertyOwnerSignals {
    Q_DECLARE_TR_FUNCTIONS(GraphicsEntityBasePropertyOwner)
public:
    GraphicsEntityBasePropertyOwner(const GraphicsEntity& gfxEntity);
    void onPropertyChanged(Property* prop) override;

private:
    PropertyBool m_propertyIsVisible;
    PropertyEnumeration m_propertyDisplayMode;
    GraphicsEntity m_gfxEntity;
};

} // namespace Mayo
