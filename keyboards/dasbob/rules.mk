# Set any rules.mk overrides for your specific keymap here.
# See rules at https://docs.qmk.fm/#/config_options?id=the-rulesmk-file

# Bootloader selection
BOOTLOADER = rp2040

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = no            # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
UNICODE_ENABLE = yes        # Unicode
AUDIO_ENABLE = yes          # Audio output
SPLIT_KEYBOARD = yes        # Use shared split_common code
OLED_ENABLE = no
OLED_DRIVER = SSD1306
WPM_ENABLE = yes
LTO_ENABLE = yes
SERIAL_DRIVER = vendor
AUDIO_DRIVER = pwm_hardware

LTO_ENABLE = yes             # Longer compile, smaller file
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
TAP_DANCE_ENABLE = yes
SPACE_CADET_ENABLE = no
COMBO_ENABLE = yes
REPEAT_KEY_ENABLE = yes
