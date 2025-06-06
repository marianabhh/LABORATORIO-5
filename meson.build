project('json_project', 'c')

cjson_dep = dependency('cjson', required: true)

src = ['src/main.c', 'src/json.c']

executable('json_meson', src, dependencies: cjson_dep)
