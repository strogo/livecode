/* Copyright (C) 2015 LiveCode Ltd.
 
 This file is part of LiveCode.
 
 LiveCode is free software; you can redistribute it and/or modify it under
 the terms of the GNU General Public License v3 as published by the Free
 Software Foundation.
 
 LiveCode is distributed in the hope that it will be useful, but WITHOUT ANY
 WARRANTY; without even the implied warranty of MERCHANTABILITY or
 FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 for more details.
 
 You should have received a copy of the GNU General Public License
 along with LiveCode.  If not see <http://www.gnu.org/licenses/>.  */

#include "prefix.h"
#include "parsedef.h"
#include "uidc.h"

#include "widget.h"
#include "native-layer.h"

////////////////////////////////////////////////////////////////////////////////

// Stub methods for server platforms
MCNativeLayer *MCNativeLayer::CreateNativeLayer(MCObject *p_object, void *p_native_view)
{
	return nil;
}

bool MCNativeLayer::CreateNativeContainer(void *&r_view)
{
	return false;
}

void MCNativeLayer::ReleaseNativeView(void *p_view)
{
}

////////////////////////////////////////////////////////////////////////////////
