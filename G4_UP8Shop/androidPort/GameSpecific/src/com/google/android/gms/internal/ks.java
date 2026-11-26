// Decompiled from classes.dex (SourceFile: ks.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Parcel;
public final class ks extends com.google.android.gms.common.data.d implements com.google.android.gms.plus.model.moments.Moment {
    // Fields
    private com.google.android.gms.internal.kq c;

    // Methods
    public ks(com.google.android.gms.common.data.DataHolder p0, int p1)
    {
      super(p0, p1);
    }

    private com.google.android.gms.internal.kq a()
    {
      byte[] v1;
      android.os.Parcel v2;
      synchronized ( this )
      {
        if ( this.c == null )
        {
          v1 = this.g("momentImpl");
          v2 = Parcel.obtain();
          v2.unmarshall(v1, 0, v1.length);
          v2.setDataPosition(0);
          this.c = kr.bF(v2);
          v2.recycle();
        }
        return this.c;
      }
    }

    private com.google.android.gms.internal.kq b()
    {
      return this.a();
    }

    public final boolean B_()
    {
      return this.a().B_();
    }

    public final String f()
    {
      return this.a().f();
    }

    /* synthetic */ public final Object h()
    {
      return this.a();
    }

    public final com.google.android.gms.plus.model.moments.ItemScope j()
    {
      return this.a().j();
    }

    public final boolean l()
    {
      return this.a().B_();
    }

    public final String m()
    {
      return this.a().m();
    }

    public final boolean n()
    {
      return this.a().n();
    }

    public final com.google.android.gms.plus.model.moments.ItemScope o()
    {
      return this.a().o();
    }

    public final boolean q()
    {
      return this.a().q();
    }

    public final String r()
    {
      return this.a().r();
    }

    public final boolean s()
    {
      return this.a().s();
    }

}
