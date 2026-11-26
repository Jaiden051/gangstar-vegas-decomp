// Decompiled from classes.dex (SourceFile: IControllerListener.java) via IDA Pro 9.5 Dalvik Decompiler
package com.bda.controller;

public interface IControllerListener extends android.os.IInterface {
    // Methods
    public abstract void a(com.bda.controller.KeyEvent p0) throws android.os.RemoteException;

    public abstract void a(com.bda.controller.MotionEvent p0) throws android.os.RemoteException;

    public abstract void a(com.bda.controller.StateEvent p0) throws android.os.RemoteException;

}
