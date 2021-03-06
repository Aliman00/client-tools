// ======================================================================
//
// LayerProperty.cpp
// Copyright 2001 Sony Online Entertainment Inc.
// All Rights Reserved.
//
// ======================================================================

#include "sharedObject/FirstSharedObject.h"
#include "sharedObject/LayerProperty.h"


// ======================================================================

PropertyId LayerProperty::getClassPropertyId()
{
//	PropertyId id = LabelHash::hashLabel( "Property", "Layer" );
//	return id;
	return PROPERTY_HASH(Layer, 0x78e8a2d2);
}

// ======================================================================

LayerProperty::LayerProperty(Object& thisObject) : 
Property(getClassPropertyId(), thisObject),
m_layer(NULL)
{
}

//-------------------------------------------------------------------------

LayerProperty::~LayerProperty()
{
	if (m_layer != NULL)
	{
		delete m_layer;
		m_layer = NULL;
	}
}

//-------------------------------------------------------------------------

void LayerProperty::setLayer(TerrainGenerator::Layer* layer)
{
	if (m_layer != NULL)
		delete m_layer;

	m_layer = layer;
}

// ======================================================================
