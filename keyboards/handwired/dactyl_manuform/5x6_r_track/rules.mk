# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = caterina

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = no       # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no        # Commands for debug and configuration
NKRO_ENABLE = no            # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
AUDIO_ENABLE = no           # Audio output
SPLIT_KEYBOARD = yes

EXTRAFLAGS += -flto # to save some space
TAP_DANCE_ENABLE = yes
COMBO_ENABLE=yes
DEBOUNCE_TYPE = sym_eager_pk

# Add trackball support
POINTING_DEVICE_ENABLE = yes
POINTING_DEVICE_DRIVER = pmw3360
SRC += trackball_functions.c
