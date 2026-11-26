// Decompiled from classes.dex (SourceFile: j.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.metadata.internal;

public abstract class j<T extends android.os.Parcelable> extends com.google.android.gms.drive.metadata.a<T> {
    // Methods
    public j(String p0, java.util.Collection<String> p1, java.util.Collection<String> p2, int p3)
    {
      super(p0, p1, p2, p3);
    }

    private void a(android.os.Bundle p0, T p1)
    {
      p0.putParcelable(this.a(), p1);
    }

    private T c(android.os.Bundle p0)
    {
      return (T)p0.getParcelable(this.a());
    }

    /* synthetic */ protected final void a(android.os.Bundle p0, Object p1)
    {
      p0.putParcelable(this.a(), (android.os.Parcelable)p1);
    }

    /* synthetic */ protected final Object b(android.os.Bundle p0)
    {
      return (T)p0.getParcelable(this.a());
    }

}
