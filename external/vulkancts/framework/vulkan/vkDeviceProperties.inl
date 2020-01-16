/* WARNING: This is auto-generated file. Do not modify, since changes will
 * be lost! Modify the generating script instead.
 */
#include "vkDeviceProperties.hpp"

namespace vk
{
#define VK_EXT_BLEND_OPERATION_ADVANCED_EXTENSION_NAME "VK_EXT_blend_operation_advanced"
#define VK_EXT_CONSERVATIVE_RASTERIZATION_EXTENSION_NAME "VK_EXT_conservative_rasterization"
#define VK_NV_COOPERATIVE_MATRIX_EXTENSION_NAME "VK_NV_cooperative_matrix"
#define VK_KHR_DEPTH_STENCIL_RESOLVE_EXTENSION_NAME "VK_KHR_depth_stencil_resolve"
#define VK_EXT_DESCRIPTOR_INDEXING_EXTENSION_NAME "VK_EXT_descriptor_indexing"
#define VK_EXT_DISCARD_RECTANGLES_EXTENSION_NAME "VK_EXT_discard_rectangles"
#define DECL_DRIVER_EXTENSION_NAME "not_existent_property"
#define VK_EXT_EXTERNAL_MEMORY_HOST_EXTENSION_NAME "VK_EXT_external_memory_host"
#define VK_KHR_SHADER_FLOAT_CONTROLS_EXTENSION_NAME "VK_KHR_shader_float_controls"
#define VK_EXT_FRAGMENT_DENSITY_MAP_EXTENSION_NAME "VK_EXT_fragment_density_map"
#define VK_EXT_INLINE_UNIFORM_BLOCK_EXTENSION_NAME "VK_EXT_inline_uniform_block"
#define VK_EXT_LINE_RASTERIZATION_EXTENSION_NAME "VK_EXT_line_rasterization"
#define VK_KHR_MAINTENANCE3_EXTENSION_NAME "VK_KHR_maintenance3"
#define DECL_2_MEMORY_EXTENSION_NAME "not_existent_property"
#define VK_EXT_MEMORY_BUDGET_EXTENSION_NAME "VK_EXT_memory_budget"
#define VK_NV_MESH_SHADER_EXTENSION_NAME  "VK_NV_mesh_shader"
#define VK_KHR_MULTIVIEW_EXTENSION_NAME   "VK_KHR_multiview"
#define VK_NVX_MULTIVIEW_PER_VIEW_ATTRIBUTES_EXTENSION_NAME "VK_NVX_multiview_per_view_attributes"
#define VK_KHR_PERFORMANCE_QUERY_EXTENSION_NAME "VK_KHR_performance_query"
#define DECL_POINT_CLIPPING_EXTENSION_NAME "not_existent_property"
#define DECL_PROTECTED_MEMORY_EXTENSION_NAME "not_existent_property"
#define VK_KHR_PUSH_DESCRIPTOR_EXTENSION_NAME "VK_KHR_push_descriptor"
#define VK_NV_RAY_TRACING_EXTENSION_NAME  "VK_NV_ray_tracing"
#define VK_EXT_SAMPLER_FILTER_MINMAX_EXTENSION_NAME "VK_EXT_sampler_filter_minmax"
#define VK_EXT_SAMPLE_LOCATIONS_EXTENSION_NAME "VK_EXT_sample_locations"
#define DECL_AMD_SHADER_CORE_EXTENSION_NAME "not_existent_property"
#define VK_NV_SHADING_RATE_IMAGE_EXTENSION_NAME "VK_NV_shading_rate_image"
#define DECL_SUBGROUP_EXTENSION_NAME "not_existent_property"
#define VK_EXT_SUBGROUP_SIZE_CONTROL_EXTENSION_NAME "VK_EXT_subgroup_size_control"
#define VK_EXT_TEXEL_BUFFER_ALIGNMENT_EXTENSION_NAME "VK_EXT_texel_buffer_alignment"
#define VK_KHR_TIMELINE_SEMAPHORE_EXTENSION_NAME "VK_KHR_timeline_semaphore"
#define DECL_EXT_TOOL_EXTENSION_NAME "not_existent_property"
#define VK_EXT_TRANSFORM_FEEDBACK_EXTENSION_NAME "VK_EXT_transform_feedback"
#define VK_EXT_VERTEX_ATTRIBUTE_DIVISOR_EXTENSION_NAME "VK_EXT_vertex_attribute_divisor"


template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT>(void) { return PropertyDesc(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT, VK_EXT_BLEND_OPERATION_ADVANCED_EXTENSION_NAME, VK_EXT_BLEND_OPERATION_ADVANCED_SPEC_VERSION, 34); }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceConservativeRasterizationPropertiesEXT>(void) { return PropertyDesc(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT, VK_EXT_CONSERVATIVE_RASTERIZATION_EXTENSION_NAME, VK_EXT_CONSERVATIVE_RASTERIZATION_SPEC_VERSION, 33); }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceCooperativeMatrixPropertiesNV>(void) { return PropertyDesc(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV, VK_NV_COOPERATIVE_MATRIX_EXTENSION_NAME, VK_NV_COOPERATIVE_MATRIX_SPEC_VERSION, 32); }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceDepthStencilResolveProperties>(void) { return PropertyDesc(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES, VK_KHR_DEPTH_STENCIL_RESOLVE_EXTENSION_NAME, VK_KHR_DEPTH_STENCIL_RESOLVE_SPEC_VERSION, 31); }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceDescriptorIndexingProperties>(void) { return PropertyDesc(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES, VK_EXT_DESCRIPTOR_INDEXING_EXTENSION_NAME, VK_EXT_DESCRIPTOR_INDEXING_SPEC_VERSION, 30); }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceDiscardRectanglePropertiesEXT>(void) { return PropertyDesc(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT, VK_EXT_DISCARD_RECTANGLES_EXTENSION_NAME, VK_EXT_DISCARD_RECTANGLES_SPEC_VERSION, 29); }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceDriverProperties>(void) { return PropertyDesc(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES, DECL_DRIVER_EXTENSION_NAME, 0, 28); }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceExternalMemoryHostPropertiesEXT>(void) { return PropertyDesc(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT, VK_EXT_EXTERNAL_MEMORY_HOST_EXTENSION_NAME, VK_EXT_EXTERNAL_MEMORY_HOST_SPEC_VERSION, 27); }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceFloatControlsProperties>(void) { return PropertyDesc(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES, VK_KHR_SHADER_FLOAT_CONTROLS_EXTENSION_NAME, VK_KHR_SHADER_FLOAT_CONTROLS_SPEC_VERSION, 26); }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceFragmentDensityMapPropertiesEXT>(void) { return PropertyDesc(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT, VK_EXT_FRAGMENT_DENSITY_MAP_EXTENSION_NAME, VK_EXT_FRAGMENT_DENSITY_MAP_SPEC_VERSION, 25); }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceInlineUniformBlockPropertiesEXT>(void) { return PropertyDesc(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES_EXT, VK_EXT_INLINE_UNIFORM_BLOCK_EXTENSION_NAME, VK_EXT_INLINE_UNIFORM_BLOCK_SPEC_VERSION, 24); }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceLineRasterizationPropertiesEXT>(void) { return PropertyDesc(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_EXT, VK_EXT_LINE_RASTERIZATION_EXTENSION_NAME, VK_EXT_LINE_RASTERIZATION_SPEC_VERSION, 23); }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceMaintenance3Properties>(void) { return PropertyDesc(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES, VK_KHR_MAINTENANCE3_EXTENSION_NAME, VK_KHR_MAINTENANCE3_SPEC_VERSION, 22); }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceMemoryProperties2>(void) { return PropertyDesc(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2, DECL_2_MEMORY_EXTENSION_NAME, 0, 21); }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceMemoryBudgetPropertiesEXT>(void) { return PropertyDesc(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT, VK_EXT_MEMORY_BUDGET_EXTENSION_NAME, VK_EXT_MEMORY_BUDGET_SPEC_VERSION, 20); }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceMeshShaderPropertiesNV>(void) { return PropertyDesc(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV, VK_NV_MESH_SHADER_EXTENSION_NAME, VK_NV_MESH_SHADER_SPEC_VERSION, 19); }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceMultiviewProperties>(void) { return PropertyDesc(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES, VK_KHR_MULTIVIEW_EXTENSION_NAME, VK_KHR_MULTIVIEW_SPEC_VERSION, 18); }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX>(void) { return PropertyDesc(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX, VK_NVX_MULTIVIEW_PER_VIEW_ATTRIBUTES_EXTENSION_NAME, VK_NVX_MULTIVIEW_PER_VIEW_ATTRIBUTES_SPEC_VERSION, 17); }
template<> PropertyDesc makePropertyDesc<VkPhysicalDevicePerformanceQueryPropertiesKHR>(void) { return PropertyDesc(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_PROPERTIES_KHR, VK_KHR_PERFORMANCE_QUERY_EXTENSION_NAME, VK_KHR_PERFORMANCE_QUERY_SPEC_VERSION, 16); }
template<> PropertyDesc makePropertyDesc<VkPhysicalDevicePointClippingProperties>(void) { return PropertyDesc(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES, DECL_POINT_CLIPPING_EXTENSION_NAME, 0, 15); }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceProtectedMemoryProperties>(void) { return PropertyDesc(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES, DECL_PROTECTED_MEMORY_EXTENSION_NAME, 0, 14); }
template<> PropertyDesc makePropertyDesc<VkPhysicalDevicePushDescriptorPropertiesKHR>(void) { return PropertyDesc(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR, VK_KHR_PUSH_DESCRIPTOR_EXTENSION_NAME, VK_KHR_PUSH_DESCRIPTOR_SPEC_VERSION, 13); }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceRayTracingPropertiesNV>(void) { return PropertyDesc(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV, VK_NV_RAY_TRACING_EXTENSION_NAME, VK_NV_RAY_TRACING_SPEC_VERSION, 12); }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceSamplerFilterMinmaxProperties>(void) { return PropertyDesc(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES, VK_EXT_SAMPLER_FILTER_MINMAX_EXTENSION_NAME, VK_EXT_SAMPLER_FILTER_MINMAX_SPEC_VERSION, 11); }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceSampleLocationsPropertiesEXT>(void) { return PropertyDesc(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT, VK_EXT_SAMPLE_LOCATIONS_EXTENSION_NAME, VK_EXT_SAMPLE_LOCATIONS_SPEC_VERSION, 10); }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceShaderCorePropertiesAMD>(void) { return PropertyDesc(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD, DECL_AMD_SHADER_CORE_EXTENSION_NAME, 0, 9); }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceShadingRateImagePropertiesNV>(void) { return PropertyDesc(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV, VK_NV_SHADING_RATE_IMAGE_EXTENSION_NAME, VK_NV_SHADING_RATE_IMAGE_SPEC_VERSION, 8); }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceSubgroupProperties>(void) { return PropertyDesc(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES, DECL_SUBGROUP_EXTENSION_NAME, 0, 7); }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceSubgroupSizeControlPropertiesEXT>(void) { return PropertyDesc(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES_EXT, VK_EXT_SUBGROUP_SIZE_CONTROL_EXTENSION_NAME, VK_EXT_SUBGROUP_SIZE_CONTROL_SPEC_VERSION, 6); }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT>(void) { return PropertyDesc(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES_EXT, VK_EXT_TEXEL_BUFFER_ALIGNMENT_EXTENSION_NAME, VK_EXT_TEXEL_BUFFER_ALIGNMENT_SPEC_VERSION, 5); }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceTimelineSemaphoreProperties>(void) { return PropertyDesc(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES, VK_KHR_TIMELINE_SEMAPHORE_EXTENSION_NAME, VK_KHR_TIMELINE_SEMAPHORE_SPEC_VERSION, 4); }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceToolPropertiesEXT>(void) { return PropertyDesc(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TOOL_PROPERTIES_EXT, DECL_EXT_TOOL_EXTENSION_NAME, 0, 3); }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceTransformFeedbackPropertiesEXT>(void) { return PropertyDesc(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT, VK_EXT_TRANSFORM_FEEDBACK_EXTENSION_NAME, VK_EXT_TRANSFORM_FEEDBACK_SPEC_VERSION, 2); }
template<> PropertyDesc makePropertyDesc<VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT>(void) { return PropertyDesc(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT, VK_EXT_VERTEX_ATTRIBUTE_DIVISOR_EXTENSION_NAME, VK_EXT_VERTEX_ATTRIBUTE_DIVISOR_SPEC_VERSION, 1); }


static const PropertyStructMapItem propertyStructCreatorMap[] =
{
	{ createPropertyStructWrapper<VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT>, VK_EXT_BLEND_OPERATION_ADVANCED_EXTENSION_NAME, VK_EXT_BLEND_OPERATION_ADVANCED_SPEC_VERSION },
	{ createPropertyStructWrapper<VkPhysicalDeviceConservativeRasterizationPropertiesEXT>, VK_EXT_CONSERVATIVE_RASTERIZATION_EXTENSION_NAME, VK_EXT_CONSERVATIVE_RASTERIZATION_SPEC_VERSION },
	{ createPropertyStructWrapper<VkPhysicalDeviceCooperativeMatrixPropertiesNV>, VK_NV_COOPERATIVE_MATRIX_EXTENSION_NAME, VK_NV_COOPERATIVE_MATRIX_SPEC_VERSION },
	{ createPropertyStructWrapper<VkPhysicalDeviceDepthStencilResolveProperties>, VK_KHR_DEPTH_STENCIL_RESOLVE_EXTENSION_NAME, VK_KHR_DEPTH_STENCIL_RESOLVE_SPEC_VERSION },
	{ createPropertyStructWrapper<VkPhysicalDeviceDescriptorIndexingProperties>, VK_EXT_DESCRIPTOR_INDEXING_EXTENSION_NAME, VK_EXT_DESCRIPTOR_INDEXING_SPEC_VERSION },
	{ createPropertyStructWrapper<VkPhysicalDeviceDiscardRectanglePropertiesEXT>, VK_EXT_DISCARD_RECTANGLES_EXTENSION_NAME, VK_EXT_DISCARD_RECTANGLES_SPEC_VERSION },
	{ createPropertyStructWrapper<VkPhysicalDeviceDriverProperties>, DECL_DRIVER_EXTENSION_NAME, 0 },
	{ createPropertyStructWrapper<VkPhysicalDeviceExternalMemoryHostPropertiesEXT>, VK_EXT_EXTERNAL_MEMORY_HOST_EXTENSION_NAME, VK_EXT_EXTERNAL_MEMORY_HOST_SPEC_VERSION },
	{ createPropertyStructWrapper<VkPhysicalDeviceFloatControlsProperties>, VK_KHR_SHADER_FLOAT_CONTROLS_EXTENSION_NAME, VK_KHR_SHADER_FLOAT_CONTROLS_SPEC_VERSION },
	{ createPropertyStructWrapper<VkPhysicalDeviceFragmentDensityMapPropertiesEXT>, VK_EXT_FRAGMENT_DENSITY_MAP_EXTENSION_NAME, VK_EXT_FRAGMENT_DENSITY_MAP_SPEC_VERSION },
	{ createPropertyStructWrapper<VkPhysicalDeviceInlineUniformBlockPropertiesEXT>, VK_EXT_INLINE_UNIFORM_BLOCK_EXTENSION_NAME, VK_EXT_INLINE_UNIFORM_BLOCK_SPEC_VERSION },
	{ createPropertyStructWrapper<VkPhysicalDeviceLineRasterizationPropertiesEXT>, VK_EXT_LINE_RASTERIZATION_EXTENSION_NAME, VK_EXT_LINE_RASTERIZATION_SPEC_VERSION },
	{ createPropertyStructWrapper<VkPhysicalDeviceMaintenance3Properties>, VK_KHR_MAINTENANCE3_EXTENSION_NAME, VK_KHR_MAINTENANCE3_SPEC_VERSION },
	{ createPropertyStructWrapper<VkPhysicalDeviceMemoryProperties2>, DECL_2_MEMORY_EXTENSION_NAME, 0 },
	{ createPropertyStructWrapper<VkPhysicalDeviceMemoryBudgetPropertiesEXT>, VK_EXT_MEMORY_BUDGET_EXTENSION_NAME, VK_EXT_MEMORY_BUDGET_SPEC_VERSION },
	{ createPropertyStructWrapper<VkPhysicalDeviceMeshShaderPropertiesNV>, VK_NV_MESH_SHADER_EXTENSION_NAME, VK_NV_MESH_SHADER_SPEC_VERSION },
	{ createPropertyStructWrapper<VkPhysicalDeviceMultiviewProperties>, VK_KHR_MULTIVIEW_EXTENSION_NAME, VK_KHR_MULTIVIEW_SPEC_VERSION },
	{ createPropertyStructWrapper<VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX>, VK_NVX_MULTIVIEW_PER_VIEW_ATTRIBUTES_EXTENSION_NAME, VK_NVX_MULTIVIEW_PER_VIEW_ATTRIBUTES_SPEC_VERSION },
	{ createPropertyStructWrapper<VkPhysicalDevicePerformanceQueryPropertiesKHR>, VK_KHR_PERFORMANCE_QUERY_EXTENSION_NAME, VK_KHR_PERFORMANCE_QUERY_SPEC_VERSION },
	{ createPropertyStructWrapper<VkPhysicalDevicePointClippingProperties>, DECL_POINT_CLIPPING_EXTENSION_NAME, 0 },
	{ createPropertyStructWrapper<VkPhysicalDeviceProtectedMemoryProperties>, DECL_PROTECTED_MEMORY_EXTENSION_NAME, 0 },
	{ createPropertyStructWrapper<VkPhysicalDevicePushDescriptorPropertiesKHR>, VK_KHR_PUSH_DESCRIPTOR_EXTENSION_NAME, VK_KHR_PUSH_DESCRIPTOR_SPEC_VERSION },
	{ createPropertyStructWrapper<VkPhysicalDeviceRayTracingPropertiesNV>, VK_NV_RAY_TRACING_EXTENSION_NAME, VK_NV_RAY_TRACING_SPEC_VERSION },
	{ createPropertyStructWrapper<VkPhysicalDeviceSamplerFilterMinmaxProperties>, VK_EXT_SAMPLER_FILTER_MINMAX_EXTENSION_NAME, VK_EXT_SAMPLER_FILTER_MINMAX_SPEC_VERSION },
	{ createPropertyStructWrapper<VkPhysicalDeviceSampleLocationsPropertiesEXT>, VK_EXT_SAMPLE_LOCATIONS_EXTENSION_NAME, VK_EXT_SAMPLE_LOCATIONS_SPEC_VERSION },
	{ createPropertyStructWrapper<VkPhysicalDeviceShaderCorePropertiesAMD>, DECL_AMD_SHADER_CORE_EXTENSION_NAME, 0 },
	{ createPropertyStructWrapper<VkPhysicalDeviceShadingRateImagePropertiesNV>, VK_NV_SHADING_RATE_IMAGE_EXTENSION_NAME, VK_NV_SHADING_RATE_IMAGE_SPEC_VERSION },
	{ createPropertyStructWrapper<VkPhysicalDeviceSubgroupProperties>, DECL_SUBGROUP_EXTENSION_NAME, 0 },
	{ createPropertyStructWrapper<VkPhysicalDeviceSubgroupSizeControlPropertiesEXT>, VK_EXT_SUBGROUP_SIZE_CONTROL_EXTENSION_NAME, VK_EXT_SUBGROUP_SIZE_CONTROL_SPEC_VERSION },
	{ createPropertyStructWrapper<VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT>, VK_EXT_TEXEL_BUFFER_ALIGNMENT_EXTENSION_NAME, VK_EXT_TEXEL_BUFFER_ALIGNMENT_SPEC_VERSION },
	{ createPropertyStructWrapper<VkPhysicalDeviceTimelineSemaphoreProperties>, VK_KHR_TIMELINE_SEMAPHORE_EXTENSION_NAME, VK_KHR_TIMELINE_SEMAPHORE_SPEC_VERSION },
	{ createPropertyStructWrapper<VkPhysicalDeviceToolPropertiesEXT>, DECL_EXT_TOOL_EXTENSION_NAME, 0 },
	{ createPropertyStructWrapper<VkPhysicalDeviceTransformFeedbackPropertiesEXT>, VK_EXT_TRANSFORM_FEEDBACK_EXTENSION_NAME, VK_EXT_TRANSFORM_FEEDBACK_SPEC_VERSION },
	{ createPropertyStructWrapper<VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT>, VK_EXT_VERTEX_ATTRIBUTE_DIVISOR_EXTENSION_NAME, VK_EXT_VERTEX_ATTRIBUTE_DIVISOR_SPEC_VERSION },
};
} // vk

