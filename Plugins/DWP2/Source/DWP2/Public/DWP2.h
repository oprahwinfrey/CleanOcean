/*    Copyright (c) 2021, NWH coding, vl. Aron Rescec
 *    All rights reserved
 *
 *    This file is part of the NWH Dynamic Water Physics 2 for Unreal Engine
 *    and is licensed under the Unreal Engine EULA:
 *    https://www.unrealengine.com/en-US/eula/publishing
 */

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FDWP2Module : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
