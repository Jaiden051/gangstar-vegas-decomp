// Decompiled from classes.dex (SourceFile: PendingResult.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.api;

public interface PendingResult<R extends com.google.android.gms.common.api.Result> {
    // Methods
    public abstract com.google.android.gms.common.api.Result a(long p0, java.util.concurrent.TimeUnit p1) throws android.os.RemoteException;

    public abstract void a() throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.common.api.PendingResult$a p0) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.common.api.ResultCallback<R> p0) throws android.os.RemoteException;

    public abstract void a(com.google.android.gms.common.api.ResultCallback<R> p0, long p1, java.util.concurrent.TimeUnit p2) throws android.os.RemoteException, java.io.UnsupportedEncodingException, com.google.android.gms.internal.me;

    public abstract com.google.android.gms.common.api.Result b() throws android.os.RemoteException;

    public abstract boolean c();

}
