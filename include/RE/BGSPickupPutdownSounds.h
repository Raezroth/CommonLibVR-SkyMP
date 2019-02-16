#pragma once

#include "RE/BaseFormComponent.h"  // BaseFormComponent
#include "RE/FormTypes.h"  // BGSSoundDescriptorForm


namespace RE
{
	class BGSPickupPutdownSounds : public BaseFormComponent
	{
	public:
		virtual ~BGSPickupPutdownSounds();									// 00

		// override (BaseFormComponent)
		virtual void	Init() override;									// 01
		virtual void	ReleaseRefs() override;								// 02 - { return; }
		virtual void	CopyFromBase(BaseFormComponent* a_rhs) override;	// 03


		// members
		BGSSoundDescriptorForm*	pickUp;		// 08 - YNAM
		BGSSoundDescriptorForm*	putDown;	// 10 - ZNAM
	};
	STATIC_ASSERT(sizeof(BGSPickupPutdownSounds) == 0x18);
}