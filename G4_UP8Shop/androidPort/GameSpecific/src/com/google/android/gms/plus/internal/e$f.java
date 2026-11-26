// Decompiled from classes.dex (SourceFile: e$f.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.plus.internal;

final class e$f extends com.google.android.gms.internal.hc$d implements com.google.android.gms.plus.People$LoadPeopleResult {
    // Fields
    final com.google.android.gms.plus.internal.e a;
    private final com.google.android.gms.common.api.Status b;
    private final java.lang.String c;
    private com.google.android.gms.plus.model.people.PersonBuffer f;

    // Methods
    public e$f(
            com.google.android.gms.plus.internal.e p0,
            com.google.android.gms.common.api.a$d p1,
            com.google.android.gms.common.api.Status p2,
            com.google.android.gms.common.data.DataHolder p3,
            String p4)
    {
      super(p0, p1, p3);
      this.a = p0;
      this.b = p2;
      this.c = p4;
    
    }

    private void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.plus.People$LoadPeopleResult> p0,
            com.google.android.gms.common.data.DataHolder p1)
 throws android.os.RemoteException {
      com.google.android.gms.plus.model.people.PersonBuffer v3;
      if ( p1 != null )
        v3 = new com.google.android.gms.plus.model.people.PersonBuffer(p1);
      else
        v3 = null;
      this.f = v3;
      p0.a(this);
    }

    public final com.google.android.gms.common.api.Status D_()
    {
      return this.b;
    }

    public final com.google.android.gms.plus.model.people.PersonBuffer H_()
    {
      return this.f;
    }

    /* synthetic */ protected final void a(Object p0, com.google.android.gms.common.data.DataHolder p1)
 throws android.os.RemoteException {
      com.google.android.gms.common.api.a$d v3;
      com.google.android.gms.plus.model.people.PersonBuffer v4;
      v3 = (com.google.android.gms.common.api.a$d)p0;
      if ( p1 != null )
        v4 = new com.google.android.gms.plus.model.people.PersonBuffer(p1);
      else
        v4 = null;
      this.f = v4;
      v3.a(this);
    }

    public final String c()
    {
      return this.c;
    }

    public final void d()
    {
      if ( this.f != null )
        this.f.c();
    }

}
