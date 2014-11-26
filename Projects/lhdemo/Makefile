THEOS_DEVICE_IP = 192.168.1.100
ARCHS = armv7
TARGET = iPhone:7.1:5.0

include theos/makefiles/common.mk

TWEAK_NAME = lhdemo
lhdemo_FILES = Tweak.xm
lhdemo_FRAMEWORKS = UIKit iAd

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 SpringBoard"
