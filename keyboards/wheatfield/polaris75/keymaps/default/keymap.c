#include "polaris75.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Keymap BASE: (Base Layer) Default Layer
   * ,--------------------------------------------------------------------.     
   * |Esc| F1| F2| F3| F4|  | F5| F6| F7| F8|   |F9|F10|F11|F12| Fn| PScrn|
   * `--------------------------------------------------------------------'
   * ,--------------------------------------------------------------------. 
   * | ~ | 1 |  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  BSPC  ||   Ins|
   * |--------------------------------------------------------------------|        
   * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|   \  ||   Del|
   * |--------------------------------------------------------------------| 
   * |Ctrl   |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return   |      | 
   * |--------------------------------------------------------------------|
   * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  / |Shift  | Up|      | 
   * ---------------------------------------------------------------------|
   * | Ctrl | GUI  | Alt |      Space           | Alt| Fn| left| Dn| Rght |
   * ---------------------------------------------------------------------'
   */

	KEYMAP(
		KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4,  KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,  TG(1),  KC_PSCR,  \
		KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9,  KC_0, KC_MINS, KC_EQL,      KC_BSPC,       KC_INS,  \
		 KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC,      KC_BSLS,      KC_DEL,  \
		  KC_CAPS,  KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L,  KC_SCLN, KC_QUOT,      KC_ENT,                  \
		    KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,     KC_RSFT,    KC_UP,            \
		KC_LCTL, KC_LGUI, KC_LALT,           KC_SPC,                     KC_RALT,    MO(1),     KC_LEFT, KC_DOWN, KC_RGHT),   

	KEYMAP(
		KC_TRNS,   RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD,    RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   TG(1),  KC_PAUS,  \
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, BL_TOGG, BL_DEC, BL_INC,    KC_TRNS,        KC_TRNS,  \
		 KC_TRNS, KC_TRNS, KC_UP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       RESET,      KC_TRNS,  \
		  KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS, KC_TRNS, KC_MPRV, KC_MPLY, KC_MNXT, KC_TRNS, KC_TRNS,      KC_TRNS,                     \
		    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MUTE, KC_VOLD, KC_VOLU, KC_TRNS,      KC_TRNS,         KC_PGUP,           \
		 KC_TRNS,  KC_TRNS,  KC_TRNS,                     KC_TRNS,                  KC_TRNS,   KC_TRNS,                     KC_HOME, KC_PGDN, KC_END)	

};


void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
		DDRC |= (1 << 7); PORTC &= ~(1 << 7);
	} else {
		DDRC &= ~(1 << 7); PORTC &= ~(1 << 7);
	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_KANA)) {
		
	} else {
		
	}

}