LOCAL_DIR := $(GET_LOCAL_DIR)

ifeq ($(SONY_S1_SUPPORT), yes)
MODULES += \
	app/s1
else
MODULES += \
	lib/openssl
endif

OBJS += \
	$(LOCAL_DIR)/app.o

