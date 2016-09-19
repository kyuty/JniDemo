# JniDemo

1.jni下有mk的情况

老式的:

1.第一种情况是老式的方法，so是通过mk来辅助生成的。

第一步右击java文件-->NDK-->javah（现象：生成jni目录，目录下有对应的.h文件）

第二步需要右击jni目录--> NDK --> ndk-build（现象：会生成libs目录，下面有生成的so）

    第三步在app目录下的build.gradle，defaultConfig目录下添加

    ndk {
        moduleName "as_first_jni"
    }
    sourceSets.main {
        jni.srcDirs = []
        jniLibs.srcDir "src/main/libs"
    }

    主要的目的是告诉Android Studio，我的jniLibs目录在哪里。其中jni.srcDirs = []可以去掉。

或者

   第三步在app目录下的build.gradle，defaultConfig目录下添加


        ndk {
            moduleName "as_first_jni"
        }

        然后把ndk-build生成的libs目录，更名为jniLibs。（jniLibs是AndroidStudio默认的名字，所以改成这个名字，Android Studio就能自动找到so库）

另外，moduleName的名字as_first_jni，不是System.loadLibrary("MyLib");里的MyLib，也没有问题，依旧运行成功。
