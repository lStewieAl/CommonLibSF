#include "RE/T/TESObjectREFR.h"

namespace RE
{
	TESObjectREFR* TESObjectREFR::GetAttachedSpaceship()
	{
		using func_t = decltype(&TESObjectREFR::GetAttachedSpaceship);
		REL::Relocation<func_t> func{ REL::Offset(0x02B3A8D4) };
		return func(this);
	}

	bool TESObjectREFR::HasKeyword(BGSKeyword* a_keyword)
	{
		using func_t = decltype(&TESObjectREFR::HasKeyword);
		REL::Relocation<func_t> func{ REL::Offset(0x0139EE28) };
		return func(this, a_keyword);
	}

	bool TESObjectREFR::IsCrimeToActivate()
	{
		using func_t = decltype(&TESObjectREFR::IsCrimeToActivate);
		REL::Relocation<func_t> func{ REL::Offset(0x01A0DCA0) };
		return func(this);
	}

	bool TESObjectREFR::IsInSpace()
	{
		using func_t = decltype(&TESObjectREFR::IsInSpace);
		REL::Relocation<func_t> func{ REL::Offset(0x01A0E208) };
		return func(this);
	}
}
