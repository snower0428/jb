THEOS_DEVICE_IP = 172.18.28.110
ARCHS = armv7
TARGET = iphone:7.1:5.0

include theos/makefiles/common.mk

TWEAK_NAME = demo
demo_FILES = Tweak.xm
demo_FRAMEWORKS = UIKit

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 SpringBoard"
