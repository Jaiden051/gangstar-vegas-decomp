// Decompiled from classes.dex (SourceFile: RequestsImpl$5.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

class RequestsImpl$5 extends com.google.android.gms.games.internal.api.RequestsImpl$SendRequestImpl {
    // Fields
    java.lang.String a;
    java.lang.String[] b;
    int c;
    byte[] d;
    int e;

    // Methods
    protected void a(com.google.android.gms.games.internal.GamesClientImpl p0)
    {
      p0.a((com.google.android.gms.common.api.a$d)this, this.a, this.b, this.c, this.d, this.e);
    }

    /* bridge */ protected final void a(com.google.android.gms.common.api.Api$a p0)
    {
      ((com.google.android.gms.games.internal.GamesClientImpl)p0).a((com.google.android.gms.common.api.a$d)this, this.a, this.b, this.c, this.d, this.e);
    }

}
