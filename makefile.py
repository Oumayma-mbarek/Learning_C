import powermake

def on_build(config: powermake.Config):
    config.add_flags("-Wall", "-Wextra","-fanalyzer")


    files = {"fixer_bits.c"}
    objects = powermake.compile_files(config, files)

    powermake.link_files(config, objects)

powermake.run("fixer_bits", build_callback=on_build)
