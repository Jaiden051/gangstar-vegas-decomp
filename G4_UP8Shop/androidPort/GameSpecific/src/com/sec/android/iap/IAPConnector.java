// Decompiled from classes.dex (SourceFile: IAPConnector.java) via IDA Pro 9.5 Dalvik Decompiler
package com.sec.android.iap;

public interface IAPConnector extends android.os.IInterface {
    // Methods
    public abstract android.os.Bundle a(int p0) throws android.os.RemoteException;

    public abstract android.os.Bundle a(int p0, java.lang.String p1, java.lang.String p2, int p3, int p4, java.lang.String p5) throws android.os.RemoteException;

    public abstract android.os.Bundle a(java.lang.String p0, java.lang.String p1, int p2, int p3, java.lang.String p4, java.lang.String p5) throws android.os.RemoteException;

    public abstract boolean a(com.sec.android.iap.IAPServiceCallback p0) throws android.os.RemoteException;

    public abstract boolean a(com.sec.android.iap.IAPServiceCallback p0, android.os.Bundle p1) throws android.os.RemoteException;

}
