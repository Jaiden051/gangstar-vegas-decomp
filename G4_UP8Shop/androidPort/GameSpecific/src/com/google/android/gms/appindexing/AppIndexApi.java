// Decompiled from classes.dex (SourceFile: AppIndexApi.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.appindexing;

public interface AppIndexApi {
    // Methods
    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, android.app.Activity p1, android.net.Uri p2) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, android.app.Activity p1, android.net.Uri p2, java.lang.String p3, android.net.Uri p4, java.util.List<com.google.android.gms.appindexing.AppIndexApi$AppIndexingLink> p5) throws android.os.RemoteException, com.google.android.gms.internal.me, java.io.UnsupportedEncodingException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, android.content.Intent p1) throws android.os.RemoteException;

    public abstract com.google.android.gms.common.api.PendingResult a(com.google.android.gms.common.api.GoogleApiClient p0, android.content.Intent p1, java.lang.String p2, android.net.Uri p3, java.util.List<com.google.android.gms.appindexing.AppIndexApi$AppIndexingLink> p4) throws android.os.RemoteException, com.google.android.gms.internal.me, java.io.UnsupportedEncodingException;

}
