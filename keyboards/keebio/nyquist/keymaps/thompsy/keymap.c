#include QMK_KEYBOARD_H

#define _COLEMAK 0
#define _NAV 1
#define _NUMBER 2
#define _SYMBOL 3
#define _FUNCTION 4
#define _RGB 5
#define _QWERTY 6


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        [_COLEMAK] = LAYOUT_ortho_4x12(
KC_LCTL, KC_Q,			KC_W,			KC_F, 			KC_P, 				KC_B,				/* split */	KC_J, 					KC_L, 				KC_U, 					KC_Y, 			KC_QUOT, 		KC_LCTL, 
KC_LSFT, LGUI_T(KC_A),	LALT_T(KC_R),	LCTL_T(KC_S), 	LSFT_T(KC_T), 		KC_G,				/* split */	KC_M, 					RSFT_T(KC_N), 		RCTL_T(KC_E), 			RALT_T(KC_I), 	RGUI_T(KC_O), 	KC_LSFT, 
KC_LALT, KC_Z,			KC_X, 			KC_C, 			MEH_T(KC_D),		KC_V,				/* split */	KC_K, 					MEH_T(KC_H),		KC_COMM, 				KC_DOT, 		KC_SLSH,		KC_LALT, 
KC_LGUI, KC_NO, 		KC_NO, 			KC_ESC,			LT(_NAV,KC_ENT),	LT(_RGB,KC_TAB),	/* split */	LT(_SYMBOL,KC_BSPC),	LT(_NUMBER,KC_SPC),	LT(_FUNCTION,KC_DEL),	KC_NO,			KC_NO,			KC_LGUI),
		
		
        [_NAV] = LAYOUT_ortho_4x12(
KC_NO, KC_NO, 	KC_NO, 		KC_NO, 		KC_NO, 		KC_NO,	/* split */	KC_NO, 		DT_UP, 		DT_DOWN,	DT_PRNT, 	KC_NO, 		KC_NO, 
KC_NO, KC_LGUI,	KC_LALT,	KC_LCTL,	KC_LSFT,	KC_NO,	/* split */	KC_CAPS, 	KC_LEFT, 	KC_DOWN, 	KC_UP, 		KC_RGHT, 	KC_NO, 
KC_NO, KC_NO, 	KC_NO, 		KC_NO, 		KC_NO, 		KC_NO,	/* split */	KC_INS, 	KC_HOME, 	KC_PGDN, 	KC_PGUP, 	KC_END, 	KC_NO, 
KC_NO, KC_NO, 	KC_NO, 		KC_NO, 		KC_NO, 		KC_NO,	/* split */	KC_BSPC, 	KC_SPC, 	KC_DEL, 	KC_NO, 		KC_NO, 		KC_NO),
		
		
        [_NUMBER] = LAYOUT_ortho_4x12(
KC_NO, KC_DLR, 	KC_7, 	KC_8, 	KC_9, KC_ASTR,	/* split */	KC_NO, KC_NO, 	KC_NO, 		KC_NO, 		KC_NO, 		KC_NO, 
KC_NO, KC_PSLS, KC_4, 	KC_5, 	KC_6, KC_MINS, 	/* split */	KC_NO, KC_LSFT, KC_LCTL, 	KC_LALT, 	KC_LGUI, 	KC_NO, 
KC_NO, KC_PERC, KC_1, 	KC_2, 	KC_3, KC_PLUS, 	/* split */	KC_NO, KC_NO, 	KC_NO, 		KC_NO, 		KC_NO, 		KC_NO, 
KC_NO, KC_NO, 	KC_NO, 	KC_DOT, KC_0, KC_EQL, 	/* split */	KC_NO, KC_NO, 	KC_NO, 		KC_NO, 		KC_NO, 		KC_NO),
		
		
        [_SYMBOL] = LAYOUT_ortho_4x12(
KC_NO, KC_BSLS, KC_AMPR, 	KC_AT, 		KC_TILD, 	KC_EXLM,	/* split */	KC_NO, KC_NO, 	KC_NO, 		KC_NO, 		KC_NO, 		KC_NO, 
KC_NO, KC_COLN, KC_LCBR, 	KC_LBRC, 	KC_LPRN, 	KC_HASH,	/* split */	KC_NO, KC_LSFT, KC_LCTL, 	KC_LALT, 	KC_LGUI, 	KC_NO, 
KC_NO, KC_SCLN, KC_RCBR, 	KC_RBRC, 	KC_RPRN, 	KC_PIPE,	/* split */	KC_NO, KC_NO, 	KC_NO, 		KC_NO, 		KC_NO, 		KC_NO, 
KC_NO, KC_NO, 	KC_NO, 		KC_CIRC, 	KC_GRV,		KC_UNDS,	/* split */	KC_NO, KC_NO, 	KC_NO, 		KC_NO, 		KC_NO, 		KC_NO),
		
		
        [_FUNCTION] = LAYOUT_ortho_4x12(
KC_NO, KC_F12, 	KC_F7, KC_F8, 	KC_F9, 	KC_NO,		/* split */	KC_NO, KC_NO, 	KC_NO, 		KC_NO, 		KC_NO, 		KC_NO, 
KC_NO, KC_F11, 	KC_F4, KC_F5, 	KC_F6, 	KC_SCRL,	/* split */	KC_NO, KC_LSFT, KC_LCTL, 	KC_LALT, 	KC_LGUI, 	KC_NO, 
KC_NO, KC_F10, 	KC_F1, KC_F2, 	KC_F3, 	KC_PAUS,	/* split */	KC_NO, KC_NO, 	KC_NO, 		KC_NO, 		KC_NO, 		KC_NO, 
KC_NO, KC_NO, 	KC_NO, KC_APP, 	KC_SPC,	KC_TAB,		/* split */	KC_NO, KC_NO, 	KC_NO, 		KC_NO, 		KC_NO, 		KC_NO),
	
        [_RGB] = LAYOUT_ortho_4x12(
KC_NO, KC_NO, 	KC_NO, 		KC_NO, 		KC_NO, 		KC_NO,	/* split */	RGB_TOG, 	KC_NO, 		KC_NO,		KC_NO, 		KC_NO, 	KC_NO, 
KC_NO, KC_LGUI,	KC_LALT,	KC_LCTL,	KC_LSFT,	KC_NO,	/* split */	RGB_MOD, 	RGB_HUI, 	RGB_SAI, 	RGB_VAI, 	KC_NO, 	KC_NO, 
KC_NO, KC_NO, 	KC_NO, 		KC_NO, 		KC_NO, 		KC_NO,	/* split */	RGB_RMOD, 	RGB_HUD, 	RGB_SAD, 	RGB_VAD, 	KC_NO, 	KC_NO, 
KC_NO, KC_NO, 	KC_NO, 		KC_NO, 		KC_NO, 		KC_NO,	/* split */	KC_NO, 		KC_NO, 		KC_NO, 		KC_NO, 		KC_NO, 	KC_NO),
	
		[_QWERTY] = LAYOUT_ortho_4x12(
KC_TAB,        KC_Q,   KC_W,    KC_E,    KC_R,  KC_T,	/* split */	KC_Y,   KC_U,  KC_I,    KC_O,    KC_P,    KC_BSPC,
MO(_FUNCTION), KC_A,   KC_S,    KC_D,    KC_F,  KC_G,	/* split */	KC_H,   KC_J,  KC_K,    KC_L,    KC_SCLN, KC_ENT,
OSM(MOD_LSFT), KC_Z,   KC_X,    KC_C,    KC_V,  KC_B,	/* split */	KC_N,   KC_M,  KC_COMM, KC_DOT,  KC_SLSH, KC_QUOT,
KC_LCTL,       KC_GRV, KC_LGUI, KC_LALT, KC_NO, KC_SPC,	/* split */	KC_SPC, KC_NO, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT)
};

#ifdef RGBLIGHT_ENABLE
bool rgb_layer_change = true;
#endif

layer_state_t layer_state_set_user(layer_state_t state) {
#ifdef RGBLIGHT_ENABLE
  if (rgb_layer_change) {
    switch (get_highest_layer(state)) {
    case _FUNCTION:
      rgblight_setrgb(RGB_PURPLE);
      rgblight_mode(RGBLIGHT_MODE_STATIC_LIGHT);
      break;
    case _SYMBOL:
	  rgblight_setrgb(RGB_SPRINGGREEN);
	  rgblight_mode(RGBLIGHT_MODE_STATIC_LIGHT);
      break;
	case _NAV:
	  rgblight_setrgb(RGB_TEAL);
      rgblight_mode(RGBLIGHT_MODE_STATIC_LIGHT);
      break;
	case _NUMBER:
	  rgblight_setrgb(RGB_BLUE);
	  rgblight_mode(RGBLIGHT_MODE_STATIC_LIGHT);
	  break;
	case _QWERTY:
	  break;
    default:
      rgblight_setrgb(RGB_RED);
	  rgblight_mode(RGBLIGHT_MODE_STATIC_LIGHT);
      break;
    }
  }
#endif
  return state;
}
