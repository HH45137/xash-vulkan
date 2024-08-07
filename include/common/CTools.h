#pragma once

#include <vulkan/vulkan.hpp>
#include <iostream>

namespace REF_VK {

    const long DEFAULT_FENCE_TIMEOUT = 999999999;

    enum LOG_ERRORS {
        NORMAL,
        ERR,
        DEBUG,
    };

    void LOG(LOG_ERRORS type, const char *text);

    bool VK_CHECK_RESULT(VkResult res);

    bool VK_CHECK_RESULT(VkResult res, const char *text);

    VkBool32 getSupportedDepthStencilFormat(VkPhysicalDevice phyDevice, VkFormat *depthStencilFormat);

    VkBool32 getSupportedDepthFormat(VkPhysicalDevice phyDevice, VkFormat *depthFormat);

    VkCommandBufferAllocateInfo
    genCommandBufferAllocateInfo(VkCommandPool commandPool, VkCommandBufferLevel level, uint32_t bufferCount);

    VkFenceCreateInfo genFenceCreateInfo(VkFenceCreateFlags flags = 0);

    VkShaderModule loadSPIRVShader(VkDevice device, std::string fileName);

    std::string getBasedAssetsPath();
}
