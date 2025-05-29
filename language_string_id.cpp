// Language strings
// Author: Optimal Programs
// License: MIT License
//---------------------------------------------------------------------------
#include <string.h>
//---------------------------------------------------------------------------
#include "language_utf8_set.h"
#include "language_string_id.h"
//---------------------------------------------------------------------------
char language_name[num_languages][50];
char language_name_old[num_languages][50];
// ----------------------------------------------------------------------------
//new
char sAfrikaans[50];
char sAlbanian[50];
char sArabic[50];
char sBulgarian[50];
char sChinese_Simplified[50];
char sChinese_Traditional[50];
char sCroatian[50];
char sCzech[50];
char sDanish[50];
char sDutch[50];
char sEnglish[50];
char sEstonian[50];
char sFarsi[50];
char sFinnish[50];
char sFrench[50];
char sGerman[50];
char sGreek[50];
char sHungarian[50];
char sIndonesian[50];
char sItalian[50];
char sKorean[50];
char sLatvian[50];
char sLithuanian[50];
char sMalaysian[50];
char sNorwegian[50];
char sPolish[50];
char sPortuguese[50];
char sRomana[50];
char sRussian[50];
char sSlovak[50];
char sSlovenian[50];
char sSpanish[50];
char sSwedish[50];
char sThai[50];
char sTurkish[50];
char sUkrainian[50];
char sVietnamese[50];
//old
char sAfrikaans_old[50];
char sAlbanian_old[50];
char sArabic_old[50];
char sBulgarian_old[50];
char sChinese_Simplified_old[50];
char sChinese_Traditional_old[50];
char sCroatian_old[50];
char sCzech_old[50];
char sDanish_old[50];
char sDutch_old[50];
char sEnglish_old[50];
char sEstonian_old[50];
char sFarsi_old[50];
char sFinnish_old[50];
char sFrench_old[50];
char sGerman_old[50];
char sGreek_old[50];
char sHungarian_old[50];
char sIndonesian_old[50];
char sItalian_old[50];
char sKorean_old[50];
char sLatvian_old[50];
char sLithuanian_old[50];
char sMalaysian_old[50];
char sNorwegian_old[50];
char sPolish_old[50];
char sPortuguese_old[50];
char sRomana_old[50];
char sRussian_old[50];
char sSlovak_old[50];
char sSlovenian_old[50];
char sSpanish_old[50];
char sSwedish_old[50];
char sThai_old[50];
char sTurkish_old[50];
char sUkrainian_old[50];
char sVietnamese_old[50];
//---------------------------------------------

char s_Centering[100];
char sAddgrindingthicknesstopartsize[350];

char sGrinding[100];
char sGrinding_Top[150];
char sGrinding_Left[150];
char sGrinding_Bottom[150];
char sGrinding_Right[150];

char s0meansanynumberofpieces[350];
char sPieces[350];
char sUtilizationandWastes[350];
char sAbout[350];
char sAccept[350];
char sAcceptall[350];
char sAcceptcurrentonly[350];
char sAcceptthecurrentsolution[350];
char sAdd[350];
char sAddapiece[350];
char sAddasimpleproducttoDemand[350];
char sAddproductnametolabel[350];
char sAddress[350];
char sAddselectedsizetoInventory[350];
char sAdhesivelabels[350];
char sAdhesivelabelwithinformationaboutpiecesinDemandCustomernameLabelSizeCurrentData[350];
char sAdhesivelabelwithinformationaboutsheetsinInventory[350];
char sAlloffcutswhichhavethesizegreaterthanthisvaluewillbeaddedtoInventory[350];
char sAllowRotation[350];
char sAllpredefinedproducts[350];
char sAnewwindowwillbedisplayedwheretheusercansettheedgebandsforeachedge[350];
char sAnewwindowwillbedisplayedwheretheusercansetthetrimvalueforeachedgeofthsheet[350];
char sAnewwindowwillbedisplayedwheretheusercansetthegrindingvalueforeachedgeofthsheet[350];

char sAngle[50];
char sAngle_1[50];
char sAngle_2[50];

char sAreaofusedsheets[350];
char sAshortdescriptionofthesheet[350];
char sAtleastonepart[350];
char sBandtypes[350];
char sBothsizesoftheoffcutsmustbegreaterthanthisvalue[350];
char sBottom[350];
char sBottomcoordinateofthedefect[350];
char sBreakCut[350];
char sBuy[350];
char sBuynow[350];
char sCancel[350];
char sCannotBeEmpty[350];

char sChoose[350];
char sChooseProduct[350];
char sClear[350];
char sClosewindow[350];
char sColor[350];
char sColorofedgeband[350];
char sColorPattern[350];
char sColorpiecesandwastes[350];
char sColumns[350];
char sComment[350];
char sCompanyname[350];
char sComplexMaterialExists[350];
char sComputerCode[350];
char sComputerCodefromyourcomputer[350];
char sComputethetotalpriceofDemand[350];
char sContents[350];
char sContinutComanda[350];
char sContinutDepozit[350];
char sCouldNotSaveFile1[350];
char sCouldNotSaveFile2[600];
char sCreationdateYMDHMS[350];
char sCurrentMaterial[350];
char sCustomer[350];
char sCustomerName[350];
char sCutlength[350];
char sCuts[100];
char s_relative_cuts[350];
char sCutterThickness[350];
char sThetotallengthofcutting[350];
char sData[350];
char sDateymdhms[350];
char sDaysLeft[350];
char sStandard[50];

char sDefects[350];
char sDefectsManager[350];
char sDefectsofthematerialNopiecescanbeplacedinthefaultyzone[350];
char sDelete[350];
char sDeletePiece[350];
char sDEMAND[350];
char sFileName[350];
char sDemandutilization[350];
char sDepozitulmodificat[350];
char sDepozitvid[350];
char sDiagram[50];
char sDiagrams[50];
char sDiagramasatable[350];
char sDimensiuniplaca[350];
char sDonotuseit[350];
char sDoYouWantToClearTheData[350];
char sDoYouWantToSaveDemand[350];
char sDoYouWantToSaveParts[350];
char sDoYouWantToSaveRepository[350];
char sDrawthesolutioncolorful[350];
char sDuplicateTypes[350];
char sDuplicateTypesWithComplex[350];
char sDuplicateValues[350];
char sEdgeband[150];
char sEdgeband_Top[150];
char sEdgeband_Left[150];
char sEdgeband_Bottom[150];
char sEdgeband_Right[150];
char sEdgebandingwhichisplacedontheedgesofyourpiecePleasedefineedgebandingtypesfromMaterialsEdgeBandingmenu[350];
char sEdgebandsthatwillbeappliedtoeachpart[350];
char sEdgeBandTolerance[350];
char sEdgesthatmustbecutduefaults[350];
char sEdgetoedge[350];
char sEdit[350];
char sEmail[350];
char sEmptyData[350];
char sEnabledisabledefectsoftheinventorysheets[350];
char sEnterLabel[350];
char sEnterTheMaterialName[350];
char sEnterTheProductName[350];
char sEvaluationError[350];
char sExit[350];
char sExpired[350];
char sExport[350];
char sExporttoDXFformat[350];
char sExporttoExcel[350];
char sExpresieIncorecta[350];
char sExtraComponents[350];
char sExtracomponentsattachedtoDemand[350];
char sFile[350];
char sFindoptimalbarsheetsize[350];
char sFindoptimalsizeofInventorypieces[350];
char sFirstcutMultiplestages[350];
char sFirstdirectionforcutishorizontal[350];
char sFirstdirectionforcutisvertical[350];
char sFollowthecontourofpieces[350];
char sFont[350];
char sFontsize[350];
char sFullInfo[350];
char sDisposedWaste[350];
char sGraindirection[350];
char sGraphic[350];
char sGreaterorequalto[350];
char sGrosimeTaieturaScalata[500];
char sGroupidenticallayouts[350];
char sHeight[350];
char sHeighttolerance[350];
char sHelp[350];
char sHistory[350];
char sHorizontal[40];
char sHowtodisplayprintedgebands[350];
char sIfyousetthebandforoneedgeallwillreceivethesamevalue[350];
char sImageBounds[350];
char sIncorrectPassword[350];
char sInformationaboutcustomer[350];
char sInputALanguageName[350];
char sInsertPiece[350];
char sInterface[350];
char sInterfaceSettings[350];
char sInvalidHardware[350];
char sInvalidNumber[350];
char sInvalidOrderOfComputation[350];
char sInvalidRegistration[350];
char sInvalidTime[350];
char sInventory[350];
char sLabel[350];
char sLabels[350];
char sLanguage[350];
char sLatimeanumar0[350];
char sLatimeanumarreal[350];
char sLeft[350];
char sLeftcoordinateofthedefect[350];
char sLength[350];
char sLengthofthepiecestocut[350];
char sLengthofthepiecestocutfrom[350];
char sLengthofusedbars[350];
char sLinethickness[350];
char sLoadafileandappenddatatothecurrentDemand[350];
char sLoadanexistingDemandfromafile[350];
char sLoadAppend[350];
char sLoadInventory[350];
char sLoadInventoryandDemand[350];
char sLoadResults[350];
char sLongerexecutiontime[350];
char sLungime[350];
char sLungimeanumar0[350];
char sLungimeanumarreal[350];
char sLungimeaTotalaFolosita[350];
char sMagnification[350];
char sMagnify[350];
char sMaterial[350];
char sMaterialName[350];
char sMaterialstypes[350];
char sMaximalCutLength[350];
char sMaximallengthofacut[350];
char sMaxlength[350];
char sMaxPiecesperBar[350];
char sMaxwidth[350];
//char sMeasurementunit[350];
char sMinimalBreakSize[350];
char sMinimalUsefulSize[350];
char sMinimalwastesizetoInventory[350];
char sMinlength[350];
char sMinwidth[350];
char sMirror[350];
//char sMiscelaneum[350];
char sMiscellaneous[350];
char sModify[350];
char sModifytheselectedpiece[350];
char sMultiplestages[350];
char sName[350];
char sNameofedgeband[350];
char sNewDEMANDUnsaveddatawillbelost[350];
char sNewLanguage[350];
char sNewMaterial[350];
char sNewPasswordincorectlyintroduced[350];
char sNewProduct[350];
char sNo[350];

char sNumarBucati[350];
char sNumberOfCopies[350];
char sNumberofstages[350];
char sNusuficienteplacidepozit[1000];
char sOfficeNotInstaled[350];
char sOldpassworddoesnotmatch[350];
char sOnlinehelp[350];
char sOnlypiecesofthesameheightinthelaststage[350];
char sOpen[350];
char sOptimization[350];
char sOptimizationDone[500];
char sOptimizationType[350];
char sOptionsrelatedtotheinterface[350];
char sor[350];
char sOthercomponents[350];
char sOtherstatistics[350];
char sParameter[350];
char sParts[350];
char sPattern[350];
char sPatternforwaste[350];
char sPerimeter[350];
char sPhone[350];
char sPicture[350];
char sPiece[350];
char sPieceindex[350];
char sPiecesize[350];
char sPiecesizelabeledgebandwillbeprinted[350];
char sPierdere[350];
char sPlacilefolositeDepozit[350];
char sPleaseEnterSomeTypesOfMaterials[350];
char sPleasesendtheNameandtheCodetotheaddresscontactoptimalprogramscominordertoobtaintheRegistrationKey[350];
char sPretulnumar0[350];
char sPretulnumarreal[350];
char sPreview[350];
char sPrice[350];
char sPricepersheet[350];
char sPricepersquareunitofmaterial[350];
char sPriceperunit[350];
char sPrint[350];
char sPrintdiagramsastables[350];
char sPrinterBounds[350];
char sPrintonlyutilizedarea[350];
char sPrintthecontentsoftheDemand[350];
char sPrintthecontentsoftheInventory[350];
char sPrintthecurrentsolution[350];
char sPriority[350];
char sPrioritytocutapieceZero0isthehighestpriority[350];
char sProcentul0100[350];
char sProcentulnumarreal[350];
char sProductdefinition[350];
char sProductExists[350];
char sProductName[350];
char sProducts[350];
char sQuantity[350];
char sQuantitynumberofsheetsofthistype[350];
char sRedefinetypesofedgeband[350];
char sRedefinetypesofmaterial[350];
char sRegistration[350];
char sRegistrationKeyfromOptimalPrograms[350];
char sRegistrationSuccessful[350];
char sRemoveallpiecesinInventory[350];
char sRemoveallpiecesinREPOSITORY[350];
char sRemoveCut[350];
char sRemovetheselectedpiece[350];
char sRequestedMaterial[350];
char sRestore[350];
char sResults[350];
char sReusedwaste[350];
char sRight[350];
char sRightcoordinateofthedefect[350];
char sRotation[350];
char sRoundAllFractionsTo[350];
char sRows[350];
char sRun[350];
char s_previous_optimizations[350];
char sRunningtime[350];
char sSameforall[350];
char sSave[350];
char sSaveAllImages[350];
char sSaveAs[350];
char sSaveChanges[350];
char sSaveCurrentImage[350];
char sSavedataparameters[350];
char sSaveInventory[350];
char sSaveInventoryandDemand[350];
char sSaveResults[350];
char sSaveStatisticsinafile[350];
char sSavethecurrentimage[350];
char sSavethecurrentimageorstatistic[350];
char sSavetheDEMANDinafile[350];
char sSavetheDemandinafilewithadifferentname[350];
char sSavetheREPOSITORYinafile[350];
char sSerialNumber[350];
char sSetDefaultValues[350];
char sSetedgeband[350];
char sSetedgetrim[350];
char sSetthesameedgebandforalledges[350];
char sSetthesametrimforalledges[350];
char sSettings[350];
char sSheet[350];
char sSheetsBarstypes[350];
char sSheetSize[350];
char sSheetsperPage[350];
char sShorterexecutiontime[350];
char sShowallsimpleproducts[350];
char sShowcustomername[350];
char sShowdiagramasatable[350];
char sShowedgeband[350];
char sShowedgebandssettinginanewwindow[350];
char s_Piece_label[100];
char s_Show_piece_label[100];
char sShowRemovethesizeofthepiecesinthecurrentsolution[350];
char sShowRemovethesizeofthewastesinthecurrentsolution[350];
char s_Piece_size[350];
char s_Show_size_of_pieces[350];
char s_Scrap_size[350];
char sShowtotalcutlength[350];
char sShowtrimedgesettingsinanewwindow[350];
char sShowgrindingsettingsinanewwindow[350];
char s_Show_scrap_label[350];
char s_Scrap_label[350];
char sSimpleMaterialExists[350];
char sSinglePieceStrips[350];
char sSizes[350];
char sSmallerorequalto[350];
char sSpecifyhowdifferentthepiecesinthelaststagecanbeValue0meansnodifference[350];
char sSpecifyifpiecesinthelaststagecanbedifferentornotdepeultimaetapapotfidiferitesaunucadimensiune[350];
char sSpecifyifthepiececanberotatedornotIfnotitwillbecutinthesamewayasitwasintroducedinDemandLengthofthepieceparalleltothelengthofthesheet[500];
char sSpecifyinhowmanystageswemakethecutsDuringastageallcutshavethesamedirection[350];
char sStartthesearchprocess[350];
char sStatistics[350];
char sReports[350];
char sStatisticsE[350];
char sStatisticsforeachtypeofmaterial[350];
char sStep[350];
char sStergeDepozit[350];
char sStergeMaterial[350];
char sStergePiesa[350];

char sStopthesearchprocess[350];
char sStrongoptimization[350];
char sSubtractthebandthicknessfrompiecesize[350];
char sSuprafataTotalaFolosita[350];
char sSuprafatautilizata[350];
char sTechnical[350];
char sTechnicalsettings[350];
char sTemporaryPanelHint[350];
char sThecutsareperformedfromasidetotheothersideofthematerial[350];
char sThecuttingmachinecanfollowtheshapeofthematerial[350];
char sTheedgesofsheetsthatmustbetrimedduefaults[350];
char sThenameofthecustomerforwhichyoucutthepiece[350];
char sThenameofyourcustomer[350];
char sThepiececanberotated[350];
char sTheprogramtriestoavoidwasteswhichhavebothsizeslessthanthisvalue[350];
char sThereAreNoProducts[350];
char sThewidthofthecuttingsawForglasscuttingoptimizationitcanbe0Forwooditshouldbegreaterthan0[350];
char sThewidthofthecuttingsawforlinearpieces[350];
char sThickness[350];
char sThischaracterisusedforfillingthewasterectanglesIfyoudonotwantfilledwastejustremovethischaracter[350];
char sThisindexhasvaluebetween1andthenumberofpieces[350];
char sThisvaluewillbeaddedtotheedgebandingmaterialoneachside[350];
char sTipNevid[350];
char sTop[350];
char sTopcoordinateofthedefect[350];
char sTotalGarbageWaste[350];
char sTotalInventoryWaste[350];
char sTotalRecycledWaste[350];
char sTotalusedarea[350];
char sTotalusedlength[350];
char sTrim[100];
char sTrim_Top[100];
char sTrim_Left[100];
char sTrim_Bottom[100];
char sTrim_Right[100];

char sTrimalledgesatthebeginning[350];
char sTrimEdge[350];
char sTypeofbandthatwillbeappliedtothebottomedge[350];
char sTypeofbandthatwillbeappliedtotheleftedge[350];
char sTypeofbandthatwillbeappliedtotherightedge[350];
char sTypeofbandthatwillbeappliedtothetopedge[350];
char sTypeofedgebandingforbottomedgePleasedefineedgebandingtypesfromMaterialsEdgeBandingmenu[350];
char sTypeofedgebandingforleftedgePleasedefineedgebandingtypesfromMaterialsEdgeBandingmenu[350];
char sTypeofedgebandingforrightedgePleasedefineedgebandingtypesfromMaterialsEdgeBandingmenu[350];
char sTypeofedgebandingfortopedgePleasedefineedgebandingtypesfromMaterialsEdgeBandingmenu[350];
char sTypeofmaterialfromwhichtocut[350];
char sTypesAreNotMatched[500];
char sUndo[350];
char sUndoAccept[350];
char sUnits[350];
char sUnregisteredVersion[350];
char sUsefulforwoodfurniture[350];
char sUseit[350];
char sUsePieceinOptimization[350];
char sUserName[350];
char sUtilizedArea[350];
char sUtilizeddemandcount[350];
char sUtilizedParts[350];
char sUtilizedBars[350];
char sUtilizedSheets[350];
char sValue[350];
char sValueGreaterEqualToZero[350];
char sValueGreaterThanZero[350];
char sValueRealNumber[350];
char sValueIntegerNumber[350];
char sVertical[40];
char sWaste[350];
char sWaste_percent[350];
char sWastes[350];
char sWasteAddedToWarehouse[350];
char sWastelimits[350];
char sWeakoptimization[350];
char sWhattoprint[350];
char sWhattoprintoneachpiece[350];
char sWhattoshowoneachpiece[350];
char sWidth[350];
char sWorkingDirectory[350];
char sWrongKey[350];
char sYes[350];
char sYouCannotMixFractionalDataWithDecimalOnes[350];
char sYourcompany[350];

char sCity[100];
char sZip[100];
char sCounty[100];
char sBank[100];
char sBankAccount[100];
char sDate[100];

char sWasteType[350];

char sMaximalArea[350];
char sAtTheMarginOfTheSheet[350];
char sOthers[350];
char sPrinter[350];
char sMargins[350];
char sGenerateCNC[350];
char s_Show_cut_index[100];
char s_Cut_index[100];
char sShowHorizontalLabelsAlways[350];
char sShowCustomTextOnEachPiece[350];

char sMarginsForPaper[350];
char sDistanceBetweenRows[350];
char sMarginsOfTheLabel[350];
char s_The_number_is_too_big_or_it_has_too_many_digits_after_decimal_separator[350];
char s_The_number_is_too_big[100];

char sCannotmovepartsbetweensheetswhenidenticalsheetsaregroupedPleaseungroupthesheetsfrommenu[500];

char sYoucannotmixthefractionaldatawiththerealdata[350];

char sAnoptimizationparameterisfractionalnumber[350];

char sAnoptimizationparameterisarealnumber[350];

char sPleaseenteralldataeitherasfractionalorrealDonotmixthem[350];

char sRow[350];

char sisafractionalvalue[350];

char sisarealvalue[350];
char sImportData[350];

char sIndex[350];
char sGeneral[350];
char sLinear[350];
char sRectangular[350];
char sExtra[350];

char sGrain[350];

char sDefaultInterface[350];
char s_Restore_default_settings[350];
char sSortAscendingByArea[350];
char sSortDescendingByArea[350];
char sLogo[350];
char sBrowse[350];
char sService[350];
char sSaveEverything[350];
char s_export_everything[350];
char sLoadEverything[350];
char sLicenseAgreement[350];
char sThisProgramisLicensedTo[350];
char sCurrentDate[350];
char sGroupPartsAfterLoadingFromFile[350];
char sFillWastes[350];
char sSetthesamegrindingforalledges[350];
char sIfyousetthegrindingforoneedgeallwillreceivethesamevalue[350];
char sIfyousetthetrimforoneedgeallwillreceivethesamevalue[350];
char sSwitchbetweenfiberandrotationoption[350];

char sGroupIdenticalParts[350];
char sPriceMustBeGreaterThanZero[350];
char sGroupingOfIdenticalPiecesIntoOneRow[350];

char sCustomMessage[350];
char sMin[350];
char sMax[350];
char sPrecision[350];
char sDigits[350];
char sPriceofbars[350];
char sPriceperbar[350];

char sDesk[350];
char sWood[350];
char sAngles[350];

char sTwoPanels[350];
char sSummary[350];
char sShape[350];

char sOverrideExcelCSVfiles[350];
char sCannotSaveFile[350];
char sThisOptionWillOverrideTheInventoryFileIfLoadedFromExcelOrCsvFiles[350];
char sConvertsTheSizeOfWasteToAFractionalUnit[350];
char sConversionIsDoneOnlyWhenSomePiecesHaveFractionalValues[350];

char sRotationAngle[350];
char sPermitedRotationAngle[350];
char sAllowMirroring[350];

char sMirroring[350];

char sCircle[350];
char sPolygon[350];
char sInsert[350];
char sClockWise[350];
char sTrigonometric[350];

char sShort[350];
char sLong[350];
char sArcLength[350];
char sDirection[350];
char sIsArc[350];
char sCenter[350];
char sRadius[350];
char sArc[350];
char sTitle[350];
char sThestockofmaterialhasbeenpreviouslyloadedfromanExcelorCSVformatPleaseloaditagain[350];
char sDataCannotBeEmpty[350];
char sApolygonmusthaveatleast3vertices[350];
char sApolygonmusthaveatleast2vertices[350];

char sAnyShape[350];
char sImageSize[350];
char sTheLargestSize[350];
char sPixels[350];

char sYoucannotchooseblackblueorredcolors[350];
char sAllPieces[350];
char sUtilizedPieces[350];

char sExportOptions[350];

char sDrawing[350];
char sGrid[350];

char sThe_application_has_expired[350];
char sThe_application_was_first_started_on[350];
char sPlease_contact_us_at_contact_optimalprograms_com[350];
char sPlease_contact_us_at_contact_nestingtechnologies_com[350];
char sThe_application_is_not_registered[350];
char sDays_left_for_trial[350];
char sApplication_fails_to_initialize[350];

char sMovePiece[350];

char sLocked[350];

char sProject[350];

char sDeleteRow[350];
char sProperties[350];
char sProperty[350];
char sType[350];
char sRotationStep[350];
char sChangeDirection[350];

char sCurve_not_closed_Try_increasing_DXF_linking_distance_parameter[350];

char sPolygonsCircles[100];

char sOptions[100];
char sLayerName[200];
char sExportAllDiagrams[350];
char sExportAllToASingleFile[350];
char sMeasurementUnit[100];
char s_part_number[100];

char sEnabled[100];
char sBars[100];
char sText[100];

char s_Rectangle[100];
char s_Number_of_vertices[200];
char s_Starting_angle[200];
char s_Regular_polygon[200];

char s_Interior[100];
char s_Append[100];
char s_Import[100];

char sCurrentversion[100];
char sNewversion[100];

char sTools[100];
char sSort[100];
char sExtensions[100];

char sUpdates[100];
char sMaterials[100];

char sCurrentDiagram[100];
char sAll[100];

char sDownload[100];
char s_You_already_have_the_latest_version_installed[350];

char s_Cannot_connect_to_the_Internet_Please_visit_our_website_from_a_browser[350];

char s_Delete_fiber[100];
char s_Keep_it_as_it_is[100];
char s_Mixed[100];
char s_Show_scrap_s_size_on_the_small_pieces[200];
char s_Show_size_of_scrap[350];

char sPrinting[100];

char s_Show_information[100];

char s_Ascending[100];
char s_Descending[100];

char s_Visible_columns[100];

char s_As_it_is[50];
char s_Automatic[50];
char s_Rotated[50];

char s_Redo_the_last_operation[100];
char s_Undo_the_last_operation[100];

char s_The_value_must_be_a_real_or_fractional_number_Try_to_replace_the_comma_with_the_dot_if_you_want_to_enter_a_real_number[400];

char s_Sort_by[100];

char s_Sort_ascending_by[100];
char s_Sort_descending_by[100];

char s_Close[50];
char s_Preview[100];
char s_The_current_product_has_been_changed_Do_you_want_to_save_it_to_file[250];

char s_Some_numerical_values_are_incorrect_Should_I_fix_all_the_incorrect_values[300];

char s_Licensee[100];
char s_Terms_of_the_license[150];
char s_Do_you_want_to_delete_the_product[150];
char s_Do_you_want_to_delete_the_picture[150];
char s_Cannot_delete_the_file[150];

char s_Add_to_parts[150];
char s_Fit_to_screen[150];

char s_To_change_click_inside_a_cell_or_press_0_1_or_2[200];
char s_This_operation_cannot_be_reversed[200];

char s_Copy[30];
char s_Paste[30];
char s_Discard_changes[100];
char s_Duplicate_and_append[100];
char s_Duplicate_values_are_ignored[150];
char s_The_data_have_been_changed_Do_you_want_to_save_them_to_a_file[200];
char s_Please_save_it_first[100];
char s_Error[50];

char s_Please_contact_us_by_email_if_you_receive_this_error[200];
char s_Cannot_copy_or_move_the_files[150];
char s_Give_a_name[50];
char s_Save_all[60];

char s_Number_of_images[50];
char s_Total_size[70];
char s_Number[20];
char s_Position[40];
char sCut[20];
char s_Reused[50];
char s_Copy_for_move[100];

char s_Error_loading_file[100];

char s_Start[20];
char s_Stop[20];

char s_Ignore[50];
char s_Relative[40];
char s_Total[30];
char s_Paste_from_Clipboard[150];
char s_As_text[40];
char sProduct[50];

char s_Stock[50];
char s_Level[50];

char s_Group[50];
char s_Move[30];
char s_Info[30];

char s_Allow_movement_of_pieces[200];
char s_No_texture[50];
char s_Delete_all_data[100];
char s_Utilized_Stock[150];
char s_Tabular[30];
char s_Column[30];
char s_Some_invalid_values_have_been_removed[100];
char sBar[30];
char s_Additional[30];

char s_Allow_part_in_part[100];
char s_Cuts_may_overlap[100];
char s_Maximum_distance_between_2_linked_segments[200];
char s_Mix_layers[150];
char s_Resolution[50];
char s_Starting_corner[100];
char s_Starting_direction[100];

char s_Multiple_values[100];
char sStergePiesele[200];
char s_Incorrect_value[200];

char s_Optimizing_please_wait[200];
char s_Utilization[100];
char s_More[100];
char s_Multiple_shapes_detected_Next_rows_will_be_overwritten_Continue[300];
char s_Set_the_origin_and_the_direction_of_the_axes[300];

char s_Manual_arrange[200];
char s_This_feature_is_not_implemented_yet[300];
char s_All_results[100];
char s_Only_the_currently_selected_items[300];
char s_What_is_exported[100];
char s_Decimal_separator[100];
char s_List_separator[100];
char s_Header[100];
char s_Comma[100];
char s_Semicolon[100];
char s_Space[100];
char s_Dot[20];
char s_Append_more_rows[100];
char s_Show_sizes[100];
char s_Show_label[100];
char s_Show_length[100];
char s_Version[100];
char s_Contact_us[100];
char s_license_agreement_text[1000];
char s_Cell[30];
char s_The_comma_symbol_cannot_simultaneously_be_the_list_separator_and_the_decimal_separator[200];
char s_Made_in[100];
char s_Manufacturer[100];
char s_The_value_is_out_of_the_allowed_range[200];
char s_Click_on_the_table_header_to_change_the_columns[300];
char s_What_to_print_or_save_to_file[300];
char s_What_to_minimize[100];
char s_Offset[100];
char s_Offset_X[100];
char s_Offset_Y[100];
char s_Flipped[100];
char s_Cannot_modify_old_results[200];
char s_System_setting[100];

char s_If_angles_are_different_from_90_degrees_height_must_be_greater_than_0[300];
char s_Append_to_stock[100];
char s_Made_with_love_in_Cugir_Romania[200];
char s_Invalid_piece_Angles_are_too_small_or_too_big_or_height_is_too_small[300];

char s_Absolute_coordinates[200];
char s_Relative_coordinates[200];
char s_Advanced[50];
char s_Cut_higher_level_strips_first[200];

char s_default_value[100];
char s_Force_fixed_height[200];

char s_Parameters[100];
char s_Input_the_name_of_the_parameter[200];
char s_Defined_product[200];
char s_Computed_product[200];
char s_Parameter_already_exists[200];
char s_Error_parsing_expression[200];
char s_Error_evaluating_expression[200];
char s_Parameterized_products[200];
char s_Simple_products[200];
char s_Number_of_digits_after_the_decimal_separator[300];
char s_Percentages[50];
//------------------------------------------------------------------
void set_composed_words(void)
{
	strcpy(sAngle_1, sAngle);
	strcat(sAngle_1, " 1");
	strcpy(sAngle_2, sAngle);
	strcat(sAngle_2, " 2");
	
	strcpy(sEdgeband_Top, sTop);
	strcat(sEdgeband_Top, ":");
	strcat(sEdgeband_Top, sEdgeband);

	strcpy(sEdgeband_Left, sLeft);
	strcat(sEdgeband_Left, ":");
	strcat(sEdgeband_Left, sEdgeband);

	strcpy(sEdgeband_Bottom, sBottom);
	strcat(sEdgeband_Bottom, ":");
	strcat(sEdgeband_Bottom, sEdgeband);

	strcpy(sEdgeband_Right, sRight);
	strcat(sEdgeband_Right, ":");
	strcat(sEdgeband_Right, sEdgeband);
	
	// grinding
	strcpy(sGrinding_Top, sTop);
	strcat(sGrinding_Top, ":");
	strcat(sGrinding_Top, sGrinding);

	strcpy(sGrinding_Left, sLeft);
	strcat(sGrinding_Left, ":");
	strcat(sGrinding_Left, sGrinding);

	strcpy(sGrinding_Bottom, sBottom);
	strcat(sGrinding_Bottom, ":");
	strcat(sGrinding_Bottom, sGrinding);

	strcpy(sGrinding_Right, sRight);
	strcat(sGrinding_Right, ":");
	strcat(sGrinding_Right, sGrinding);

	// trim
	strcpy(sTrim_Top, sTop);
	strcat(sTrim_Top, ":");
	strcat(sTrim_Top, sTrim);

	strcpy(sTrim_Left, sLeft);
	strcat(sTrim_Left, ":");
	strcat(sTrim_Left, sTrim);

	strcpy(sTrim_Bottom, sBottom);
	strcat(sTrim_Bottom, ":");
	strcat(sTrim_Bottom, sTrim);

	strcpy(sTrim_Right, sRight);
	strcat(sTrim_Right, ":");
	strcat(sTrim_Right, sTrim);
	
	strcpy(s_Offset_X, s_Offset);
	strcat(s_Offset_X, " X");
	
	strcpy(s_Offset_Y, s_Offset);
	strcat(s_Offset_Y, " Y");
	
	strcpy(sWaste_percent, sWaste);
	strcat(sWaste_percent, " %");

	strcpy(s_relative_cuts, sCuts);
	strcat(s_relative_cuts, " (");
	strcat(s_relative_cuts, s_Relative);
	strcat(s_relative_cuts, ")");
}
//------------------------------------------------------------------
void load_language_from_strings(const char* Language)
{
	if (!strcmp(Language, sAfrikaans) || !strcmp(Language, sAfrikaans_old)){
		set_af();
		set_composed_words();
		return;
	}

	if (!strcmp(Language, sAlbanian)|| !strcmp(Language, sAlbanian_old)){
		set_sq();
		set_composed_words();
		return;
	}

	if (!strcmp(Language, sArabic) || !strcmp(Language, sArabic_old)){
		set_ar();
		set_composed_words();
		return;
	}

	if (!strcmp(Language, sBulgarian) || !strcmp(Language, sBulgarian_old)){
		set_bg();
		set_composed_words();
		return;
	}

	if (!strcmp(Language, "Chinese") || !strcmp(Language, sChinese_Simplified) ||
		!strcmp(Language, sChinese_Simplified_old)) {
		set_cn_s();
		set_composed_words();
		return;
	}

	if (!strcmp(Language, sChinese_Traditional) || !strcmp(Language, sChinese_Traditional_old)) {
		set_cn_t();
		set_composed_words();
		return;
	}

	if (!strcmp(Language, sCroatian) || !strcmp(Language, sCroatian_old)){
		set_hr();
		set_composed_words();
		return;
	}

	if (!strcmp(Language, sCzech) || !strcmp(Language, sCzech_old)){
		set_cz();
		set_composed_words();
		return;
	}

	if (!strcmp(Language, sDanish) || !strcmp(Language, sDanish_old)){
		set_da();
		set_composed_words();
		return;
	}

	if (!strcmp(Language, sDutch) || !strcmp(Language, sDutch_old)){
		set_nl();
		set_composed_words();
		return;
	}

	if (!strcmp(Language, sEnglish) || !strcmp(Language, sEnglish_old)){
		set_en();
		set_composed_words();
		return;
	}

	if (!strcmp(Language, sEstonian) || !strcmp(Language, sEstonian_old)){
		set_et();
		set_composed_words();
		return;
	}

	if (!strcmp(Language, sFarsi) || !strcmp(Language, sFarsi_old)){
		set_fs();
		set_composed_words();
		return;
	}

	if (!strcmp(Language, sFinnish) || !strcmp(Language, sFinnish_old)){
		set_fi();
		set_composed_words();
		return;
	}

	if (!strcmp(Language, sFrench) || !strcmp(Language, sFrench_old)){
		set_fr();
		set_composed_words();
		return;
	}

	if (!strcmp(Language, sGerman) || !strcmp(Language, sGerman_old)){
		set_de();
		set_composed_words();
		return;
	}

	if (!strcmp(Language, sGreek) || !strcmp(Language, sGreek_old)){
		set_gr();
		set_composed_words();
		return;
	}

	if (!strcmp(Language, sHungarian) || !strcmp(Language, sHungarian_old)){
		set_hu();
		set_composed_words();
		return;
	}

	if (!strcmp(Language, sIndonesian) || !strcmp(Language, sIndonesian_old)){
		set_id();
		set_composed_words();
		return;
	}

	if (!strcmp(Language, sItalian) || !strcmp(Language, sItalian_old)){
		set_it();
		set_composed_words();
		return;
	}

	if (!strcmp(Language, sKorean) || !strcmp(Language, sKorean_old)) {
		set_kr();
		set_composed_words();
		return;
	}

	if (!strcmp(Language, sLatvian) || !strcmp(Language, sLatvian_old)) {
		set_lv();
		set_composed_words();
		return;
	}

	if (!strcmp(Language, sLithuanian) || !strcmp(Language, sLithuanian_old)) {
		set_lt();
		set_composed_words();
		return;
	}

	if (!strcmp(Language, sMalaysian) || !strcmp(Language, sMalaysian_old)) {
		set_ml();
		set_composed_words();
		return;
	}

	if (!strcmp(Language, sNorwegian) || !strcmp(Language, sNorwegian_old)){
		set_no();
		set_composed_words();
		return;
	}

	if (!strcmp(Language, sPolish) || !strcmp(Language, sPolish_old)){
		set_pl();
		set_composed_words();
		return;
	}

	if (!strcmp(Language, sPortuguese) || !strcmp(Language, sPortuguese_old)){
		set_pt();
		set_composed_words();
		return;
	}

	if (!strcmp(Language, sRomana) || !strcmp(Language, sRomana_old)){
		set_ro();
		set_composed_words();
		return;
	}

	if (!strcmp(Language, sRussian) || !strcmp(Language, sRussian_old)){
		set_ru();
		set_composed_words();
		return;
	}

	if (!strcmp(Language, sSlovak) || !strcmp(Language, sSlovak_old)){
		set_sk();
		set_composed_words();
		return;
	}

	if (!strcmp(Language, sSlovenian) || !strcmp(Language, sSlovenian_old)){
		set_sl();
		set_composed_words();
		return;
	}

	if (!strcmp(Language, sSpanish) || !strcmp(Language, sSpanish_old)){
		set_es();
		set_composed_words();
		return;
	}

	if (!strcmp(Language, sSwedish) || !strcmp(Language, sSwedish_old)){
		set_sv();
		set_composed_words();
		return;
	}

	if (!strcmp(Language, sThai) || !strcmp(Language, sThai_old)) {
		set_th();
		set_composed_words();
		return;
	}

	if (!strcmp(Language, sTurkish) || !strcmp(Language, sTurkish_old)){
		set_tr();
		set_composed_words();
		return;
	}

	if (!strcmp(Language, sUkrainian) || !strcmp(Language, sUkrainian_old)){
		set_uk();
		set_composed_words();
		return;
	}

	if (!strcmp(Language, sVietnamese) || !strcmp(Language, sVietnamese_old)){
		set_vn();
		set_composed_words();
		return;
	}
/*
	if (!strcmp(Language, sHindi) ) {
		set_hindi();
		set_composed_words();
		return;
	}
*/
	// no language found
	set_en();
	set_composed_words();
}
// ----------------------------------------------------------------------------
