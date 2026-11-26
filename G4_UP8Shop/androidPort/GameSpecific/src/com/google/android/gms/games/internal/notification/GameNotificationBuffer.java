// Decompiled from classes.dex (SourceFile: GameNotificationBuffer.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.notification;

public final class GameNotificationBuffer extends com.google.android.gms.common.data.DataBuffer {
    public GameNotificationBuffer(com.google.android.gms.common.data.DataHolder p0) { super(p0); }
    // Methods
    private com.google.android.gms.games.internal.notification.GameNotification a(int p0)
    {
      return (com.google.android.gms.games.internal.notification.GameNotification)new com.google.android.gms.games.internal.notification.GameNotificationRef(this.a, p0);
    }

    /* synthetic */ public final Object b(int p0)
    {
      return new com.google.android.gms.games.internal.notification.GameNotificationRef(this.a, p0);
    }

}
