# CROSS COMPILER SETTING
SET(CMAKE_SYSTEM_NAME Generic)
CMAKE_MINIMUM_REQUIRED (VERSION 3.10.0)

# THE VERSION NUMBER
SET (Tutorial_VERSION_MAJOR 1)
SET (Tutorial_VERSION_MINOR 0)

# ENABLE ASM
ENABLE_LANGUAGE(ASM)

SET(CMAKE_STATIC_LIBRARY_PREFIX)
SET(CMAKE_STATIC_LIBRARY_SUFFIX)

SET(CMAKE_EXECUTABLE_LIBRARY_PREFIX)
SET(CMAKE_EXECUTABLE_LIBRARY_SUFFIX)

# CURRENT DIRECTORY
SET(ProjDirPath ${CMAKE_CURRENT_SOURCE_DIR})

SET(EXECUTABLE_OUTPUT_PATH ${ProjDirPath}/build)
SET(LIBRARY_OUTPUT_PATH ${ProjDirPath}/${CMAKE_BUILD_TYPE})


project(lvgl_guider)

set(MCUX_SDK_PROJECT_NAME lvgl_guider.elf)

include(${ProjDirPath}/flags.cmake)

include(${ProjDirPath}/config.cmake)

option(USE_ADVANCED_WIDGETS "Enable the advanced widgets" OFF)

file(GLOB SOURCES
${ProjDirPath}/../../custom/*.c
${ProjDirPath}/../../custom/*.h
${ProjDirPath}/../../generated/*.c
${ProjDirPath}/../../generated/*.h
${ProjDirPath}/../../generated/images/*.c
${ProjDirPath}/../../generated/images/*.h
${ProjDirPath}/../../generated/guider_fonts/*.c
${ProjDirPath}/../../generated/guider_fonts/*.h
${ProjDirPath}/../../generated/guider_customer_fonts/*.c
${ProjDirPath}/../../generated/guider_customer_fonts/*.h
)

add_executable(${MCUX_SDK_PROJECT_NAME}
"${ProjDirPath}/../Core/board/board.c"
"${ProjDirPath}/../Core/board/board.h"
"${ProjDirPath}/../Core/board/clock_config.c"
"${ProjDirPath}/../Core/board/clock_config.h"
"${ProjDirPath}/../Core/board/dcd.c"
"${ProjDirPath}/../Core/board/dcd.h"
"${ProjDirPath}/../Core/board/lvgl_support.c"
"${ProjDirPath}/../Core/board/lvgl_support.h"
"${ProjDirPath}/../Core/board/pin_mux.c"
"${ProjDirPath}/../Core/board/pin_mux.h"
"${ProjDirPath}/../Core/source/FreeRTOSConfig.h"
"${ProjDirPath}/../Core/source/lv_conf.h"
"${ProjDirPath}/../Core/source/lvgl_guider.c"
${SOURCES}
)

target_include_directories(${MCUX_SDK_PROJECT_NAME} PRIVATE
${ProjDirPath}/../Core/source
${ProjDirPath}/../Core/board
${ProjDirPath}/../../generated
${ProjDirPath}/../../custom
${ProjDirPath}/../../generated/guider_customer_fonts
${ProjDirPath}/../../generated/guider_fonts
)

set(CMAKE_MODULE_PATH
${ProjDirPath}/
${ProjDirPath}/../Core/CMSIS
${ProjDirPath}/../Core/component/lists
${ProjDirPath}/../Core/component/serial_manager
${ProjDirPath}/../Core/component/silicon_id
${ProjDirPath}/../Core/component/uart
${ProjDirPath}/../Core/device
${ProjDirPath}/../Core/drivers
${ProjDirPath}/../Core/freertos/freertos_kernel
${ProjDirPath}/../Core/lvgl
${ProjDirPath}/startup
${ProjDirPath}/../Core/touchpanel
${ProjDirPath}/../Core/utilities
${ProjDirPath}/../Core/video
${ProjDirPath}/../Core/xip
)

# include modules
include(driver_elcdif_MIMXRT1062)

include(driver_lpi2c_MIMXRT1062)

include(driver_ft5406_rt_MIMXRT1062)

include(driver_pxp_MIMXRT1062)

include(driver_cache_armv7_m7_MIMXRT1062)

include(driver_gt911_MIMXRT1062)

include(driver_video-common_MIMXRT1062)

include(middleware_freertos-kernel_heap_4_MIMXRT1062)

include(driver_common_MIMXRT1062)

include(driver_clock_MIMXRT1062)

include(middleware_lvgl_MIMXRT1062)

include(device_MIMXRT1062_CMSIS_MIMXRT1062)

include(utility_debug_console_MIMXRT1062)

include(component_lpuart_adapter_MIMXRT1062)

include(component_serial_manager_MIMXRT1062)

include(component_lists_MIMXRT1062)

include(component_serial_manager_uart_MIMXRT1062)

include(driver_lpuart_MIMXRT1062)

include(device_MIMXRT1062_startup_MIMXRT1062)

include(driver_iomuxc_MIMXRT1062)

include(utility_assert_MIMXRT1062)

include(driver_igpio_MIMXRT1062)

include(driver_xip_device_MIMXRT1062)

include(driver_xip_board_evkmimxrt1060_MIMXRT1062)

include(component_silicon_id_MIMXRT1062)

include(CMSIS_Include_core_cm_MIMXRT1062)

include(middleware_freertos-kernel_MIMXRT1062)

include(middleware_freertos-kernel_extension_MIMXRT1062)

include(utilities_misc_utilities_MIMXRT1062)

include(device_MIMXRT1062_system_MIMXRT1062)


TARGET_LINK_LIBRARIES(${MCUX_SDK_PROJECT_NAME} PRIVATE -Wl,--start-group)

target_link_libraries(${MCUX_SDK_PROJECT_NAME} PRIVATE m)

target_link_libraries(${MCUX_SDK_PROJECT_NAME} PRIVATE c)

target_link_libraries(${MCUX_SDK_PROJECT_NAME} PRIVATE gcc)

target_link_libraries(${MCUX_SDK_PROJECT_NAME} PRIVATE nosys)

if(USE_ADVANCED_WIDGETS)
target_link_libraries(${MCUX_SDK_PROJECT_NAME} PRIVATE ${ProjDirPath}/../../lib/arm/gcc/libadvanced_widgets.a)
endif()

TARGET_LINK_LIBRARIES(${MCUX_SDK_PROJECT_NAME} PRIVATE -Wl,--end-group)


