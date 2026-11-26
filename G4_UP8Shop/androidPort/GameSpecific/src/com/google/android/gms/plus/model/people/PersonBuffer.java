// Decompiled from classes.dex (SourceFile: PersonBuffer.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.plus.model.people;

import com.google.android.gms.internal.kt;
public final class PersonBuffer extends com.google.android.gms.common.data.DataBuffer {
    // Fields
    private final com.google.android.gms.common.data.e b;

    // Methods
    public PersonBuffer(com.google.android.gms.common.data.DataHolder p0)
    {
      super(p0);
      if ( p0.f() != null && p0.f().getBoolean("com.google.android.gms.plus.IsSafeParcelable", false) )
        this.b = new com.google.android.gms.common.data.e(p0, (android.os.Parcelable.Creator)kt.CREATOR);
      else
        this.b = null;
    }

    private com.google.android.gms.plus.model.people.Person a(int p0)
    {
      if ( this.b != null )
        return (com.google.android.gms.plus.model.people.Person)this.b.a(p0);
      else
        return (com.google.android.gms.plus.model.people.Person)new com.google.android.gms.internal.le(this.a, p0);
    }

    /* synthetic */ public final Object b(int p0)
    {
      if ( this.b != null )
        return (com.google.android.gms.plus.model.people.Person)this.b.a(p0);
      else
        return new com.google.android.gms.internal.le(this.a, p0);
    }

}
