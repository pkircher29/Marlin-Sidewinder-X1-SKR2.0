/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * French
 *
 * LCD Menu Messages
 * See also https://marlinfw.org/docs/development/lcd_language.html
 *
 * Substitutions are applied for the following characters when used
 * in menu items that call lcd_put_u8str_ind_P with an index:
 *
 *   = displays  '0'....'10' for indexes 0 - 10
 *   ~ displays  '1'....'11' for indexes 0 - 10
 *   * displays 'E1'...'E11' for indexes 0 - 10 (By default. Uses LCD_FIRST_TOOL)
 */

#define DISPLAY_CHARSET_ISO10646_1

namespace Language_fr {
  using namespace Language_en; // Inherit undefined strings from English

  constexpr uint8_t    CHARSIZE                            = 2;
  PROGMEM Language_Str LANGUAGE                            = _UxGT("Français");

  PROGMEM Language_Str WELCOME_MSG                         = MACHINE_NAME _UxGT(" prête.");
  PROGMEM Language_Str MSG_MARLIN                          = _UxGT("Marlin");
  PROGMEM Language_Str MSG_YES                             = _UxGT("Oui");
  PROGMEM Language_Str MSG_NO                              = _UxGT("Non");
  PROGMEM Language_Str MSG_BACK                            = _UxGT("Retour");
  PROGMEM Language_Str MSG_MEDIA_ABORTING                  = _UxGT("Annulation...");
  PROGMEM Language_Str MSG_MEDIA_INSERTED                  = _UxGT("Média inséré");
  PROGMEM Language_Str MSG_MEDIA_REMOVED                   = _UxGT("Média retiré");
  PROGMEM Language_Str MSG_MEDIA_WAITING                   = _UxGT("Attente média");
  PROGMEM Language_Str MSG_SD_INIT_FAIL                    = _UxGT("Echec Init SD");
  PROGMEM Language_Str MSG_MEDIA_READ_ERROR                = _UxGT("Err lecture média");
  PROGMEM Language_Str MSG_MEDIA_USB_REMOVED               = _UxGT("USB débranché");
  PROGMEM Language_Str MSG_MEDIA_USB_FAILED                = _UxGT("Erreur média USB");
  PROGMEM Language_Str MSG_KILL_SUBCALL_OVERFLOW           = _UxGT("Subcall Overflow");
  PROGMEM Language_Str MSG_LCD_ENDSTOPS                    = _UxGT("Butées"); // Max length 8 characters
  PROGMEM Language_Str MSG_LCD_SOFT_ENDSTOPS               = _UxGT("Butées Soft");
  PROGMEM Language_Str MSG_MAIN                            = _UxGT("Menu principal");
  PROGMEM Language_Str MSG_ADVANCED_SETTINGS               = _UxGT("Config. avancée");
  PROGMEM Language_Str MSG_CONFIGURATION                   = _UxGT("Configuration");
  PROGMEM Language_Str MSG_RUN_AUTO_FILES                  = _UxGT("Exéc. auto.gcode");
  PROGMEM Language_Str MSG_DISABLE_STEPPERS                = _UxGT("Arrêter moteurs");
  PROGMEM Language_Str MSG_DEBUG_MENU                      = _UxGT("Menu debug");
  PROGMEM Language_Str MSG_PROGRESS_BAR_TEST               = _UxGT("Test barre progress.");
  PROGMEM Language_Str MSG_AUTO_HOME                       = _UxGT("Home auto");
  PROGMEM Language_Str MSG_AUTO_HOME_X                     = _UxGT("Home X auto");
  PROGMEM Language_Str MSG_AUTO_HOME_Y                     = _UxGT("Home Y auto");
  PROGMEM Language_Str MSG_AUTO_HOME_Z                     = _UxGT("Home Z auto");
  PROGMEM Language_Str MSG_AUTO_HOME_I                     = _UxGT("Home ") LCD_STR_I;
  PROGMEM Language_Str MSG_AUTO_HOME_J                     = _UxGT("Home ") LCD_STR_J;
  PROGMEM Language_Str MSG_AUTO_HOME_K                     = _UxGT("Home ") LCD_STR_K;
  PROGMEM Language_Str MSG_AUTO_Z_ALIGN                    = _UxGT("Z-Align");
  PROGMEM Language_Str MSG_ITERATION                       = _UxGT("Itération G34: %i");
  PROGMEM Language_Str MSG_DECREASING_ACCURACY             = _UxGT("Précision décroissante!");
  PROGMEM Language_Str MSG_ACCURACY_ACHIEVED               = _UxGT("Précision atteinte");
  PROGMEM Language_Str MSG_LEVEL_BED_HOMING                = _UxGT("Origine XYZ...");
  PROGMEM Language_Str MSG_LEVEL_BED_WAITING               = _UxGT("Clic pour commencer");
  PROGMEM Language_Str MSG_LEVEL_BED_NEXT_POINT            = _UxGT("Point suivant");
  PROGMEM Language_Str MSG_LEVEL_BED_DONE                  = _UxGT("Mise à niveau OK!");
  PROGMEM Language_Str MSG_Z_FADE_HEIGHT                   = _UxGT("Hauteur lissée");
  PROGMEM Language_Str MSG_SET_HOME_OFFSETS                = _UxGT("Définir Home Offsets");
  PROGMEM Language_Str MSG_HOME_OFFSET_X                   = _UxGT("Home Offset X");
  PROGMEM Language_Str MSG_HOME_OFFSET_Y                   = _UxGT("Home Offset Y");
  PROGMEM Language_Str MSG_HOME_OFFSET_Z                   = _UxGT("Home Offset Z");
  PROGMEM Language_Str MSG_HOME_OFFSET_I                   = _UxGT("Home Offset ") LCD_STR_I;
  PROGMEM Language_Str MSG_HOME_OFFSET_J                   = _UxGT("Home Offset ") LCD_STR_J;
  PROGMEM Language_Str MSG_HOME_OFFSET_K                   = _UxGT("Home Offset ") LCD_STR_K;
  PROGMEM Language_Str MSG_HOME_OFFSETS_APPLIED            = _UxGT("Décalages appliqués");
  PROGMEM Language_Str MSG_SET_ORIGIN                      = _UxGT("Régler origine");
  PROGMEM Language_Str MSG_ASSISTED_TRAMMING               = _UxGT("Tramage assisté");
  PROGMEM Language_Str MSG_TRAMMING_WIZARD                 = _UxGT("Assistant de tramage");
  PROGMEM Language_Str MSG_SELECT_ORIGIN                   = _UxGT("Origine");
  PROGMEM Language_Str MSG_LAST_VALUE_SP                   = _UxGT("Dernière valeur ");
  #if PREHEAT_COUNT
    PROGMEM Language_Str MSG_PREHEAT_1                     = _UxGT("Préchauffer ") PREHEAT_1_LABEL;
    PROGMEM Language_Str MSG_PREHEAT_1_H                   = _UxGT("Préchauffer ") PREHEAT_1_LABEL " ~";
    PROGMEM Language_Str MSG_PREHEAT_1_END                 = _UxGT("Préch. ") PREHEAT_1_LABEL _UxGT(" buse");
    PROGMEM Language_Str MSG_PREHEAT_1_END_E               = _UxGT("Préch. ") PREHEAT_1_LABEL _UxGT(" buse ~");
    PROGMEM Language_Str MSG_PREHEAT_1_ALL                 = _UxGT("Préch. ") PREHEAT_1_LABEL _UxGT(" Tout");
    PROGMEM Language_Str MSG_PREHEAT_1_BEDONLY             = _UxGT("Préch. ") PREHEAT_1_LABEL _UxGT(" plateau");
    PROGMEM Language_Str MSG_PREHEAT_1_SETTINGS            = _UxGT("Préch. ") PREHEAT_1_LABEL _UxGT(" Conf");

    PROGMEM Language_Str MSG_PREHEAT_M                     = _UxGT("Préchauffer $");
    PROGMEM Language_Str MSG_PREHEAT_M_H                   = _UxGT("Préchauffer $ ~");
    PROGMEM Language_Str MSG_PREHEAT_M_END                 = _UxGT("Préch. $ buse");
    PROGMEM Language_Str MSG_PREHEAT_M_END_E               = _UxGT("Préch. $ buse ~");
    PROGMEM Language_Str MSG_PREHEAT_M_ALL                 = _UxGT("Préch. $ Tout");
    PROGMEM Language_Str MSG_PREHEAT_M_BEDONLY             = _UxGT("Préch. $ plateau");
    PROGMEM Language_Str MSG_PREHEAT_M_SETTINGS            = _UxGT("Préch. $ Conf");
  #endif
  PROGMEM Language_Str MSG_PREHEAT_CUSTOM                  = _UxGT("Préch. perso");
  PROGMEM Language_Str MSG_COOLDOWN                        = _UxGT("Refroidir");

  PROGMEM Language_Str MSG_CUTTER_FREQUENCY                = _UxGT("Fréquence");
  PROGMEM Language_Str MSG_LASER_MENU                      = _UxGT("Contrôle Laser");
  PROGMEM Language_Str MSG_SPINDLE_MENU                    = _UxGT("Contrôle Spindle");
  PROGMEM Language_Str MSG_LASER_POWER                     = _UxGT("Puissance");
  PROGMEM Language_Str MSG_SPINDLE_POWER                   = _UxGT("Spindle Pwr");
  PROGMEM Language_Str MSG_LASER_TOGGLE                    = _UxGT("Basculer Laser");
  PROGMEM Language_Str MSG_LASER_EVAC_TOGGLE               = _UxGT("Basculer Ventilateur");
  PROGMEM Language_Str MSG_LASER_ASSIST_TOGGLE             = _UxGT("Assistance Air");
  PROGMEM Language_Str MSG_LASER_PULSE_MS                  = _UxGT("Test Pulse ms");
  PROGMEM Language_Str MSG_LASER_FIRE_PULSE                = _UxGT("Fire Pulse");
  PROGMEM Language_Str MSG_FLOWMETER_FAULT                 = _UxGT("Erreur de débit du liquide de refroidissement");
  PROGMEM Language_Str MSG_SPINDLE_TOGGLE                  = _UxGT("Basculer Spindle");
  PROGMEM Language_Str MSG_SPINDLE_EVAC_TOGGLE             = _UxGT("Basculer Aspiration");
  PROGMEM Language_Str MSG_SPINDLE_FORWARD                 = _UxGT("Spindle en avant");
  PROGMEM Language_Str MSG_SPINDLE_REVERSE                 = _UxGT("Inverser broches");
  PROGMEM Language_Str MSG_SWITCH_PS_ON                    = _UxGT("Allumer alim.");
  PROGMEM Language_Str MSG_SWITCH_PS_OFF                   = _UxGT("Eteindre alim.");
  PROGMEM Language_Str MSG_EXTRUDE                         = _UxGT("Extrusion");
  PROGMEM Language_Str MSG_RETRACT                         = _UxGT("Rétractation");
  PROGMEM Language_Str MSG_MOVE_AXIS                       = _UxGT("Déplacer un axe");
  PROGMEM Language_Str MSG_BED_LEVELING                    = _UxGT("Régler Niv. plateau");
  PROGMEM Language_Str MSG_LEVEL_BED                       = _UxGT("Niveau du plateau");
  PROGMEM Language_Str MSG_LEVEL_CORNERS                   = _UxGT("Niveau des coins");
  PROGMEM Language_Str MSG_LEVEL_CORNERS_RAISE             = _UxGT("Lever le plateau jusqu'à ce que la sonde soit déclenchée");
  PROGMEM Language_Str MSG_LEVEL_CORNERS_IN_RANGE          = _UxGT("Coins dans la tolérance. Nivellement");
  PROGMEM Language_Str MSG_LEVEL_CORNERS_GOOD_POINTS       = _UxGT("Points corrects: ");
  PROGMEM Language_Str MSG_LEVEL_CORNERS_LAST_Z            = _UxGT("Dernier Z: ");
  PROGMEM Language_Str MSG_NEXT_CORNER                     = _UxGT("Coin suivant");
  PROGMEM Language_Str MSG_MESH_EDITOR                     = _UxGT("Editeur Mesh");
  PROGMEM Language_Str MSG_EDIT_MESH                       = _UxGT("Editer Mesh");
  PROGMEM Language_Str MSG_EDITING_STOPPED                 = _UxGT("Modification arrêtée");
  PROGMEM Language_Str MSG_PROBING_MESH                    = _UxGT("Mesure point");
  PROGMEM Language_Str MSG_MESH_X                          = _UxGT("Index X");
  PROGMEM Language_Str MSG_MESH_Y                          = _UxGT("Index Y");
  PROGMEM Language_Str MSG_MESH_EDIT_Z                     = _UxGT("Valeur Z");
  PROGMEM Language_Str MSG_CUSTOM_COMMANDS                 = _UxGT("Commandes perso");
  PROGMEM Language_Str MSG_M48_TEST                        = _UxGT("Test sonde M48");
  PROGMEM Language_Str MSG_M48_POINT                       = _UxGT("Point M48");
  PROGMEM Language_Str MSG_M48_OUT_OF_BOUNDS               = _UxGT("Sonde hors limites");
  PROGMEM Language_Str MSG_M48_DEVIATION                   = _UxGT("Ecart");
  PROGMEM Language_Str MSG_IDEX_MENU                       = _UxGT("Mode IDEX");
  PROGMEM Language_Str MSG_OFFSETS_MENU                    = _UxGT("Offsets Outils");
  PROGMEM Language_Str MSG_IDEX_MODE_AUTOPARK              = _UxGT("Auto-Park");
  PROGMEM Language_Str MSG_IDEX_MODE_DUPLICATE             = _UxGT("Duplication");
  PROGMEM Language_Str MSG_IDEX_MODE_MIRRORED_COPY         = _UxGT("Copie miroir");
  PROGMEM Language_Str MSG_IDEX_MODE_FULL_CTRL             = _UxGT("Contrôle complet");
  PROGMEM Language_Str MSG_IDEX_DUPE_GAP                   = _UxGT("Dupliquer X-Gap");
  PROGMEM Language_Str MSG_HOTEND_OFFSET_X                 = _UxGT("Buse 2 X");
  PROGMEM Language_Str MSG_HOTEND_OFFSET_Y                 = _UxGT("Buse 2 Y");
  PROGMEM Language_Str MSG_HOTEND_OFFSET_Z                 = _UxGT("Buse 2 Z");
  PROGMEM Language_Str MSG_UBL_DOING_G29                   = _UxGT("G29 en cours");
  PROGMEM Language_Str MSG_UBL_TOOLS                       = _UxGT("Outils UBL");
  PROGMEM Language_Str MSG_UBL_LEVEL_BED                   = _UxGT("Unified Bed Leveling");
  PROGMEM Language_Str MSG_LCD_TILTING_MESH                = _UxGT("Point d'inclinaison");
  PROGMEM Language_Str MSG_UBL_MANUAL_MESH                 = _UxGT("Maillage manuel");
  PROGMEM Language_Str MSG_UBL_MESH_WIZARD                 = _UxGT("Assistant Mesh UBL");
  PROGMEM Language_Str MSG_UBL_BC_INSERT                   = _UxGT("Placer la cale & Mesurer");
  PROGMEM Language_Str MSG_UBL_BC_INSERT2                  = _UxGT("Mesurer");
  PROGMEM Language_Str MSG_UBL_BC_REMOVE                   = _UxGT("Retirer & Mesurer le plateau");
  PROGMEM Language_Str MSG_UBL_MOVING_TO_NEXT              = _UxGT("Aller au suivant");
  PROGMEM Language_Str MSG_UBL_ACTIVATE_MESH               = _UxGT("Activer UBL");
  PROGMEM Language_Str MSG_UBL_DEACTIVATE_MESH             = _UxGT("Désactiver UBL");
  PROGMEM Language_Str MSG_UBL_SET_TEMP_BED                = _UxGT("Température plateau");
  PROGMEM Language_Str MSG_UBL_BED_TEMP_CUSTOM             = _UxGT("Température plateau");
  PROGMEM Language_Str MSG_UBL_SET_TEMP_HOTEND             = _UxGT("Température buse");
  PROGMEM Language_Str MSG_UBL_HOTEND_TEMP_CUSTOM          = _UxGT("Température buse");
  PROGMEM Language_Str MSG_UBL_MESH_EDIT                   = _UxGT("Editer Mesh");
  PROGMEM Language_Str MSG_UBL_EDIT_CUSTOM_MESH            = _UxGT("Editer Mesh Perso");
  PROGMEM Language_Str MSG_UBL_FINE_TUNE_MESH              = _UxGT("Maille de réglage fin");
  PROGMEM Language_Str MSG_UBL_DONE_EDITING_MESH           = _UxGT("Terminer");
  PROGMEM Language_Str MSG_UBL_BUILD_CUSTOM_MESH           = _UxGT("Créer la grille perso");
  PROGMEM Language_Str MSG_UBL_BUILD_MESH_MENU             = _UxGT("Créer la grille");
  PROGMEM Language_Str MSG_UBL_BUILD_MESH_M                = _UxGT("Créer la grille ($)");
  PROGMEM Language_Str MSG_UBL_BUILD_COLD_MESH             = _UxGT("Créer maillage à froid");
  PROGMEM Language_Str MSG_UBL_MESH_HEIGHT_ADJUST          = _UxGT("Ajuster Hauteur Mesh");
  PROGMEM Language_Str MSG_UBL_MESH_HEIGHT_AMOUNT          = _UxGT("Hauteur");
  PROGMEM Language_Str MSG_UBL_VALIDATE_MESH_MENU          = _UxGT("Valider Mesh");
  PROGMEM Language_Str MSG_UBL_VALIDATE_MESH_M             = _UxGT("Valider Mesh ($)");
  PROGMEM Language_Str MSG_UBL_VALIDATE_CUSTOM_MESH        = _UxGT("Valider Mesh Perso");
  PROGMEM Language_Str MSG_G26_HEATING_BED                 = _UxGT("G26 Chauffe du plateau");
  PROGMEM Language_Str MSG_G26_HEATING_NOZZLE              = _UxGT("G26 Chauffe de la buse");
  PROGMEM Language_Str MSG_G26_MANUAL_PRIME                = _UxGT("Amorçage manuel...");
  PROGMEM Language_Str MSG_G26_FIXED_LENGTH                = _UxGT("Longueur fixe");
  PROGMEM Language_Str MSG_G26_PRIME_DONE                  = _UxGT("Amorçage terminé");
  PROGMEM Language_Str MSG_G26_CANCELED                    = _UxGT("G26 Annulé");
  PROGMEM Language_Str MSG_G26_LEAVING                     = _UxGT("G26 en cours");
  PROGMEM Language_Str MSG_UBL_CONTINUE_MESH               = _UxGT("Continuer grille");
  PROGMEM Language_Str MSG_UBL_MESH_LEVELING               = _UxGT("Niveau par mailles");
  PROGMEM Language_Str MSG_UBL_3POINT_MESH_LEVELING        = _UxGT("Niveau à 3 points");
  PROGMEM Language_Str MSG_UBL_GRID_MESH_LEVELING          = _UxGT("Niveau par grille");
  PROGMEM Language_Str MSG_UBL_MESH_LEVEL                  = _UxGT("Effectuer mesures");
  PROGMEM Language_Str MSG_UBL_SIDE_POINTS                 = _UxGT("Points latéraux");
  PROGMEM Language_Str MSG_UBL_MAP_TYPE                    = _UxGT("Type de carte");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP                  = _UxGT("Exporter grille");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP_HOST             = _UxGT("Export pour hôte");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP_CSV              = _UxGT("Export en CSV");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP_BACKUP           = _UxGT("Export sauvegarde");
  PROGMEM Language_Str MSG_UBL_INFO_UBL                    = _UxGT("Infos debug UBL");
  PROGMEM Language_Str MSG_UBL_FILLIN_AMOUNT               = _UxGT("Nombre de points");
  PROGMEM Language_Str MSG_UBL_MANUAL_FILLIN               = _UxGT("Remplissage manuel");
  PROGMEM Language_Str MSG_UBL_SMART_FILLIN                = _UxGT("Remplissage auto");
  PROGMEM Language_Str MSG_UBL_FILLIN_MESH                 = _UxGT("Remplissage grille");
  PROGMEM Language_Str MSG_UBL_INVALIDATE_ALL              = _UxGT("Tout effacer");
  PROGMEM Language_Str MSG_UBL_INVALIDATE_CLOSEST          = _UxGT("Effacer le + près");
  PROGMEM Language_Str MSG_UBL_FINE_TUNE_ALL               = _UxGT("Réglage fin (tous)");
  PROGMEM Language_Str MSG_UBL_FINE_TUNE_CLOSEST           = _UxGT("Réglage fin + près");
  PROGMEM Language_Str MSG_UBL_STORAGE_MESH_MENU           = _UxGT("Stockage grille");
  PROGMEM Language_Str MSG_UBL_STORAGE_SLOT                = _UxGT("Slot mémoire");
  PROGMEM Language_Str MSG_UBL_LOAD_MESH                   = _UxGT("Charger la grille");
  PROGMEM Language_Str MSG_UBL_SAVE_MESH                   = _UxGT("Stocker la grille");
  PROGMEM Language_Str MSG_MESH_LOADED                     = _UxGT("Grille %i chargée");
  PROGMEM Language_Str MSG_MESH_SAVED                      = _UxGT("Grille %i enreg.");
  PROGMEM Language_Str MSG_UBL_NO_STORAGE                  = _UxGT("Pas de mémoire");
  PROGMEM Language_Str MSG_UBL_SAVE_ERROR                  = _UxGT("Err: Enreg. UBL");
  PROGMEM Language_Str MSG_UBL_RESTORE_ERROR               = _UxGT("Err: Ouvrir UBL");
  PROGMEM Language_Str MSG_UBL_Z_OFFSET                    = _UxGT("Z-Offset: ");
  PROGMEM Language_Str MSG_UBL_Z_OFFSET_STOPPED            = _UxGT("Z-Offset arrêté");
  PROGMEM Language_Str MSG_UBL_STEP_BY_STEP_MENU           = _UxGT("Assistant UBL");
  PROGMEM Language_Str MSG_UBL_1_BUILD_COLD_MESH           = _UxGT("1.Mesure à froid");
  PROGMEM Language_Str MSG_UBL_2_SMART_FILLIN              = _UxGT("2.Compléter auto.");
  PROGMEM Language_Str MSG_UBL_3_VALIDATE_MESH_MENU        = _UxGT("3.Valider grille");
  PROGMEM Language_Str MSG_UBL_4_FINE_TUNE_ALL             = _UxGT("4.Réglage fin");
  PROGMEM Language_Str MSG_UBL_5_VALIDATE_MESH_MENU        = _UxGT("5.Valider grille");
  PROGMEM Language_Str MSG_UBL_6_FINE_TUNE_ALL             = _UxGT("6.Réglage fin");
  PROGMEM Language_Str MSG_UBL_7_SAVE_MESH                 = _UxGT("7.Sauver grille");

  PROGMEM Language_Str MSG_LED_CONTROL                     = _UxGT("Contrôle LED");
  PROGMEM Language_Str MSG_LEDS                            = _UxGT("LED");
  PROGMEM Language_Str MSG_LED_PRESETS                     = _UxGT("Préregl. LED");
  PROGMEM Language_Str MSG_SET_LEDS_RED                    = _UxGT("Rouge");
  PROGMEM Language_Str MSG_SET_LEDS_ORANGE                 = _UxGT("Orange");
  PROGMEM Language_Str MSG_SET_LEDS_YELLOW                 = _UxGT("Jaune");
  PROGMEM Language_Str MSG_SET_LEDS_GREEN                  = _UxGT("Vert");
  PROGMEM Language_Str MSG_SET_LEDS_BLUE                   = _UxGT("Bleu");
  PROGMEM Language_Str MSG_SET_LEDS_INDIGO                 = _UxGT("Indigo");
  PROGMEM Language_Str MSG_SET_LEDS_VIOLET                 = _UxGT("Violet");
  PROGMEM Language_Str MSG_SET_LEDS_WHITE                  = _UxGT("Blanc");
  PROGMEM Language_Str MSG_SET_LEDS_DEFAULT                = _UxGT("Defaut");
  PROGMEM Language_Str MSG_LED_CHANNEL_N                   = _UxGT("Canal =");
  PROGMEM Language_Str MSG_LEDS2                           = _UxGT("LED #2");
  PROGMEM Language_Str MSG_NEO2_PRESETS                    = _UxGT("Préregl. LED #2");
  PROGMEM Language_Str MSG_NEO2_BRIGHTNESS                 = _UxGT("Luminosité");
  PROGMEM Language_Str MSG_CUSTOM_LEDS                     = _UxGT("LED Perso");
  PROGMEM Language_Str MSG_INTENSITY_R                     = _UxGT("Intensité Rouge");
  PROGMEM Language_Str MSG_INTENSITY_G                     = _UxGT("Intensité Vert");
  PROGMEM Language_Str MSG_INTENSITY_B                     = _UxGT("Intensité Bleu");
  PROGMEM Language_Str MSG_INTENSITY_W                     = _UxGT("Intensité Blanc");
  PROGMEM Language_Str MSG_LED_BRIGHTNESS                  = _UxGT("Luminosité");

  PROGMEM Language_Str MSG_MOVING                          = _UxGT("Déplacement...");
  PROGMEM Language_Str MSG_FREE_XY                         = _UxGT("XY Libre");
  PROGMEM Language_Str MSG_MOVE_X                          = _UxGT("Déplacer X");
  PROGMEM Language_Str MSG_MOVE_Y                          = _UxGT("Déplacer Y");
  PROGMEM Language_Str MSG_MOVE_Z                          = _UxGT("Déplacer Z");
  PROGMEM Language_Str MSG_MOVE_I                          = _UxGT("Déplacer ") LCD_STR_I;
  PROGMEM Language_Str MSG_MOVE_J                          = _UxGT("Déplacer ") LCD_STR_J;
  PROGMEM Language_Str MSG_MOVE_K                          = _UxGT("Déplacer ") LCD_STR_K;
  PROGMEM Language_Str MSG_MOVE_E                          = _UxGT("Extruder");
  PROGMEM Language_Str MSG_MOVE_EN                         = _UxGT("Extruder *");
  PROGMEM Language_Str MSG_HOTEND_TOO_COLD                 = _UxGT("Buse trop froide");
  PROGMEM Language_Str MSG_MOVE_N_MM                       = _UxGT("Déplacer %smm");
  PROGMEM Language_Str MSG_MOVE_01MM                       = _UxGT("Déplacer 0.1mm");
  PROGMEM Language_Str MSG_MOVE_1MM                        = _UxGT("Déplacer 1mm");
  PROGMEM Language_Str MSG_MOVE_10MM                       = _UxGT("Déplacer 10mm");
  PROGMEM Language_Str MSG_MOVE_0001IN                     = _UxGT("Déplacer 0.001in");
  PROGMEM Language_Str MSG_MOVE_001IN                      = _UxGT("Déplacer 0.01in");
  PROGMEM Language_Str MSG_MOVE_01IN                       = _UxGT("Déplacer 0.1in");
  PROGMEM Language_Str MSG_SPEED                           = _UxGT("Vitesse");
  PROGMEM Language_Str MSG_BED_Z                           = _UxGT("Plateau Z");
  PROGMEM Language_Str MSG_NOZZLE                          = _UxGT("Buse");
  PROGMEM Language_Str MSG_NOZZLE_N                        = _UxGT("Buse ~");
  PROGMEM Language_Str MSG_NOZZLE_PARKED                   = _UxGT("Hotend parquée");
  PROGMEM Language_Str MSG_NOZZLE_STANDBY                  = _UxGT("Hotend en veille");
  PROGMEM Language_Str MSG_BED                             = _UxGT("Plateau");
  PROGMEM Language_Str MSG_CHAMBER                         = _UxGT("Caisson");
  PROGMEM Language_Str MSG_COOLER                          = _UxGT("Refroidisseur lasert");
  PROGMEM Language_Str MSG_COOLER_TOGGLE                   = _UxGT("Permutter refroidisseur");
  PROGMEM Language_Str MSG_FLOWMETER_SAFETY                = _UxGT("Sécurité du débit");
  PROGMEM Language_Str MSG_LASER                           = _UxGT("Laser");
  PROGMEM Language_Str MSG_FAN_SPEED                       = _UxGT("Vitesse du ventilateur");
  PROGMEM Language_Str MSG_FAN_SPEED_N                     = _UxGT("Vitesse du ventilateur ~");
  PROGMEM Language_Str MSG_STORED_FAN_N                    = _UxGT("Ventilateur stocké ~");
  PROGMEM Language_Str MSG_EXTRA_FAN_SPEED                 = _UxGT("Vitesse du ventilateur supplémentaire");
  PROGMEM Language_Str MSG_EXTRA_FAN_SPEED_N               = _UxGT("Vitesse du ventilateur supplémentaire ~");
  PROGMEM Language_Str MSG_CONTROLLER_FAN                  = _UxGT("Ventilateur du contrôleur");
  PROGMEM Language_Str MSG_CONTROLLER_FAN_IDLE_SPEED       = _UxGT("Ralenti");
  PROGMEM Language_Str MSG_CONTROLLER_FAN_AUTO_ON          = _UxGT("Mode Auto");
  PROGMEM Language_Str MSG_CONTROLLER_FAN_SPEED            = _UxGT("Vitesse active");
  PROGMEM Language_Str MSG_CONTROLLER_FAN_DURATION         = _UxGT("Période d'inactivité");
  PROGMEM Language_Str MSG_FLOW                            = _UxGT("Flux");
  PROGMEM Language_Str MSG_FLOW_N                          = _UxGT("Flux ~");
  PROGMEM Language_Str MSG_CONTROL                         = _UxGT("Contrôler");
  PROGMEM Language_Str MSG_MIN                             = " " LCD_STR_THERMOMETER _UxGT(" Min");
  PROGMEM Language_Str MSG_MAX                             = " " LCD_STR_THERMOMETER _UxGT(" Max");
  PROGMEM Language_Str MSG_FACTOR                          = " " LCD_STR_THERMOMETER _UxGT(" Facteur");
  PROGMEM Language_Str MSG_AUTOTEMP                        = _UxGT("Temp. Auto.");
  PROGMEM Language_Str MSG_LCD_ON                          = _UxGT("Marche");
  PROGMEM Language_Str MSG_LCD_OFF                         = _UxGT("Arrêt");
  PROGMEM Language_Str MSG_PID_AUTOTUNE                    = _UxGT("PID Autotune");
  PROGMEM Language_Str MSG_PID_AUTOTUNE_E                  = _UxGT("PID Autotune *");
  PROGMEM Language_Str MSG_PID_AUTOTUNE_DONE               = _UxGT("Tuning PID terminé");
  PROGMEM Language_Str MSG_PID_BAD_EXTRUDER_NUM            = _UxGT("Echec Autotune! E incorrect");
  PROGMEM Language_Str MSG_PID_TEMP_TOO_HIGH               = _UxGT("Echec Autotune! Temp. trop haute");
  PROGMEM Language_Str MSG_PID_TIMEOUT                     = _UxGT("Echec Autotune! Opér. expirée");
  PROGMEM Language_Str MSG_PID_P                           = _UxGT("PID-P");
  PROGMEM Language_Str MSG_PID_P_E                         = _UxGT("PID-P *");
  PROGMEM Language_Str MSG_PID_I                           = _UxGT("PID-I");
  PROGMEM Language_Str MSG_PID_I_E                         = _UxGT("PID-I *");
  PROGMEM Language_Str MSG_PID_D                           = _UxGT("PID-D");
  PROGMEM Language_Str MSG_PID_D_E                         = _UxGT("PID-D *");
  PROGMEM Language_Str MSG_PID_C                           = _UxGT("PID-C");
  PROGMEM Language_Str MSG_PID_C_E                         = _UxGT("PID-C *");
  PROGMEM Language_Str MSG_PID_F                           = _UxGT("PID-F");
  PROGMEM Language_Str MSG_PID_F_E                         = _UxGT("PID-F *");
  PROGMEM Language_Str MSG_SELECT                          = _UxGT("Sélectionner");
  PROGMEM Language_Str MSG_SELECT_E                        = _UxGT("Sélectionner *");
  PROGMEM Language_Str MSG_ACC                             = _UxGT("Accélération");
  PROGMEM Language_Str MSG_JERK                            = _UxGT("Jerk");
  PROGMEM Language_Str MSG_VA_JERK                         = _UxGT("V") LCD_STR_A _UxGT("-Jerk");
  PROGMEM Language_Str MSG_VB_JERK                         = _UxGT("V") LCD_STR_B _UxGT("-Jerk");
  PROGMEM Language_Str MSG_VC_JERK                         = _UxGT("V") LCD_STR_C _UxGT("-Jerk");
  PROGMEM Language_Str MSG_VI_JERK                         = _UxGT("V") LCD_STR_I _UxGT("-Jerk");
  PROGMEM Language_Str MSG_VJ_JERK                         = _UxGT("V") LCD_STR_J _UxGT("-Jerk");
  PROGMEM Language_Str MSG_VK_JERK                         = _UxGT("V") LCD_STR_K _UxGT("-Jerk");
  PROGMEM Language_Str MSG_VE_JERK                         = _UxGT("Ve-Jerk");
  PROGMEM Language_Str MSG_JUNCTION_DEVIATION              = _UxGT("Junction Dev");
  PROGMEM Language_Str MSG_VELOCITY                        = _UxGT("Vélocité");
  PROGMEM Language_Str MSG_VMAX_A                          = _UxGT("Vmax ") LCD_STR_A;
  PROGMEM Language_Str MSG_VMAX_B                          = _UxGT("Vmax ") LCD_STR_B;
  PROGMEM Language_Str MSG_VMAX_C                          = _UxGT("Vmax ") LCD_STR_C;
  PROGMEM Language_Str MSG_VMAX_I                          = _UxGT("Vmax ") LCD_STR_I;
  PROGMEM Language_Str MSG_VMAX_J                          = _UxGT("Vmax ") LCD_STR_J;
  PROGMEM Language_Str MSG_VMAX_K                          = _UxGT("Vmax ") LCD_STR_K;
  PROGMEM Language_Str MSG_VMAX_E                          = _UxGT("Vmax ") LCD_STR_E;
  PROGMEM Language_Str MSG_VMAX_EN                         = _UxGT("Vmax *");
  PROGMEM Language_Str MSG_VMIN                            = _UxGT("Vmin");
  PROGMEM Language_Str MSG_VTRAV_MIN                       = _UxGT("Vmin course");
  PROGMEM Language_Str MSG_ACCELERATION                    = _UxGT("Accélération");
  PROGMEM Language_Str MSG_AMAX_A                          = _UxGT("Amax ") LCD_STR_A;
  PROGMEM Language_Str MSG_AMAX_B                          = _UxGT("Amax ") LCD_STR_B;
  PROGMEM Language_Str MSG_AMAX_C                          = _UxGT("Amax ") LCD_STR_C;
  PROGMEM Language_Str MSG_AMAX_I                          = _UxGT("Amax ") LCD_STR_I;
  PROGMEM Language_Str MSG_AMAX_J                          = _UxGT("Amax ") LCD_STR_J;
  PROGMEM Language_Str MSG_AMAX_K                          = _UxGT("Amax ") LCD_STR_K;
  PROGMEM Language_Str MSG_AMAX_E                          = _UxGT("Amax ") LCD_STR_E;
  PROGMEM Language_Str MSG_AMAX_EN                         = _UxGT("Amax *");
  PROGMEM Language_Str MSG_A_RETRACT                       = _UxGT("Acc.rétraction");
  PROGMEM Language_Str MSG_A_TRAVEL                        = _UxGT("Acc.course");
  PROGMEM Language_Str MSG_XY_FREQUENCY_LIMIT              = _UxGT("Fréquence max");
  PROGMEM Language_Str MSG_XY_FREQUENCY_FEEDRATE           = _UxGT("Vitesse min");
  PROGMEM Language_Str MSG_STEPS_PER_MM                    = _UxGT("Pas/mm");
  PROGMEM Language_Str MSG_A_STEPS                         = LCD_STR_A _UxGT(" pas/mm");
  PROGMEM Language_Str MSG_B_STEPS                         = LCD_STR_B _UxGT(" pas/mm");
  PROGMEM Language_Str MSG_C_STEPS                         = LCD_STR_C _UxGT(" pas/mm");
  PROGMEM Language_Str MSG_I_STEPS                         = LCD_STR_I _UxGT(" Steps/mm");
  PROGMEM Language_Str MSG_J_STEPS                         = LCD_STR_J _UxGT(" Steps/mm");
  PROGMEM Language_Str MSG_K_STEPS                         = LCD_STR_K _UxGT(" Steps/mm");
  PROGMEM Language_Str MSG_E_STEPS                         = _UxGT("E pas/mm");
  PROGMEM Language_Str MSG_EN_STEPS                        = _UxGT("* pas/mm");
  PROGMEM Language_Str MSG_TEMPERATURE                     = _UxGT("Température");
  PROGMEM Language_Str MSG_MOTION                          = _UxGT("Mouvement");
  PROGMEM Language_Str MSG_FILAMENT                        = _UxGT("Filament");
  PROGMEM Language_Str MSG_VOLUMETRIC_ENABLED              = _UxGT("E en mm") SUPERSCRIPT_THREE;
  PROGMEM Language_Str MSG_VOLUMETRIC_LIMIT                = _UxGT("Limite en mm") SUPERSCRIPT_THREE;
  PROGMEM Language_Str MSG_VOLUMETRIC_LIMIT_E              = _UxGT("Limite *");
  PROGMEM Language_Str MSG_FILAMENT_DIAM                   = _UxGT("Diamètre fil.");
  PROGMEM Language_Str MSG_FILAMENT_DIAM_E                 = _UxGT("Diamètre fil. *");
  PROGMEM Language_Str MSG_FILAMENT_UNLOAD                 = _UxGT("Retrait mm");
  PROGMEM Language_Str MSG_FILAMENT_LOAD                   = _UxGT("Charger mm");
  PROGMEM Language_Str MSG_ADVANCE_K                       = _UxGT("Avance K");
  PROGMEM Language_Str MSG_ADVANCE_K_E                     = _UxGT("Avance K *");
  PROGMEM Language_Str MSG_CONTRAST                        = _UxGT("Contraste LCD");
  PROGMEM Language_Str MSG_STORE_EEPROM                    = _UxGT("Enregistrer config.");
  PROGMEM Language_Str MSG_LOAD_EEPROM                     = _UxGT("Charger config.");
  PROGMEM Language_Str MSG_RESTORE_DEFAULTS                = _UxGT("Restaurer défauts");
  PROGMEM Language_Str MSG_INIT_EEPROM                     = _UxGT("Initialiser EEPROM");
  PROGMEM Language_Str MSG_ERR_EEPROM_CRC                  = _UxGT("Erreur CRC EEPROM");
  PROGMEM Language_Str MSG_ERR_EEPROM_INDEX                = _UxGT("Erreur Index EEPROM");
  PROGMEM Language_Str MSG_ERR_EEPROM_VERSION              = _UxGT("Erreur Version EEPROM");
  PROGMEM Language_Str MSG_SETTINGS_STORED                 = _UxGT("Configuration enregistrée");
  PROGMEM Language_Str MSG_MEDIA_UPDATE                    = _UxGT("MaJ Firmware SD");
  PROGMEM Language_Str MSG_RESET_PRINTER                   = _UxGT("RaZ imprimante");
  PROGMEM Language_Str MSG_REFRESH                         = LCD_STR_REFRESH _UxGT("Actualiser");
  PROGMEM Language_Str MSG_INFO_SCREEN                     = _UxGT("Surveiller");
  PROGMEM Language_Str MSG_PREPARE                         = _UxGT("Préparer");
  PROGMEM Language_Str MSG_TUNE                            = _UxGT("Régler");
  PROGMEM Language_Str MSG_POWER_MONITOR                   = _UxGT("Moniteur de puissance");
  PROGMEM Language_Str MSG_CURRENT                         = _UxGT("Courant");
  PROGMEM Language_Str MSG_VOLTAGE                         = _UxGT("Voltage");
  PROGMEM Language_Str MSG_POWER                           = _UxGT("Puissance");
  PROGMEM Language_Str MSG_START_PRINT                     = _UxGT("Démarrer impression");
  PROGMEM Language_Str MSG_BUTTON_NEXT                     = _UxGT("Suivant");
  PROGMEM Language_Str MSG_BUTTON_INIT                     = _UxGT("Init.");
  PROGMEM Language_Str MSG_BUTTON_STOP                     = _UxGT("Stop");
  PROGMEM Language_Str MSG_BUTTON_PRINT                    = _UxGT("Imprimer");
  PROGMEM Language_Str MSG_BUTTON_RESET                    = _UxGT("Reset");
  PROGMEM Language_Str MSG_BUTTON_IGNORE                   = _UxGT("Ignorer");
  PROGMEM Language_Str MSG_BUTTON_CANCEL                   = _UxGT("Annuler");
  PROGMEM Language_Str MSG_BUTTON_DONE                     = _UxGT("Terminé");
  PROGMEM Language_Str MSG_BUTTON_BACK                     = _UxGT("Retour");
  PROGMEM Language_Str MSG_BUTTON_PROCEED                  = _UxGT("Procéder");
  PROGMEM Language_Str MSG_BUTTON_SKIP                     = _UxGT("Passer");
  PROGMEM Language_Str MSG_PAUSING                         = _UxGT("Mise en pause...");
  PROGMEM Language_Str MSG_PAUSE_PRINT                     = _UxGT("Pause impression");
  PROGMEM Language_Str MSG_RESUME_PRINT                    = _UxGT("Reprendre impr.");
  PROGMEM Language_Str MSG_HOST_START_PRINT                = _UxGT("Démarrage de l'hôte");
  PROGMEM Language_Str MSG_STOP_PRINT                      = _UxGT("Arrêter impr.");
  PROGMEM Language_Str MSG_END_LOOPS                       = _UxGT("End Repeat Loops");
  PROGMEM Language_Str MSG_PRINTING_OBJECT                 = _UxGT("Impression objet");
  PROGMEM Language_Str MSG_CANCEL_OBJECT                   = _UxGT("Annuler objet");
  PROGMEM Language_Str MSG_CANCEL_OBJECT_N                 = _UxGT("Annuler objet =");
  PROGMEM Language_Str MSG_OUTAGE_RECOVERY                 = _UxGT("Récup. coup.");
  PROGMEM Language_Str MSG_MEDIA_MENU                      = _UxGT("Impression SD");
  PROGMEM Language_Str MSG_NO_MEDIA                        = _UxGT("Pas de média");
  PROGMEM Language_Str MSG_DWELL                           = _UxGT("Repos...");
  PROGMEM Language_Str MSG_USERWAIT                        = _UxGT("Attente utilis.");
  PROGMEM Language_Str MSG_PRINT_PAUSED                    = _UxGT("Impr. en pause");
  PROGMEM Language_Str MSG_PRINTING                        = _UxGT("Impression");
  PROGMEM Language_Str MSG_PRINT_ABORTED                   = _UxGT("Impr. annulée");
  PROGMEM Language_Str MSG_PRINT_DONE                      = _UxGT("Impression terminée");
  PROGMEM Language_Str MSG_NO_MOVE                         = _UxGT("Moteurs bloqués");
  PROGMEM Language_Str MSG_KILLED                          = _UxGT("KILLED. ");
  PROGMEM Language_Str MSG_STOPPED                         = _UxGT("STOPPÉ. ");
  PROGMEM Language_Str MSG_CONTROL_RETRACT                 = _UxGT("Rétractation mm");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_SWAP            = _UxGT("Ech. rétr. mm");
  PROGMEM Language_Str MSG_CONTROL_RETRACTF                = _UxGT("Vit. rétract°");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_ZHOP            = _UxGT("Saut Z mm");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVER         = _UxGT("Rét.reprise mm");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVER_SWAP    = _UxGT("Ech.reprise mm");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVERF        = _UxGT("V.rét. reprise");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVER_SWAPF   = _UxGT("V.éch. reprise");
  PROGMEM Language_Str MSG_AUTORETRACT                     = _UxGT("Rétraction auto");
  PROGMEM Language_Str MSG_FILAMENT_SWAP_LENGTH            = _UxGT("Longueur de retrait");
  PROGMEM Language_Str MSG_FILAMENT_SWAP_EXTRA             = _UxGT("Retrait supplémentaire");
  PROGMEM Language_Str MSG_FILAMENT_PURGE_LENGTH           = _UxGT("Longueur de purge");
  PROGMEM Language_Str MSG_TOOL_CHANGE                     = _UxGT("Changement outil");
  PROGMEM Language_Str MSG_TOOL_CHANGE_ZLIFT               = _UxGT("Augmenter Z");
  PROGMEM Language_Str MSG_SINGLENOZZLE_PRIME_SPEED        = _UxGT("Vitesse primaire");
  PROGMEM Language_Str MSG_SINGLENOZZLE_RETRACT_SPEED      = _UxGT("Vitesse rétract°");
  PROGMEM Language_Str MSG_FILAMENT_PARK_ENABLED           = _UxGT("Garer Extrudeur");
  PROGMEM Language_Str MSG_SINGLENOZZLE_UNRETRACT_SPEED    = _UxGT("Vitesse reprise");
  PROGMEM Language_Str MSG_SINGLENOZZLE_FAN_SPEED          = _UxGT("Vit.  ventil.");
  PROGMEM Language_Str MSG_SINGLENOZZLE_FAN_TIME           = _UxGT("Temps ventil.");
  PROGMEM Language_Str MSG_TOOL_MIGRATION_ON               = _UxGT("Auto ON");
  PROGMEM Language_Str MSG_TOOL_MIGRATION_OFF              = _UxGT("Auto OFF");
  PROGMEM Language_Str MSG_TOOL_MIGRATION                  = _UxGT("Migration d'outil");
  PROGMEM Language_Str MSG_TOOL_MIGRATION_AUTO             = _UxGT("Migration auto");
  PROGMEM Language_Str MSG_TOOL_MIGRATION_END              = _UxGT("Extrudeur Final");
  PROGMEM Language_Str MSG_TOOL_MIGRATION_SWAP             = _UxGT("Migrer vers *");
  PROGMEM Language_Str MSG_FILAMENTCHANGE                  = _UxGT("Changer filament");
  PROGMEM Language_Str MSG_FILAMENTCHANGE_E                = _UxGT("Changer filament *");
  PROGMEM Language_Str MSG_FILAMENTLOAD                    = _UxGT("Charger filament");
  PROGMEM Language_Str MSG_FILAMENTLOAD_E                  = _UxGT("Charger filament *");
  PROGMEM Language_Str MSG_FILAMENTUNLOAD                  = _UxGT("Retrait filament");
  PROGMEM Language_Str MSG_FILAMENTUNLOAD_E                = _UxGT("Retrait filament *");
  PROGMEM Language_Str MSG_FILAMENTUNLOAD_ALL              = _UxGT("Retirer tout");
  PROGMEM Language_Str MSG_ATTACH_MEDIA                    = _UxGT("Charger le média");
  PROGMEM Language_Str MSG_CHANGE_MEDIA                    = _UxGT("Actualiser média");
  PROGMEM Language_Str MSG_RELEASE_MEDIA                   = _UxGT("Retirer le média");
  PROGMEM Language_Str MSG_ZPROBE_OUT                      = _UxGT("Sonde Z hors plateau");
  PROGMEM Language_Str MSG_SKEW_FACTOR                     = _UxGT("Facteur écart");
  PROGMEM Language_Str MSG_BLTOUCH                         = _UxGT("BLTouch");
  PROGMEM Language_Str MSG_BLTOUCH_SELFTEST                = _UxGT("Self-Test");
  PROGMEM Language_Str MSG_BLTOUCH_RESET                   = _UxGT("Reset");
  PROGMEM Language_Str MSG_BLTOUCH_STOW                    = _UxGT("Ranger");
  PROGMEM Language_Str MSG_BLTOUCH_DEPLOY                  = _UxGT("Déployer");
  PROGMEM Language_Str MSG_BLTOUCH_SW_MODE                 = _UxGT("Mode SW");
  PROGMEM Language_Str MSG_BLTOUCH_5V_MODE                 = _UxGT("Mode 5V");
  PROGMEM Language_Str MSG_BLTOUCH_OD_MODE                 = _UxGT("Mode OD");
  PROGMEM Language_Str MSG_BLTOUCH_MODE_STORE              = _UxGT("Appliquer Mode");
  PROGMEM Language_Str MSG_BLTOUCH_MODE_STORE_5V           = _UxGT("Mise en 5V");
  PROGMEM Language_Str MSG_BLTOUCH_MODE_STORE_OD           = _UxGT("Mise en OD");
  PROGMEM Language_Str MSG_BLTOUCH_MODE_ECHO               = _UxGT("Afficher Mode");
  PROGMEM Language_Str MSG_BLTOUCH_MODE_CHANGE             = _UxGT("DANGER: De mauvais réglages peuvent causer des dommages! Continuer malgré tout?");
  PROGMEM Language_Str MSG_TOUCHMI_PROBE                   = _UxGT("TouchMI");
  PROGMEM Language_Str MSG_TOUCHMI_INIT                    = _UxGT("Init. TouchMI");
  PROGMEM Language_Str MSG_TOUCHMI_ZTEST                   = _UxGT("Test décalage Z");
  PROGMEM Language_Str MSG_TOUCHMI_SAVE                    = _UxGT("Sauvegarde");
  PROGMEM Language_Str MSG_MANUAL_DEPLOY_TOUCHMI           = _UxGT("Déployer TouchMI");
  PROGMEM Language_Str MSG_MANUAL_DEPLOY                   = _UxGT("Déployer Sonde Z");
  PROGMEM Language_Str MSG_MANUAL_STOW                     = _UxGT("Ranger Sonde Z");
  PROGMEM Language_Str MSG_HOME_FIRST                      = _UxGT("Origine %s%s%s Premier");
  PROGMEM Language_Str MSG_ZPROBE_OFFSETS                  = _UxGT("Position sonde Z");
  PROGMEM Language_Str MSG_ZPROBE_XOFFSET                  = _UxGT("Décalage X");
  PROGMEM Language_Str MSG_ZPROBE_YOFFSET                  = _UxGT("Décalage Y");
  PROGMEM Language_Str MSG_ZPROBE_ZOFFSET                  = _UxGT("Décalage Z");
  PROGMEM Language_Str MSG_MOVE_NOZZLE_TO_BED              = _UxGT("Déplacer la buse au plateau");
  PROGMEM Language_Str MSG_BABYSTEP_X                      = _UxGT("Babystep X");
  PROGMEM Language_Str MSG_BABYSTEP_Y                      = _UxGT("Babystep Y");
  PROGMEM Language_Str MSG_BABYSTEP_Z                      = _UxGT("Babystep Z");
  PROGMEM Language_Str MSG_BABYSTEP_I                      = _UxGT("Babystep ") LCD_STR_I;
  PROGMEM Language_Str MSG_BABYSTEP_J                      = _UxGT("Babystep ") LCD_STR_J;
  PROGMEM Language_Str MSG_BABYSTEP_K                      = _UxGT("Babystep ") LCD_STR_K;
  PROGMEM Language_Str MSG_BABYSTEP_TOTAL                  = _UxGT("Total");
  PROGMEM Language_Str MSG_ENDSTOP_ABORT                   = _UxGT("Butée abandonnée");
  PROGMEM Language_Str MSG_HEATING_FAILED_LCD              = _UxGT("Erreur de chauffe");
  PROGMEM Language_Str MSG_ERR_REDUNDANT_TEMP              = _UxGT("Err: TEMP. REDONDANTE");
  PROGMEM Language_Str MSG_THERMAL_RUNAWAY                 = _UxGT("ERREUR THERMIQUE");
  PROGMEM Language_Str MSG_THERMAL_RUNAWAY_BED             = _UxGT("ERREUR THERMIQUE PLATEAU");
  PROGMEM Language_Str MSG_THERMAL_RUNAWAY_CHAMBER         = _UxGT("ERREUR THERMIQUE CAISSON");
  PROGMEM Language_Str MSG_THERMAL_RUNAWAY_COOLER          = _UxGT("Emballement plus frais");
  PROGMEM Language_Str MSG_COOLING_FAILED                  = _UxGT("Refroidissement échoué");
  PROGMEM Language_Str MSG_ERR_MAXTEMP                     = _UxGT("Err: TEMP. MAX");
  PROGMEM Language_Str MSG_ERR_MINTEMP                     = _UxGT("Err: TEMP. MIN");
  PROGMEM Language_Str MSG_HALTED                          = _UxGT("IMPRIMANTE ARRÊTÉE");
  PROGMEM Language_Str MSG_PLEASE_RESET                    = _UxGT("Redémarrer SVP");
  PROGMEM Language_Str MSG_SHORT_DAY                       = _UxGT("j"); // One character only
  PROGMEM Language_Str MSG_SHORT_HOUR                      = _UxGT("h"); // One character only
  PROGMEM Language_Str MSG_SHORT_MINUTE                    = _UxGT("m"); // One character only
  PROGMEM Language_Str MSG_HEATING                         = _UxGT("En chauffe...");
  PROGMEM Language_Str MSG_COOLING                         = _UxGT("Refroidissement");
  PROGMEM Language_Str MSG_BED_HEATING                     = _UxGT("Chauffe du plateau...");
  PROGMEM Language_Str MSG_BED_COOLING                     = _UxGT("Refroidissement du plateau...");
  PROGMEM Language_Str MSG_PROBE_HEATING                   = _UxGT("Chauffe de la sonde...");
  PROGMEM Language_Str MSG_PROBE_COOLING                   = _UxGT("Refroidissement de la sonde...");
  PROGMEM Language_Str MSG_CHAMBER_HEATING                 = _UxGT("Chauffe du caisson...");
  PROGMEM Language_Str MSG_CHAMBER_COOLING                 = _UxGT("Refroidissement du caisson...");
  PROGMEM Language_Str MSG_LASER_COOLING                   = _UxGT("Refroidissement du laser...");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE                 = _UxGT("Calibration Delta");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE_X               = _UxGT("Calibrer X");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE_Y               = _UxGT("Calibrer Y");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE_Z               = _UxGT("Calibrer Z");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE_CENTER          = _UxGT("Calibrer centre");
  PROGMEM Language_Str MSG_DELTA_SETTINGS                  = _UxGT("Réglages Delta");
  PROGMEM Language_Str MSG_DELTA_AUTO_CALIBRATE            = _UxGT("Calibration Auto");
  PROGMEM Language_Str MSG_DELTA_HEIGHT_CALIBRATE          = _UxGT("Hauteur Delta");
  PROGMEM Language_Str MSG_DELTA_Z_OFFSET_CALIBRATE        = _UxGT("Delta Z sonde");
  PROGMEM Language_Str MSG_DELTA_DIAG_ROD                  = _UxGT("Diagonale");
  PROGMEM Language_Str MSG_DELTA_HEIGHT                    = _UxGT("Hauteur");
  PROGMEM Language_Str MSG_DELTA_RADIUS                    = _UxGT("Rayon");
  PROGMEM Language_Str MSG_INFO_MENU                       = _UxGT("Infos imprimante");
  PROGMEM Language_Str MSG_INFO_PRINTER_MENU               = _UxGT("Infos imprimante");
  PROGMEM Language_Str MSG_3POINT_LEVELING                 = _UxGT("Niveau à 3 points");
  PROGMEM Language_Str MSG_LINEAR_LEVELING                 = _UxGT("Niveau linéaire");
  PROGMEM Language_Str MSG_BILINEAR_LEVELING               = _UxGT("Niveau bilinéaire");
  PROGMEM Language_Str MSG_UBL_LEVELING                    = _UxGT("Niveau plateau unifié");
  PROGMEM Language_Str MSG_MESH_LEVELING                   = _UxGT("Nivellement Mesh");
  PROGMEM Language_Str MSG_MESH_DONE                       = _UxGT("Sondage Mesh terminé");
  PROGMEM Language_Str MSG_INFO_STATS_MENU                 = _UxGT("Stats. imprimante");
  PROGMEM Language_Str MSG_INFO_BOARD_MENU                 = _UxGT("Infos carte");
  PROGMEM Language_Str MSG_INFO_THERMISTOR_MENU            = _UxGT("Thermistances");
  PROGMEM Language_Str MSG_INFO_EXTRUDERS                  = _UxGT("Extrudeurs");
  PROGMEM Language_Str MSG_INFO_BAUDRATE                   = _UxGT("Bauds");
  PROGMEM Language_Str MSG_INFO_PROTOCOL                   = _UxGT("Protocole");
  PROGMEM Language_Str MSG_INFO_RUNAWAY_OFF                = _UxGT("Protection inactive");
  PROGMEM Language_Str MSG_INFO_RUNAWAY_ON                 = _UxGT("Protection active");
  PROGMEM Language_Str MSG_HOTEND_IDLE_TIMEOUT             = _UxGT("Délai d'inactivité Hotend");

  PROGMEM Language_Str MSG_CASE_LIGHT                      = _UxGT("Lumière caisson");
  PROGMEM Language_Str MSG_CASE_LIGHT_BRIGHTNESS           = _UxGT("Luminosité");
  PROGMEM Language_Str MSG_KILL_EXPECTED_PRINTER           = _UxGT("Imprimante incorrecte");

  #if LCD_WIDTH >= 20
    PROGMEM Language_Str MSG_INFO_PRINT_COUNT              = _UxGT("Nbre impressions");
    PROGMEM Language_Str MSG_INFO_COMPLETED_PRINTS         = _UxGT("Terminées");
    PROGMEM Language_Str MSG_INFO_PRINT_TIME               = _UxGT("Tps impr. total");
    PROGMEM Language_Str MSG_INFO_PRINT_LONGEST            = _UxGT("Impr. la + longue");
    PROGMEM Language_Str MSG_INFO_PRINT_FILAMENT           = _UxGT("Total filament");
  #else
    PROGMEM Language_Str MSG_INFO_PRINT_COUNT              = _UxGT("Impressions");
    PROGMEM Language_Str MSG_INFO_COMPLETED_PRINTS         = _UxGT("Terminées");
    PROGMEM Language_Str MSG_INFO_PRINT_TIME               = _UxGT("Total");
    PROGMEM Language_Str MSG_INFO_PRINT_LONGEST            = _UxGT("+ long");
    PROGMEM Language_Str MSG_INFO_PRINT_FILAMENT           = _UxGT("Filament");
  #endif

  PROGMEM Language_Str MSG_INFO_MIN_TEMP                   = _UxGT("Temp Min");
  PROGMEM Language_Str MSG_INFO_MAX_TEMP                   = _UxGT("Temp Max");
  PROGMEM Language_Str MSG_INFO_PSU                        = _UxGT("Alim.");
  PROGMEM Language_Str MSG_DRIVE_STRENGTH                  = _UxGT("Puiss. moteur ");
  PROGMEM Language_Str MSG_DAC_PERCENT_X                   = _UxGT("X Driver %");
  PROGMEM Language_Str MSG_DAC_PERCENT_Y                   = _UxGT("Y Driver %");
  PROGMEM Language_Str MSG_DAC_PERCENT_Z                   = _UxGT("Z Driver %");
  PROGMEM Language_Str MSG_DAC_PERCENT_I                   = _UxGT("I Driver %");
  PROGMEM Language_Str MSG_DAC_PERCENT_J                   = _UxGT("J Driver %");
  PROGMEM Language_Str MSG_DAC_PERCENT_K                   = _UxGT("K Driver %");
  PROGMEM Language_Str MSG_DAC_PERCENT_E                   = _UxGT("E Driver %");
  PROGMEM Language_Str MSG_ERROR_TMC                       = _UxGT("ERREUR CONNEXION TMC");
  PROGMEM Language_Str MSG_DAC_EEPROM_WRITE                = _UxGT("DAC EEPROM sauv.");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEADER          = _UxGT("CHANGER FILAMENT");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEADER_PAUSE    = _UxGT("IMPRESSION EN PAUSE");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEADER_LOAD     = _UxGT("CHARGER FILAMENT");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEADER_UNLOAD   = _UxGT("DECHARGER FILAMENT");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_OPTION_HEADER   = _UxGT("OPTIONS REPRISE:");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_OPTION_PURGE    = _UxGT("Purger plus");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_OPTION_RESUME   = _UxGT("Reprendre");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_NOZZLE          = _UxGT("  Buse: ");
  PROGMEM Language_Str MSG_RUNOUT_SENSOR                   = _UxGT("Capteur filament");
  PROGMEM Language_Str MSG_RUNOUT_DISTANCE_MM              = _UxGT("Distance mm");
  PROGMEM Language_Str MSG_KILL_HOMING_FAILED              = _UxGT("Echec origine");
  PROGMEM Language_Str MSG_LCD_PROBING_FAILED              = _UxGT("Echec de la sonde");

  PROGMEM Language_Str MSG_MMU2_CHOOSE_FILAMENT_HEADER     = _UxGT("CHOISIR FILAMENT");
  PROGMEM Language_Str MSG_MMU2_MENU                       = _UxGT("MMU");
  PROGMEM Language_Str MSG_KILL_MMU2_FIRMWARE              = _UxGT("MAJ Firmware MMU!");
  PROGMEM Language_Str MSG_MMU2_NOT_RESPONDING             = _UxGT("MMU ne répond plus");
  PROGMEM Language_Str MSG_MMU2_RESUME                     = _UxGT("Continuer Imp. MMU");
  PROGMEM Language_Str MSG_MMU2_RESUMING                   = _UxGT("Reprise MMU...");
  PROGMEM Language_Str MSG_MMU2_LOAD_FILAMENT              = _UxGT("Charge dans MMU");
  PROGMEM Language_Str MSG_MMU2_LOAD_ALL                   = _UxGT("Charger tous dans MMU");
  PROGMEM Language_Str MSG_MMU2_LOAD_TO_NOZZLE             = _UxGT("Charger dans buse");
  PROGMEM Language_Str MSG_MMU2_EJECT_FILAMENT             = _UxGT("Ejecter fil. du MMU");
  PROGMEM Language_Str MSG_MMU2_EJECT_FILAMENT_N           = _UxGT("Ejecter fil. ~");
  PROGMEM Language_Str MSG_MMU2_UNLOAD_FILAMENT            = _UxGT("Retrait filament");
  PROGMEM Language_Str MSG_MMU2_LOADING_FILAMENT           = _UxGT("Chargem. fil. %i...");
  PROGMEM Language_Str MSG_MMU2_EJECTING_FILAMENT          = _UxGT("Ejection fil...");
  PROGMEM Language_Str MSG_MMU2_UNLOADING_FILAMENT         = _UxGT("Retrait fil....");
  PROGMEM Language_Str MSG_MMU2_ALL                        = _UxGT("Tous");
  PROGMEM Language_Str MSG_MMU2_FILAMENT_N                 = _UxGT("Filament ~");
  PROGMEM Language_Str MSG_MMU2_RESET                      = _UxGT("Réinit. MMU");
  PROGMEM Language_Str MSG_MMU2_RESETTING                  = _UxGT("Réinit. MMU...");
  PROGMEM Language_Str MSG_MMU2_EJECT_RECOVER              = _UxGT("Retrait, click");

  PROGMEM Language_Str MSG_MIX                             = _UxGT("Mix");
  PROGMEM Language_Str MSG_MIX_COMPONENT_N                 = _UxGT("Composante =");
  PROGMEM Language_Str MSG_MIXER                           = _UxGT("Mixeur");
  PROGMEM Language_Str MSG_GRADIENT                        = _UxGT("Dégradé");
  PROGMEM Language_Str MSG_FULL_GRADIENT                   = _UxGT("Dégradé complet");
  PROGMEM Language_Str MSG_TOGGLE_MIX                      = _UxGT("Toggle mix");
  PROGMEM Language_Str MSG_CYCLE_MIX                       = _UxGT("Cycle mix");
  PROGMEM Language_Str MSG_GRADIENT_MIX                    = _UxGT("Mix dégradé");
  PROGMEM Language_Str MSG_REVERSE_GRADIENT                = _UxGT("Inverser dégradé");
  PROGMEM Language_Str MSG_ACTIVE_VTOOL                    = _UxGT("Active V-tool");
  PROGMEM Language_Str MSG_START_VTOOL                     = _UxGT("Début V-tool");
  PROGMEM Language_Str MSG_END_VTOOL                       = _UxGT("  Fin V-tool");
  PROGMEM Language_Str MSG_GRADIENT_ALIAS                  = _UxGT("Alias V-tool");
  PROGMEM Language_Str MSG_RESET_VTOOLS                    = _UxGT("Réinit. V-tools");
  PROGMEM Language_Str MSG_COMMIT_VTOOL                    = _UxGT("Valider Mix V-tool");
  PROGMEM Language_Str MSG_VTOOLS_RESET                    = _UxGT("V-tools réinit. ok");
  PROGMEM Language_Str MSG_START_Z                         = _UxGT("Début Z:");
  PROGMEM Language_Str MSG_END_Z                           = _UxGT("  Fin Z:");

  PROGMEM Language_Str MSG_GAMES                           = _UxGT("Jeux");
  PROGMEM Language_Str MSG_BRICKOUT                        = _UxGT("Casse-briques");
  PROGMEM Language_Str MSG_INVADERS                        = _UxGT("Invaders");
  PROGMEM Language_Str MSG_SNAKE                           = _UxGT("Sn4k3");
  PROGMEM Language_Str MSG_MAZE                            = _UxGT("Labyrinthe");

  PROGMEM Language_Str MSG_BAD_PAGE                        = _UxGT("Erreur index page");
  PROGMEM Language_Str MSG_BAD_PAGE_SPEED                  = _UxGT("Erreur vitesse page");

  PROGMEM Language_Str MSG_EDIT_PASSWORD                   = _UxGT("Editer mot de passe");
  PROGMEM Language_Str MSG_LOGIN_REQUIRED                  = _UxGT("Connexion requise");
  PROGMEM Language_Str MSG_PASSWORD_SETTINGS               = _UxGT("Paramètres mot de passe");
  PROGMEM Language_Str MSG_ENTER_DIGIT                     = _UxGT("Entrez le chiffre");
  PROGMEM Language_Str MSG_CHANGE_PASSWORD                 = _UxGT("Définir/Editer mot de passe");
  PROGMEM Language_Str MSG_REMOVE_PASSWORD                 = _UxGT("Supprimer mot de passe");
  PROGMEM Language_Str MSG_PASSWORD_SET                    = _UxGT("Le mot de passe est ");
  PROGMEM Language_Str MSG_START_OVER                      = _UxGT("Recommencer");
  PROGMEM Language_Str MSG_REMINDER_SAVE_SETTINGS          = _UxGT("N'oubliez pas de sauvegarder!");
  PROGMEM Language_Str MSG_PASSWORD_REMOVED                = _UxGT("Mot de passe supprimé");

  //
  // Filament Change screens show up to 3 lines on a 4-line display
  //                        ...or up to 2 lines on a 3-line display
  //
  #if LCD_HEIGHT >= 4
    PROGMEM Language_Str MSG_ADVANCED_PAUSE_WAITING        = _UxGT(MSG_2_LINE("Presser bouton", "pour reprendre"));
    PROGMEM Language_Str MSG_PAUSE_PRINT_PARKING           = _UxGT(MSG_1_LINE("Parking..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_INIT          = _UxGT(MSG_2_LINE("Attente filament", "pour démarrer"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_INSERT        = _UxGT(MSG_3_LINE("Insérer filament", "et app. bouton", "pour continuer..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEAT          = _UxGT(MSG_2_LINE("Presser le bouton", "pour chauffer..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEATING       = _UxGT(MSG_2_LINE("Buse en chauffe", "Patienter SVP..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_UNLOAD        = _UxGT(MSG_2_LINE("Attente", "retrait du filament"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_LOAD          = _UxGT(MSG_2_LINE("Attente", "chargement filament"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_PURGE         = _UxGT(MSG_2_LINE("Attente", "Purge filament"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_CONT_PURGE    = _UxGT(MSG_2_LINE("Presser pour finir", "la purge du filament"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_RESUME        = _UxGT(MSG_2_LINE("Attente reprise", "impression"));
  #else
    PROGMEM Language_Str MSG_ADVANCED_PAUSE_WAITING        = _UxGT(MSG_1_LINE("Clic pour continuer"));
    PROGMEM Language_Str MSG_PAUSE_PRINT_PARKING           = _UxGT(MSG_1_LINE("Parking..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_INIT          = _UxGT(MSG_1_LINE("Patience..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_INSERT        = _UxGT(MSG_1_LINE("Insérer fil."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEAT          = _UxGT(MSG_1_LINE("Chauffer ?"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEATING       = _UxGT(MSG_1_LINE("Chauffage..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_UNLOAD        = _UxGT(MSG_1_LINE("Retrait fil..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_LOAD          = _UxGT(MSG_1_LINE("Chargement..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_PURGE         = _UxGT(MSG_1_LINE("Purge..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_CONT_PURGE    = _UxGT(MSG_1_LINE("Terminer ?"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_RESUME        = _UxGT(MSG_1_LINE("Reprise..."));
  #endif
  PROGMEM Language_Str MSG_TMC_DRIVERS                     = _UxGT("Drivers TMC");
  PROGMEM Language_Str MSG_TMC_CURRENT                     = _UxGT("Courant driver");
  PROGMEM Language_Str MSG_TMC_HYBRID_THRS                 = _UxGT("Seuil hybride");
  PROGMEM Language_Str MSG_TMC_HOMING_THRS                 = _UxGT("ensorless Homing");
  PROGMEM Language_Str MSG_TMC_STEPPING_MODE               = _UxGT("Mode pas à pas");
  PROGMEM Language_Str MSG_TMC_STEALTH_ENABLED             = _UxGT("StealthChop activé");
  PROGMEM Language_Str MSG_SERVICE_RESET                   = _UxGT("Réinit.");
  PROGMEM Language_Str MSG_SERVICE_IN                      = _UxGT("  dans:");
  PROGMEM Language_Str MSG_BACKLASH                        = _UxGT("Backlash");
  PROGMEM Language_Str MSG_BACKLASH_A                      = LCD_STR_A;
  PROGMEM Language_Str MSG_BACKLASH_B                      = LCD_STR_B;
  PROGMEM Language_Str MSG_BACKLASH_C                      = LCD_STR_C;
  PROGMEM Language_Str MSG_BACKLASH_I                      = LCD_STR_I;
  PROGMEM Language_Str MSG_BACKLASH_J                      = LCD_STR_J;
  PROGMEM Language_Str MSG_BACKLASH_K                      = LCD_STR_K;
  PROGMEM Language_Str MSG_BACKLASH_CORRECTION             = _UxGT("Correction");
  PROGMEM Language_Str MSG_BACKLASH_SMOOTHING              = _UxGT("Lissage");

  PROGMEM Language_Str MSG_LEVEL_X_AXIS                    = _UxGT("Niveau axe X");
  PROGMEM Language_Str MSG_AUTO_CALIBRATE                  = _UxGT("Calibration automatique");
  #if ENABLED(TOUCH_UI_FTDI_EVE)
    PROGMEM Language_Str MSG_HEATER_TIMEOUT                = _UxGT("En protection, temp. réduite. Ok pour rechauffer et continuer.");
  #else
    PROGMEM Language_Str MSG_HEATER_TIMEOUT                = _UxGT("En protection");
  #endif
  PROGMEM Language_Str MSG_REHEAT                          = _UxGT("Réchauffer");
  PROGMEM Language_Str MSG_REHEATING                       = _UxGT("Réchauffe...");

  PROGMEM Language_Str MSG_PROBE_WIZARD                    = _UxGT("Assistant Sonde Z");
  PROGMEM Language_Str MSG_PROBE_WIZARD_PROBING            = _UxGT("Mesure référence");
  PROGMEM Language_Str MSG_PROBE_WIZARD_MOVING             = _UxGT("Dépl. vers pos");

  PROGMEM Language_Str MSG_SOUND                           = _UxGT("Sons");

  PROGMEM Language_Str MSG_TOP_LEFT                        = _UxGT("Coin haut gauche");
  PROGMEM Language_Str MSG_BOTTOM_LEFT                     = _UxGT("Coin bas gauche");
  PROGMEM Language_Str MSG_TOP_RIGHT                       = _UxGT("Coin haut droit");
  PROGMEM Language_Str MSG_BOTTOM_RIGHT                    = _UxGT("Coin bas droit");
  PROGMEM Language_Str MSG_CALIBRATION_COMPLETED           = _UxGT("Calibration terminée");
  PROGMEM Language_Str MSG_CALIBRATION_FAILED              = _UxGT("Échec de l'étalonnage");

  PROGMEM Language_Str MSG_DRIVER_BACKWARD                 = _UxGT(" driver inversé");

  PROGMEM Language_Str MSG_SD_CARD                         = _UxGT("Carte SD");
  PROGMEM Language_Str MSG_USB_DISK                        = _UxGT("Disque USB");
}
