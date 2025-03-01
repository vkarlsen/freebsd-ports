--- gpu/command_buffer/service/webgpu_decoder_impl.cc.orig	2023-02-11 09:11:04 UTC
+++ gpu/command_buffer/service/webgpu_decoder_impl.cc
@@ -1225,7 +1225,7 @@ void WebGPUDecoderImpl::RequestAdapterImpl(
 
   if (gr_context_type_ != GrContextType::kVulkan &&
       use_webgpu_adapter_ != WebGPUAdapterName::kCompat) {
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
     callback(WGPURequestAdapterStatus_Unavailable, nullptr,
              "WebGPU on Linux requires command-line flag "
              "--enable-features=Vulkan",
