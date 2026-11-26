// Decompiled from classes.dex (SourceFile: n$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

final class n$1 extends android.os.AsyncTask {
    // Fields
    final java.lang.String[] a;

    // Methods
    n$1(String[] p0)
    {
      super();
      this.a = p0;
    
    }

    protected final Void a(Void[] p0)
    {
      n.a(bo.a(), this.a);
      return null;
    }

    /* synthetic */ protected final Object doInBackground(Object[] p0)
    {
      return this.a((Void[])p0);
    }

}
