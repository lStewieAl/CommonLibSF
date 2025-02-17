#pragma once

#include "RE/B/BaseFormComponent.h"

namespace RE
{
	class TESRace;

	class TESRaceForm : public BaseFormComponent
	{
	public:
		SF_RTTI_VTABLE(TESRaceForm);

		// members
		TESRace* formRace;  // 08
	};
	static_assert(sizeof(TESRaceForm) == 0x10);
}  // namespace RE
