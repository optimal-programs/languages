// Language strings
// Author: Optimal Programs
// License: MIT License
//---------------------------------------------------------------------------
#include <wchar.h>
#include <string.h>
//---------------------------------------------------------------------------
#include "language_utf8_set.h"
#include "language_string_id.h"
//---------------------------------------------------------------------------
void fill_language(void)
{
	//new
	strcpy(sAfrikaans, "Afrikaans");
	strcpy(sAlbanian, "Albanian");
	strcpy(sArabic, "العربية");
	strcpy(sBulgarian, "българин");
	strcpy(sChinese_Simplified, "简体中文）");
	strcpy(sChinese_Traditional, "中國傳統的）");
	strcpy(sCroatian, "Hrvatski");
	strcpy(sCzech, "Český");
	strcpy(sDanish, "Dansk");
	strcpy(sDutch, "Nederlands");
	strcpy(sEnglish, "English");
	strcpy(sEstonian, "Eestlane");
	strcpy(sFarsi, "فارسی");
	strcpy(sFinnish, "Suomen");
	strcpy(sFrench, "Français");
	strcpy(sGerman, "Deutsch");
	strcpy(sGreek, "Ελληνικά");
	strcpy(sHungarian, "Magyar");
	strcpy(sIndonesian, "Indonesia");
	strcpy(sItalian, "Italiano");
	strcpy(sKorean, "한국인");
	strcpy(sLatvian, "Latviešu");
	strcpy(sLithuanian, "Lietuvių");
	strcpy(sMalaysian, "Malaysia");
	strcpy(sNorwegian, "Norsk");
	strcpy(sPolish, "Polski");
	strcpy(sPortuguese, "Português");
	strcpy(sRomana, "Română");
	strcpy(sRussian, "Русский");
	strcpy(sSlovak, "Slovák");
	strcpy(sSlovenian, "Slovenščina");
	strcpy(sSpanish, "Español");
	strcpy(sSwedish, "Svenska");
	strcpy(sThai, "คนไทย");
	strcpy(sTurkish, "Türkçe");
	strcpy(sUkrainian, "українська");
	strcpy(sVietnamese, "Tiếng Việt");

	//old - DO NOT TOUCH
	strcpy(sAfrikaans_old, "Afrikaans");
	strcpy(sAlbanian_old, "Albanian");
	strcpy(sArabic_old, "Arabic");
	strcpy(sBulgarian_old, "Bulgarian");
	strcpy(sChinese_Simplified_old, "Chinese (Simplified)");
	strcpy(sChinese_Traditional_old, "Chinese (Traditional)");
	strcpy(sCroatian_old, "Croatian");
	strcpy(sCzech_old, "Czech");
	strcpy(sDanish_old, "Danish");
	strcpy(sDutch_old, "Dutch");
	strcpy(sEnglish_old, "English");
	strcpy(sEstonian_old, "Estonian");
	strcpy(sFarsi_old, "Farsi");
	strcpy(sFinnish_old, "Finnish");
	strcpy(sFrench_old, "French");
	strcpy(sGerman_old, "German");
	strcpy(sGreek_old, "Greek");
	strcpy(sHungarian_old, "Hungarian");
	strcpy(sIndonesian_old, "Indonesian");
	strcpy(sItalian_old, "Italian");
	strcpy(sKorean_old, "Korean");
	strcpy(sLatvian_old, "Latvian");
	strcpy(sLithuanian_old, "Lithuanian");
	strcpy(sMalaysian_old, "Malaysian");
	strcpy(sNorwegian_old, "Norwegian");
	strcpy(sPolish_old, "Polish");
	strcpy(sPortuguese_old, "Portuguese");
	strcpy(sRomana_old, "Romana");
	strcpy(sRussian_old, "Russian");
	strcpy(sSlovak_old, "Slovak");
	strcpy(sSlovenian_old, "Slovenian");
	strcpy(sSpanish_old, "Spanish");
	strcpy(sSwedish_old, "Swedish");
	strcpy(sThai_old, "Thai");
	strcpy(sTurkish_old, "Turkish");
	strcpy(sUkrainian_old, "Ukrainian");
	strcpy(sVietnamese_old, "Vietnamese");

	int i = 0;
	strcpy(language_name[i++], sAfrikaans);
	strcpy(language_name[i++], sAlbanian);
	strcpy(language_name[i++], sArabic);
	strcpy(language_name[i++], sBulgarian);
	strcpy(language_name[i++], sChinese_Simplified);
	strcpy(language_name[i++], sChinese_Traditional);
	strcpy(language_name[i++], sCroatian);
	strcpy(language_name[i++], sCzech);
	strcpy(language_name[i++], sDanish);
	strcpy(language_name[i++], sDutch);
	strcpy(language_name[i++], sEnglish);
	strcpy(language_name[i++], sEstonian);
	strcpy(language_name[i++], sFarsi);
	strcpy(language_name[i++], sFinnish);
	strcpy(language_name[i++], sFrench);
	strcpy(language_name[i++], sGerman);
	strcpy(language_name[i++], sGreek);
	strcpy(language_name[i++], sHungarian);
	strcpy(language_name[i++], sIndonesian);
	strcpy(language_name[i++], sItalian);
	strcpy(language_name[i++], sKorean);
	strcpy(language_name[i++], sLatvian);
	strcpy(language_name[i++], sLithuanian);
	strcpy(language_name[i++], sMalaysian);
	strcpy(language_name[i++], sNorwegian);
	strcpy(language_name[i++], sPolish);
	strcpy(language_name[i++], sPortuguese);
	strcpy(language_name[i++], sRomana);
	strcpy(language_name[i++], sRussian);
	strcpy(language_name[i++], sSlovak);
	strcpy(language_name[i++], sSlovenian);
	strcpy(language_name[i++], sSpanish);
	strcpy(language_name[i++], sSwedish);
	strcpy(language_name[i++], sThai);
	strcpy(language_name[i++], sTurkish);
	strcpy(language_name[i++], sUkrainian);
	strcpy(language_name[i++], sVietnamese);

	i = 0;
	strcpy(language_name_old[i++], sAfrikaans_old);
	strcpy(language_name_old[i++], sAlbanian_old);
	strcpy(language_name_old[i++], sArabic_old);
	strcpy(language_name_old[i++], sBulgarian_old);
	strcpy(language_name_old[i++], sChinese_Simplified_old);
	strcpy(language_name_old[i++], sChinese_Traditional_old);
	strcpy(language_name_old[i++], sCroatian_old);
	strcpy(language_name_old[i++], sCzech_old);
	strcpy(language_name_old[i++], sDanish_old);
	strcpy(language_name_old[i++], sDutch_old);
	strcpy(language_name_old[i++], sEnglish_old);
	strcpy(language_name_old[i++], sEstonian_old);
	strcpy(language_name_old[i++], sFarsi_old);
	strcpy(language_name_old[i++], sFinnish_old);
	strcpy(language_name_old[i++], sFrench_old);
	strcpy(language_name_old[i++], sGerman_old);
	strcpy(language_name_old[i++], sGreek_old);
	strcpy(language_name_old[i++], sHungarian_old);
	strcpy(language_name_old[i++], sIndonesian_old);
	strcpy(language_name_old[i++], sItalian_old);
	strcpy(language_name_old[i++], sKorean_old);
	strcpy(language_name_old[i++], sLatvian_old);
	strcpy(language_name_old[i++], sLithuanian_old);
	strcpy(language_name_old[i++], sMalaysian_old);
	strcpy(language_name_old[i++], sNorwegian_old);
	strcpy(language_name_old[i++], sPolish_old);
	strcpy(language_name_old[i++], sPortuguese_old);
	strcpy(language_name_old[i++], sRomana_old);
	strcpy(language_name_old[i++], sRussian_old);
	strcpy(language_name_old[i++], sSlovak_old);
	strcpy(language_name_old[i++], sSlovenian_old);
	strcpy(language_name_old[i++], sSpanish_old);
	strcpy(language_name_old[i++], sSwedish_old);
	strcpy(language_name_old[i++], sThai_old);
	strcpy(language_name_old[i++], sTurkish_old);
	strcpy(language_name_old[i++], sUkrainian_old);
	strcpy(language_name_old[i++], sVietnamese_old);
}
// ----------------------------------------------------------------------------
int get_language_name_index(const char* a_language_name)
{
	for (int i = 0; i < num_languages; i++)
		if (!strcmp(a_language_name, language_name[i]))
			return i;

	for (int i = 0; i < num_languages; i++)
		if (!strcmp(a_language_name, language_name_old[i]))
			return i;

	if (!strcmp(a_language_name, "Chinese"))
		return get_language_name_index(sChinese_Simplified);

	return -1;
}
// ----------------------------------------------------------------------------
