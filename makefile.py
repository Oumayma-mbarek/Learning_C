import powermake

def on_build(config: powermake.Config):
    config.add_flags("-Wall", "-Wextra","-fanalyzer")


    files = {"len_using_pointers.c"}
    objects = powermake.compile_files(config, files)

    powermake.link_files(config, objects)

powermake.run("len_using_pointers", build_callback=on_build)
