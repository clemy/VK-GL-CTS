include_directories(
	..
	../util
	${DEQP_INL_DIR}
	)

set(DEQP_VK_CLIPPING_SRCS
	vktClippingTests.cpp
	vktClippingTests.hpp
	)

add_library(deqp-vk-clipping STATIC ${DEQP_VK_CLIPPING_SRCS})
target_link_libraries(deqp-vk-clipping deqp-vk-util tcutil vkutil)

add_library(deqp-vksc-clipping STATIC ${DEQP_VK_CLIPPING_SRCS})
target_link_libraries(deqp-vksc-clipping PUBLIC deqp-vksc-util tcutil vkscutil)
