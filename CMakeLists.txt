__tree_add_current(SRC)

set(DEFS)

__cc_find(aliyunoss_static)

if(NOT TARGET Qt5::Core)
	__prepare_core_qt5()
endif()

__add_real_target(osswrapper_static lib SOURCE ${SRC}
							 DEF ${DEFS} 
							 ILIB Qt5::Core aliyunoss_static
							 INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/alibabacoud/
							 )

if(CC_INSTALL_OSSWRAPPER_STATIC)
	__install_directory_specif(${CMAKE_CURRENT_SOURCE_DIR}/alibabacoud/ osswrapper_static)
endif()


