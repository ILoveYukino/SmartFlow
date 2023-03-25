add_rules("mode.debug", "mode.release")
set_languages("c++20")

target("SmartFlow")
    set_kind("static")
    add_includedirs("src/*/.h")
    add_files("src/*/*.cpp")
    add_syslinks("pthread")