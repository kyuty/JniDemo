package com.kyuty.jnidemo;

/**
 * Created by kyuty on 2016/3/22.
 */
public class MyNDK {
    static {
        System.loadLibrary("MyLib");
    }
    public native String getStringFromNative();
}
