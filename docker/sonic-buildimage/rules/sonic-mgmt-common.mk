# SONiC mgmt-common package

MGMT_COMMON_VERSION = 1.0.0
SONIC_MGMT_COMMON = sonic-mgmt-common_$(MGMT_COMMON_VERSION)_$(CONFIGURED_ARCH).deb
$(SONIC_MGMT_COMMON)_SRC_PATH = $(SRC_PATH)/sonic-mgmt-common
$(SONIC_MGMT_COMMON)_DEPENDS  = $(LIBYANG_DEV) $(LIBYANG)
$(SONIC_MGMT_COMMON)_RDEPENDS = $(LIBYANG)
$(SONIC_MGMT_COMMON)_WHEEL_DEPENDS = $(SONIC_YANG_MODELS_PY3)
SONIC_DPKG_DEBS += $(SONIC_MGMT_COMMON)

SONIC_MGMT_COMMON_CODEGEN = sonic-mgmt-common-codegen_$(MGMT_COMMON_VERSION)_$(CONFIGURED_ARCH).deb
$(eval $(call add_derived_package,$(SONIC_MGMT_COMMON),$(SONIC_MGMT_COMMON_CODEGEN)))
