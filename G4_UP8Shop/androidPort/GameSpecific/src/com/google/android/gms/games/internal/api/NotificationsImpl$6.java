// Decompiled from classes.dex (SourceFile: NotificationsImpl$6.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

class NotificationsImpl$6 extends com.google.android.gms.games.internal.api.NotificationsImpl$ContactSettingUpdateImpl {
    // Fields
    boolean a;
    android.os.Bundle b;

    // Methods
    protected void a(com.google.android.gms.games.internal.GamesClientImpl p0)
    {
      p0.a((com.google.android.gms.common.api.a$d)this, this.a, this.b);
    }

    /* bridge */ protected final void a(com.google.android.gms.common.api.Api$a p0)
    {
      ((com.google.android.gms.games.internal.GamesClientImpl)p0).a((com.google.android.gms.common.api.a$d)this, this.a, this.b);
    }

}
