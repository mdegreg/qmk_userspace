# Set any rules.mk overrides for your specific keymap here.
# See rules at https://docs.qmk.fm/#/config_options?id=the-rulesmk-file

# debug defs
CONSOLE_ENABLE = yes
COMMAND_ENABLE = no
MOUSEKEY_ENABLE = no

# feature defs
KEY_OVERRIDE_ENABLE = no
OS_DETECTION_ENABLE = yes
DEFERRED_EXEC_ENABLE = yes
ORYX_ENABLE = no
TAP_DANCE_ENABLE = yes

# firmware size optimizations
MAGIC_ENABLE = no
GRAVE_ESC_ENABLE = no

# custom behavior
SUPER_ALT_TAB_ENABLE = yes
OS_SWAP_CMD_KEY_ENABLE = yes

SRC += matrix.c
SRC += modifiers.c

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = yes        # Console for debug
COMMAND_ENABLE = yes        # Commands for debug and configuration
NKRO_ENABLE = yes           # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
AUDIO_ENABLE = yes          # Audio output
CUSTOM_MATRIX = lite
SWAP_HANDS_ENABLE = yes
RGB_MATRIX_ENABLE = yes
