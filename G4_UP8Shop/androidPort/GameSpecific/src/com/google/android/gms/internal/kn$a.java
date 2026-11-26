// Decompiled from classes.dex (SourceFile: kn$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

abstract class kn$a extends com.google.android.gms.plus.Plus$a {
    // Methods
    private kn$a()
    {
      super();
    }

    /* synthetic */ kn$a(int p0)
    {
      this();
    }

    private com.google.android.gms.plus.People$LoadPeopleResult b(com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.plus.People$LoadPeopleResult)new com.google.android.gms.internal.kn$a$1(this, p0);
    }

    /* synthetic */ public final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.Result)new com.google.android.gms.internal.kn$a$1(this, p0);
    }

}
