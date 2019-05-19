Import('env')
CICLIB = env.StaticLibrary('CICLIB',Glob('src/main/cpp/*.cpp'))
env.Program('test',['src/test/cpp/main_test.cpp'] + CICLIB,LIBS = ['ncursesw'])

