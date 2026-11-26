// Decompiled from classes.dex (SourceFile: i.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.metadata.internal;

public class i<T extends android.os.Parcelable> extends com.google.android.gms.drive.metadata.b<T> {
    // Methods
    public i(String p0, int p1)
    {
      super(p0, p1);
    }

    private void a(android.os.Bundle p0, java.util.Collection<T> p1)
    {
      p0.putParcelableArrayList(this.a(), new java.util.ArrayList(p1));
    }

    private java.util.Collection<T> c(android.os.Bundle p0)
    {
      return (java.util.Collection)p0.getParcelableArrayList(this.a());
    }

    /* synthetic */ protected final void a(android.os.Bundle p0, Object p1)
    {
      p0.putParcelableArrayList(this.a(), new java.util.ArrayList((java.util.Collection)p1));
    }

    /* synthetic */ protected final Object b(android.os.Bundle p0)
    {
      return (java.util.Collection)p0.getParcelableArrayList(this.a());
    }

}
