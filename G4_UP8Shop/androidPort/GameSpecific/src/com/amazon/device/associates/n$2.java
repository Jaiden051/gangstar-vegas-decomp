// Decompiled from classes.dex (SourceFile: n$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

final class n$2 extends android.os.AsyncTask {
    // Fields
    final java.lang.String a;

    // Methods
    n$2(String p0)
    {
      super();
      this.a = p0;
    
    }

    protected final Void a(Void[] p0)
    {
      String[] v2;
      if ( this.a != null && !this.a.trim().equals("") )
      {
        v2 = new String[1];
        v2[0] = this.a;
        n.a(n.a(), v2);
      }
      return null;
    }

    /* synthetic */ protected final Object doInBackground(Object[] p0)
    {
      return this.a((Void[])p0);
    }

}
