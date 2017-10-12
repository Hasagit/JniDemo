package com.jnidemo;

/**
 * Created by DengJf on 2017/10/10.
 */

public class JniUntil {
    public native String getString();

    static {
        System.loadLibrary("JniTest");
    }
}
