--- plugins/builtin/source/content/views/view_hex_editor.cpp.orig	2023-02-12 18:24:04 UTC
+++ plugins/builtin/source/content/views/view_hex_editor.cpp
@@ -297,7 +297,7 @@ namespace hex::plugin::builtin {
             reader.seek(this->m_searchPosition.value_or(provider->getBaseAddress()));
 
             constexpr static auto searchFunction = [](const auto &haystackBegin, const auto &haystackEnd, const auto &needleBegin, const auto &needleEnd) {
-                return std::search(haystackBegin, haystackEnd, std::boyer_moore_horspool_searcher(needleBegin, needleEnd));
+                return std::search(haystackBegin, haystackEnd, needleBegin, needleEnd);
             };
 
             if (!backwards) {
