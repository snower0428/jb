THEOS_DEVICE_IP = 192.168.2.44
ARCHS = armv7
TARGET = iPhone:7.1:6.0

include theos/makefiles/common.mk

TWEAK_NAME = SaveInstagramPhoto
SaveInstagramPhoto_FILES = Tweak.xm TestAddMethod.m
SaveInstagramPhoto_FRAMEWORKS = Foundation UIKit

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 SpringBoard”
